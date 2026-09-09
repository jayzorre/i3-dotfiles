#!/bin/sh
[ "${TERM:-none}" = "linux" ] && \
    printf '%b' '\e]P0000000
                 \e]P1ff0000
                 \e]P2ff0000
                 \e]P3ff0000
                 \e]P4ff0000
                 \e]P5ff0000
                 \e]P6ff0000
                 \e]P7ffffff
                 \e]P8000000
                 \e]P9ff0000
                 \e]PAff0000
                 \e]PBff0000
                 \e]PCff0000
                 \e]PDff0000
                 \e]PEff0000
                 \e]PFffffff
                 \ec'
