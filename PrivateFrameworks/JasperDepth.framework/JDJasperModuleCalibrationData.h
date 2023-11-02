
@interface JDJasperModuleCalibrationData : NSObject {
    struct _JasperCalib { 
        unsigned int version; 
        bool softGatingValid; 
        bool nominalPdeFromNVM; 
        unsigned char rsvd0[2]; 
        struct { 
            struct { 
                struct { 
                    struct { 
                        float bins[104]; 
                    } tdcs[2]; 
                } ref[2]; 
                struct { 
                    struct { 
                        float bins[104]; 
                    } tdcs[4]; 
                } img[144]; 
            } shortRange; 
            struct { 
                struct { 
                    struct { 
                        float bins[104]; 
                    } tdcs[2]; 
                } ref[2]; 
                struct { 
                    struct { 
                        float bins[104]; 
                    } tdcs[4]; 
                } img[144]; 
            } normalRange; 
        } DNL_INL; 
        BOOL QE[140][180]; 
        struct { 
            struct { 
                struct { 
                    float bins[64]; 
                    float tailParams[5]; 
                } banks[4]; 
            } widePulseShortRange; 
            struct { 
                struct { 
                    float bins[64]; 
                    float tailParams[5]; 
                } banks[4]; 
            } narrowPulseShortRange; 
        } pulseShape; 
        struct { 
            struct { 
                struct { 
                    struct { 
                        unsigned char spotId; 
                        unsigned char tileId; 
                        unsigned char strayIntensity; 
                        unsigned char rsvd; 
                        float strayPerSpot40; 
                        float strayPerSpot300; 
                        float strayMacA4x4; 
                        float strayMacB5x4; 
                        float WP2NP; 
                        float spotPower; 
                        float strayPerSpot40_6x6; 
                        float strayPerSpot300_6x6; 
                        unsigned char strayPerSpot40_6x6_max_x; 
                        unsigned char strayPerSpot40_6x6_max_y; 
                        unsigned char strayPerSpot300_6x6_max_x; 
                        unsigned char strayPerSpot300_6x6_max_y; 
                        float strayMacDeltaAB; 
                        float strayMacDeltaBA; 
                    } spots[144]; 
                } banks[4]; 
            } spotsData; 
            struct JasperCalibSpotLocations { 
                struct { 
                    struct { 
                        float x; 
                        float y; 
                    } spots[144]; 
                } banks[4]; 
                float calibDistance; 
                unsigned int rsvd0; 
            } locations; 
        } spots; 
        struct JasperCalibSpotLocations { 
            struct { 
                struct { 
                    float x; 
                    float y; 
                } spots[144]; 
            } banks[4]; 
            float calibDistance; 
            unsigned int rsvd0; 
        } operationalSpotLocations; 
        struct { 
            float mu; 
            float sigma; 
        } nominalPDE; 
        struct { 
            struct { 
                struct { 
                    unsigned short nominalRef[2]; 
                    short TRGOUTDLY; 
                    unsigned short TMINTOF; 
                    unsigned short SETPLSCG; 
                    unsigned short TGDDLY; 
                    unsigned short TDCTR1C; 
                    unsigned short gateDelay; 
                    unsigned short refStrayDelay; 
                    unsigned short imgStrayDelay; 
                    unsigned short rsvd; 
                } banks[4]; 
            } widePulseShortRangeFreeRunning; 
            struct { 
                struct { 
                    unsigned short nominalRef[2]; 
                    short TRGOUTDLY; 
                    unsigned short TMINTOF; 
                    unsigned short SETPLSCG; 
                    unsigned short TGDDLY; 
                    unsigned short TDCTR1C; 
                    unsigned short gateDelay; 
                    unsigned short refStrayDelay; 
                    unsigned short imgStrayDelay; 
                    unsigned short rsvd; 
                } banks[4]; 
            } narrowPulseShortRangeFreeRunning; 
            struct { 
                struct { 
                    unsigned short nominalRef[2]; 
                    short TRGOUTDLY; 
                    unsigned short TMINTOF; 
                    unsigned short SETPLSCG; 
                    unsigned short TGDDLY; 
                    unsigned short TDCTR1C; 
                    unsigned short gateDelay; 
                    unsigned short refStrayDelay; 
                    unsigned short imgStrayDelay; 
                    unsigned short rsvd; 
                } banks[4]; 
            } widePulseSoftGating; 
        } nominalRef; 
        struct { 
            struct { 
                BOOL pixelScale; 
                bool isCompressed; 
                bool centroids; 
                unsigned char rsvd; 
                struct { 
                    BOOL positions[400]; 
                } tdcs[144]; 
            } pixel; 
            struct { 
                struct { 
                    BOOL positions[4]; 
                } tdcs[144]; 
                struct { 
                    BOOL positions[4]; 
                } refs[2]; 
                BOOL tdcScale; 
                unsigned char rsvd[3]; 
            } tdc; 
            struct { 
                BOOL refScale; 
                unsigned char rsvd0[3]; 
                struct { 
                    struct { 
                        struct { 
                            BOOL positions[140]; 
                            float intensity; 
                            unsigned short timing; 
                            unsigned short rsvd0; 
                        } refs[2]; 
                    } banks[4]; 
                } widePulseShortRangeFreeRunning; 
                struct { 
                    struct { 
                        struct { 
                            BOOL positions[140]; 
                            float intensity; 
                            unsigned short timing; 
                            unsigned short rsvd0; 
                        } refs[2]; 
                    } banks[4]; 
                } narrowPulseShortRangeFreeRunning; 
                struct { 
                    struct { 
                        struct { 
                            BOOL positions[140]; 
                            float intensity; 
                            unsigned short timing; 
                            unsigned short rsvd0; 
                        } refs[2]; 
                    } banks[4]; 
                } widePulseSoftGating; 
                unsigned int rsvd1; 
            } ref; 
            struct { 
                struct { 
                    struct { 
                        struct { 
                            short spots[144]; 
                        } banks[4]; 
                    } stray; 
                    struct { 
                        struct { 
                            short spots[144]; 
                        } banks[4]; 
                    } ref0; 
                    struct { 
                        struct { 
                            short spots[144]; 
                        } banks[4]; 
                    } ref1; 
                } widePulseShortRangeFreeRunning; 
                struct { 
                    struct { 
                        struct { 
                            short spots[144]; 
                        } banks[4]; 
                    } stray; 
                    struct { 
                        struct { 
                            short spots[144]; 
                        } banks[4]; 
                    } ref0; 
                    struct { 
                        struct { 
                            short spots[144]; 
                        } banks[4]; 
                    } ref1; 
                } narrowPulseShortRangeFreeRunning; 
                struct { 
                    struct { 
                        struct { 
                            short spots[144]; 
                        } banks[4]; 
                    } stray; 
                    struct { 
                        struct { 
                            short spots[144]; 
                        } banks[4]; 
                    } ref0; 
                    struct { 
                        struct { 
                            short spots[144]; 
                        } banks[4]; 
                    } ref1; 
                } widePulseSoftGating; 
            } abs; 
        } skews; 
        struct { 
            struct { 
                float x; 
                float y; 
                float drQs; 
                float drQs2x2; 
                float drContrast; 
                float drRadius; 
                unsigned char isDDR; 
                unsigned char reserved[3]; 
            } spots[4][20]; 
        } strayDirectReflection; 
        struct { 
            double efl; 
            double pixelSize; 
            double principalPoint[2]; 
            double undistortLUT[256]; 
            double distortLUT[256]; 
            double distortionCenter[2]; 
            unsigned short calibResX; 
            unsigned short calibResY; 
            unsigned int rsvd0; 
        } irIntrinsics; 
        struct { 
            double efl; 
            double pixelSize; 
            double principalPoint[2]; 
            double undistortLUT[256]; 
            double distortLUT[256]; 
            double distortionCenter[2]; 
            unsigned short calibResX; 
            unsigned short calibResY; 
            unsigned int rsvd0; 
        } superWideIntrinsics; 
        struct { 
            double rotMatrix[3][3]; 
            double focalPoint[3]; 
        } factoryWideExtrinsics; 
        struct { 
            double rotMatrix[3][3]; 
            double focalPoint[3]; 
        } factorySuperWideExtrinsics; 
        struct { 
            double rotMatrix[3][3]; 
            double focalPoint[3]; 
        } operationalSuperWideExtrinsics; 
        struct { 
            double rotMatrix[3][3]; 
            double focalPoint[3]; 
        } operationalWideExtrinsics; 
        struct { 
            struct { 
                double distortVendor[11]; 
                double tempSubstrate; 
                double tempKirk; 
                double tempPeriscope; 
            } jlin; 
            unsigned char uuidFF[16]; 
            unsigned char uuidMPC[16]; 
        } additionalParams; 
        struct { 
            struct { 
                short freeRunningTDCTR1C; 
                unsigned short T0Type; 
            } banks[4]; 
        } operationalT0; 
        struct { 
            float strayDiff[2][44]; 
        } operationalMacro; 
    }  _jasperCalib;
}

+ (bool)isBufferOfExpectedVersion:(id)arg1;

- (id)binaryRepresentation;
- (struct _JasperCalib { unsigned int x1; bool x2; bool x3; unsigned char x4[2]; struct { struct { struct { struct { float x_1_4_1[104]; } x_1_3_1[2]; } x_1_2_1[2]; struct { struct { float x_1_4_1[104]; } x_2_3_1[4]; } x_1_2_2[144]; } x_5_1_1; struct { struct { struct { float x_1_4_1[104]; } x_1_3_1[2]; } x_2_2_1[2]; struct { struct { float x_1_4_1[104]; } x_2_3_1[4]; } x_2_2_2[144]; } x_5_1_2; } x5; BOOL x6[140][180]; struct { struct { struct { float x_1_3_1[64]; float x_1_3_2[5]; } x_1_2_1[4]; } x_7_1_1; struct { struct { float x_1_3_1[64]; float x_1_3_2[5]; } x_2_2_1[4]; } x_7_1_2; } x7; struct { struct { struct { struct { unsigned char x_1_4_1; unsigned char x_1_4_2; unsigned char x_1_4_3; unsigned char x_1_4_4; float x_1_4_5; float x_1_4_6; float x_1_4_7; float x_1_4_8; float x_1_4_9; float x_1_4_10; float x_1_4_11; float x_1_4_12; unsigned char x_1_4_13; unsigned char x_1_4_14; unsigned char x_1_4_15; unsigned char x_1_4_16; float x_1_4_17; float x_1_4_18; } x_1_3_1[144]; } x_1_2_1[4]; } x_8_1_1; struct JasperCalibSpotLocations { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1[144]; } x_2_2_1[4]; float x_2_2_2; unsigned int x_2_2_3; } x_8_1_2; } x8; }*)calib;
- (id)initWithCalibrationDictionary:(id)arg1;
- (id)initWithJasperCalib:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })operationalSuperWideToJasperTransform;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })operationalWideToJasperTransform;
- (void)setOperationalSuperWideToJasperTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setOperationalWideToJasperTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

@end
