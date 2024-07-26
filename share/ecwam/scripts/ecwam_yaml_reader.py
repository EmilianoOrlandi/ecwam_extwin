#!/usr/bin/env python3

# (C) Copyright 2021- ECMWF.
#
# This software is licensed under the terms of the Apache Licence Version 2.0
# which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
#
# In applying this licence, ECMWF does not waive the privileges and immunities
# granted to it by virtue of its status as an intergovernmental organisation nor
# does it submit to any jurisdiction.

try:
    from ecwam_pyyaml_reader import pyyaml_yaml_reader as YAML
except ImportError:
    from ruamel.yaml import YAML

__all__ = ["YAML"]