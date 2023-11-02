
@interface AWBAlgorithm : NSObject {
    struct CAWBAFE { int (**x1)(); int x2; struct CDualLEDsWhitePointProjector {} *x3; struct { float x_4_1_1[9]; float x_4_1_2[9]; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; float x_3_2_5; } x_4_1_3[6]; struct { float x_4_2_1[6]; float x_4_2_2[6]; float x_4_2_3[6]; float x_4_2_4[6]; float x_4_2_5[6]; float x_4_2_6[6]; } x_4_1_4; struct { float x_5_2_1; float x_5_2_2; } x_4_1_5[3]; struct { float x_6_2_1; float x_6_2_2; } x_4_1_6[3]; struct { float x_7_2_1; float x_7_2_2; } x_4_1_7[3]; struct { float x_8_2_1; float x_8_2_2; } x_4_1_8[3]; bool x_4_1_9; bool x_4_1_10; } x4; struct CAWBAFEFDAssist {} *x5; struct CAWBAFEPhotometerAssistPenrose {} *x6; struct sPhotometerAWBMetadata {} *x7; struct _FE_3A_Stats_H15 {} *x8; struct _FE_3A_Stats_H15 {} *x9; struct _TILE_Stat_Elem {} *x10; struct _AEAWB_Stat_Elem {} *x11; struct _HighResAWBAE_Stat_Elem {} *x12; unsigned int *x13; struct sFEStatCSCConfig { short x_14_1_1[9]; short x_14_1_2[9]; short x_14_1_3[3]; unsigned short x_14_1_4[3]; unsigned short x_14_1_5[3]; unsigned short x_14_1_6[2]; unsigned char x_14_1_7; } x14; } * _AWBAlgorithmObj;
    struct { 
        unsigned int rGain; 
        unsigned int gGain; 
        unsigned int bGain; 
    }  _awbComboGains;
    struct { 
        unsigned int rGain; 
        unsigned int gGain; 
        unsigned int bGain; 
    }  _awbComboGainsNormalized;
    struct { 
        unsigned int rGain; 
        unsigned int gGain; 
        unsigned int bGain; 
    }  _awbGains;
    NSNumber * _digitalFlash;
    struct { 
        bool validAWBData; 
        NSNumber *awbRGain; 
        NSNumber *awbGGain; 
        NSNumber *awbBGain; 
        NSNumber *awbComboRGain; 
        NSNumber *awbComboGGain; 
        NSNumber *awbComboBGain; 
    }  _fallbackGains;
    unsigned short  _flashLuxLevel;
    float  _flashRatio;
    unsigned int  _flickerConfidence;
    int  _flickerDetectionIRRatio;
    int  _flickerDetectionStatus;
    int  _isNominalStrobe;
    int  _ledType;
    FigMetalContext * _metalContext;
    unsigned int  _numTilesX;
    unsigned int  _numTilesY;
    NSMutableDictionary * _outputMetadata;
    float  _photometerAWBDebug_externalLux;
    struct sPerModuleLEDCalibData { 
        unsigned char version; 
        unsigned char isvalid; 
        unsigned char programID; 
        float cw_rg; 
        float cw_bg; 
        float ww_rg; 
        float ww_bg; 
        float ledWidePtrn_rg; 
        float ledWidePtrn_bg; 
        float ledSWidePtrn_rg; 
        float ledSWidePtrn_bg; 
        float ledTelePtrn_rg; 
        float ledTelePtrn_bg; 
        float strb_rg; 
        float strb_bg; 
    }  _pmLEDCalibData;
    unsigned short  _preFlashLuxLevel;
    unsigned short  _preFlashLuxLevelHigh;
    unsigned short  _preFlashLuxLevelLow;
    struct sMetaData { 
        bool metaValid; 
        unsigned int frameCount; 
        unsigned long long timeStamp; 
        unsigned int readOutTime; 
        unsigned int sensorHeight; 
        unsigned int sensorWidth; 
        struct sBTRect { 
            int x; 
            int y; 
            unsigned int width; 
            unsigned int height; 
        } sensorArrayOutputRect; 
        struct sBTRect { 
            int x; 
            int y; 
            unsigned int width; 
            unsigned int height; 
        } validDataRegion; 
        unsigned short blackLevel; 
        unsigned short rangeExpansionGain; 
        unsigned int frameRate; 
        float slotStep; 
        unsigned char channel; 
        unsigned char masterCam; 
        unsigned char masterCamPreview; 
        unsigned char previewMasterCh; 
        unsigned long long pendingPreviewMasterCh; 
        unsigned char binW; 
        unsigned char binH; 
        unsigned int maxLSgainUnadjusted; 
        struct sFlashMetaData { 
            unsigned int gStr; 
            unsigned short pT; 
            unsigned short flashCaptureCount; 
            unsigned char flashCapture; 
            unsigned int Ynl_str; 
            unsigned int Yn_str; 
            unsigned int ExpAdjRatio; 
            int flashStatusAE; 
            int flashStatusAWB; 
            int strobeStatus; 
            unsigned char flashCaptureSequence; 
            bool bMultiCam; 
            float isNominalStrobe; 
            float ratio; 
            int ledType; 
            struct sPerModuleLEDCalibData { 
                unsigned char version; 
                unsigned char isvalid; 
                unsigned char programID; 
                float cw_rg; 
                float cw_bg; 
                float ww_rg; 
                float ww_bg; 
                float ledWidePtrn_rg; 
                float ledWidePtrn_bg; 
                float ledSWidePtrn_rg; 
                float ledSWidePtrn_bg; 
                float ledTelePtrn_rg; 
                float ledTelePtrn_bg; 
                float strb_rg; 
                float strb_bg; 
            } pmLEDCalibData; 
            unsigned int flashAuxFrameType; 
            int dualProcessFlashType; 
            int ltmSceneLux; 
            bool internalFlashEn; 
            bool externalFlash; 
        } flash; 
        struct sAEMetaData { 
            unsigned int request; 
            unsigned int status; 
            unsigned short counter; 
            unsigned long long exposure; 
            unsigned int exposureTime; 
            unsigned int pixelRate; 
            union uBTColorEntry16 { 
                unsigned short v16; 
                struct uBT88 { 
                    unsigned char fractional; 
                    unsigned char integer; 
                } v88; 
            } gainAnal; 
            union uBTColorEntry16 { 
                unsigned short v16; 
                struct uBT88 { 
                    unsigned char fractional; 
                    unsigned char integer; 
                } v88; 
            } gainDigiSensor; 
            union uBTColorEntry16 { 
                unsigned short v16; 
                struct uBT88 { 
                    unsigned char fractional; 
                    unsigned char integer; 
                } v88; 
            } gainDigi; 
            unsigned short gainDigiAE; 
            unsigned short interGainAnal; 
            unsigned long long interEIT; 
            unsigned int vFrameSize; 
            unsigned int totalVMin; 
            unsigned int minVSizeForBracketing; 
            unsigned int flickerFreq; 
            unsigned int sceneBrightnessForLux; 
            float luxLevel; 
            unsigned short luxLevelLow; 
            unsigned short luxLevelHigh; 
            unsigned short preFlashLuxLevel; 
            unsigned short preFlashLuxLevelLow; 
            unsigned short preFlashLuxLevelHigh; 
            unsigned short inverseBinningGainFactor; 
            unsigned short maxHighAGC; 
            unsigned char flashAEDoneFlag; 
            unsigned int contextSwitchConfig; 
            bool contextSwitchCompleted; 
            unsigned int sessionType; 
            unsigned int sessionState; 
            unsigned char bracketingMode; 
            unsigned char bracketingOisType; 
            unsigned char bracketingCapture; 
            unsigned char bracketingCaptureCount; 
            unsigned char bracketingCaptureFirst; 
            unsigned char bracketingCaptureLast; 
            unsigned char preBracketing; 
            unsigned int bracketingExpRatio; 
            short focusPos; 
            unsigned char bracketingCaptureDummy; 
            unsigned char bracketingCaptureDummyNeeded; 
            struct sAEFlashMetaData { 
                unsigned int Ynl_str; 
                unsigned int Yn_str; 
                unsigned int Yavg; 
                unsigned int Ytarget; 
                unsigned int ExpAdjRatio; 
                bool slowSync; 
                unsigned int slowSyncFlashOnTime; 
                unsigned int exposureTime; 
                unsigned int SSFLeadingMargin; 
                unsigned int SSFTrailingMargin; 
            } flash; 
            bool stable; 
            bool limitsReached; 
            bool drcSuspended; 
            bool multiCam; 
            unsigned int aeAverage; 
            unsigned int aeTarget; 
            unsigned short aeMatrixHorCount; 
            unsigned short aeMatrixVerCount; 
            unsigned int aeMatrix[16][16]; 
            unsigned int motionFromAEMatrix; 
            unsigned long long currentEIT; 
            unsigned short hdrRatio; 
            unsigned short ev0Ratio; 
            unsigned short expBias; 
            unsigned short realizedExpBias; 
            unsigned int aeMatrixMin; 
            unsigned int aeMatrixMax; 
            unsigned int expBiasCommandTag; 
            unsigned int manualExposureGainCommandTag; 
            short bracketingCaptureEVStop; 
            struct sCIspMetaDataFDExposureDebug { 
                int faceAverage; 
                int faceWeight; 
                int sceneXl; 
                int sceneXm; 
                int sceneXh; 
                int sceneTarget; 
                int scale; 
                int aeBlend; 
                int aeAverage; 
                int aeTarget; 
                int darkOutlierCount; 
                int brightOutlierCount; 
            } fdAEParams; 
            unsigned short meteringMode; 
            struct sFlickerDetectionDebugParams { 
                int detectStatus; 
                unsigned short count; 
                unsigned int freq[2]; 
                unsigned short confidence[2]; 
                unsigned short waveMatch[2]; 
            } flickerDebugParams; 
            unsigned int isoBase; 
            struct sLuxCalcParams { 
                unsigned int scale; 
                unsigned int scaleShift; 
            } luxCalcParams; 
            unsigned short pseudoYWeight[3]; 
            unsigned short panoExpRatio; 
            int strobePattern; 
            unsigned int strobeAux; 
            unsigned int strobeCurrent; 
            unsigned int bioCaptureGroup; 
            int fIDFlowType; 
            unsigned int maxPulseWidthLCUs[3]; 
            bool slowSyncIsSlowSync; 
            float faceExpRatioFiltered; 
            float faceExpRatio; 
            float bodyAdjustRatio; 
            float flashLEDOffLux; 
            float flashPreflashLux; 
            unsigned short flashMixPercentage[512]; 
            unsigned int flashMainFlashLuxFull; 
            bool bHDRPrebracketing; 
            int pairedStrobePattern; 
            unsigned int aeMode; 
            int repeatSequence; 
            bool isSifrMode; 
            bool isVHDRMode; 
            float HRDampingRatio; 
            unsigned int sifrRDOffset; 
            unsigned long long exposureSifr; 
            unsigned int exposureTimeSifr; 
            union uBTColorEntry16 { 
                unsigned short v16; 
                struct uBT88 { 
                    unsigned char fractional; 
                    unsigned char integer; 
                } v88; 
            } gainAnalSifr; 
            union uBTColorEntry16 { 
                unsigned short v16; 
                struct uBT88 { 
                    unsigned char fractional; 
                    unsigned char integer; 
                } v88; 
            } gainDigiSensorSifr; 
            union uBTColorEntry16 { 
                unsigned short v16; 
                struct uBT88 { 
                    unsigned char fractional; 
                    unsigned char integer; 
                } v88; 
            } gainDigiSifr; 
            unsigned char captureFrameType; 
            int sifrSkipRatio; 
            bool sifrOffPrepare; 
            bool isEV0RatioStable; 
            bool splitPDOn; 
            unsigned char SphereRecenteringMode; 
            unsigned int overflowDGain; 
            struct sCIspCmdUBParamsSetMiscData { 
                float analogGainLimit; 
                struct sAWBReflowParam { 
                    bool bGenerateReflowAWB; 
                    bool bUsingSingleStillAWB; 
                } awbReflow; 
            } UBMisc; 
            struct sCIspAEMiscData { 
                struct sNextAEParam { 
                    unsigned long long exposure; 
                    unsigned int exposureTime; 
                    unsigned short gainAnal; 
                    unsigned short gainDigiSensor; 
                    unsigned short gainDigi; 
                    unsigned long long exposureSifr; 
                    unsigned int exposureTimeSifr; 
                    unsigned short gainAnalSifr; 
                    unsigned short gainDigiSensorSifr; 
                    unsigned short gainDigiSifr; 
                    int sifrSkipRatio; 
                    unsigned int overflowDGain; 
                    unsigned short hdrRatio; 
                    unsigned short ev0Ratio; 
                    unsigned short panoExpRatio; 
                    bool vHDROn; 
                    unsigned char bracketingCapture; 
                } nextAE; 
            } AEMisc; 
            float AEstatsContrastInsideFace; 
            float AEstatsContrastOutsideFace; 
            bool videoHDRSwitchOn; 
            float chSyncExpRatios[6]; 
            float hdrScore; 
            unsigned char clippingDiscontinuity; 
            bool extraSoftDGain; 
            unsigned int masterSyncOffset; 
        } ae; 
        struct sAWBMetaData { 
            bool bFlashAWBDone; 
            bool locked; 
            unsigned short request; 
            unsigned short status; 
            struct sBTRGGB16 { 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } r; 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } gr; 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } gb; 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } b; 
            } awbGains; 
            struct sBTRGGB16 { 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } r; 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } gr; 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } gb; 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } b; 
            } gains; 
            struct sBTRGGB16 { 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } r; 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } gr; 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } gb; 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } b; 
            } gainsNormalized; 
            int eLensShadingMode; 
            unsigned short maxWBGainDown; 
            unsigned short maxColorCalGainDown; 
            unsigned int manualAWBGainCommandTag; 
            unsigned int manualCCTCommandTag; 
            struct sSlaveCameraAWBParam { 
                unsigned short rgCalGain; 
                unsigned short bgCalGain; 
                unsigned int CCTestimate; 
                unsigned int wbGain[3]; 
                unsigned int comboWBGain[3]; 
                int ccm[3][3]; 
                bool valid; 
                unsigned long long slaveCh; 
                float pre_rgLogRatio; 
                float pre_bgLogRatio; 
                float daylightWeight; 
                bool useSpatialCCM; 
                bool isLEDMainFlashforAWB; 
                float flashProjMixWeighting; 
                struct sBTRGGB16 { 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } r; 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } gr; 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } gb; 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } b; 
                } awbGainsFlashProj; 
            } slaveCameraAWBParam[6]; 
            float pre_rgLogRatio; 
            float pre_bgLogRatio; 
            float daylightWeight; 
            int awbColorspace; 
            bool useSpatialCCM; 
            struct sBTRGGB16 { 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } r; 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } gr; 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } gb; 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } b; 
            } awbGainsSkinOnly; 
            bool isSlowSyncMainFlashforAWB; 
            bool isLEDMainFlashforAWB; 
            float flashProjMixWeighting; 
            struct sBTRGGB16 { 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } r; 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } gr; 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } gb; 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } b; 
            } awbGainsFlashProj; 
            bool hostMetadataUpdate; 
            struct sAWBColorCorrectionMatrix { 
                union uBTColorEntry16 { 
                    unsigned short v16; 
                    struct uBT88 { 
                        unsigned char fractional; 
                        unsigned char integer; 
                    } v88; 
                } coeff[9]; 
            } ccm; 
            unsigned int CCTEstimate; 
            unsigned short displayStrobeCCT; 
            unsigned short rgGain; 
            unsigned short bgGain; 
            unsigned short stable; 
            bool usePrevFrameWP; 
            unsigned short useTileStats; 
            unsigned short firstWBGain[3]; 
            unsigned int sceneLuxLevel; 
            unsigned int sceneLuxLevelLow; 
            unsigned int sceneLuxLevelHigh; 
            unsigned int AWBLocked; 
            unsigned int ambientLuxLevel; 
            unsigned int ambientLuxLevelLow; 
            unsigned int ambientLuxLevelHigh; 
            unsigned int rawAverage[4]; 
            unsigned short isHistWPValid; 
            unsigned short fdAWBOutput; 
            unsigned int fdAWBChistMixFactor; 
            unsigned int fdRect[4]; 
            unsigned short grayworldWBGain[3]; 
            unsigned short RGBEstimate[3]; 
            union metaAux { 
                unsigned int all; 
                struct { 
                    unsigned int counter : 8; 
                    unsigned int bracketCapture : 1; 
                    unsigned int bracketCount : 3; 
                    unsigned int flashCapture : 1; 
                    unsigned int flashCaptureCount : 3; 
                } ; 
            } auxMeta; 
            unsigned int initial_rgLogRatio; 
            unsigned int initial_bgLogRatio; 
            bool isDefaultSetting; 
            bool bBypassConvergenceFr; 
            unsigned int statFrameCount; 
            bool isMatchedSlaveSetting; 
            unsigned int frameCount; 
            unsigned short lowCCTrgBias; 
            unsigned short lowCCTbgBias; 
            unsigned short hiCCTrgBias; 
            unsigned short hiCCTbgBias; 
            unsigned int syncTag; 
            unsigned char bForStatsSlaveCam; 
            bool isValidOneFrameAWBSetting; 
            unsigned int singleAWBFrameCount; 
            struct sCameraAWBParam { 
                struct sBTRGGB16 { 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } r; 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } gr; 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } gb; 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } b; 
                } awbGains; 
                struct sBTRGGB16 { 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } r; 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } gr; 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } gb; 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } b; 
                } gains; 
                struct sBTRGGB16 { 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } r; 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } gr; 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } gb; 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } b; 
                } gainsNormalized; 
                unsigned short maxWBGainDown; 
                unsigned short maxColorCalGainDown; 
                unsigned int CCTEstimate; 
                unsigned short rgGain; 
                unsigned short bgGain; 
                struct sAWBColorCorrectionMatrix { 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } coeff[9]; 
                } ccm; 
                struct sBTRGGB16 { 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } r; 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } gr; 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } gb; 
                    union uBTColorEntry16 { 
                        unsigned short v16; 
                        struct uBT88 { 
                            unsigned char fractional; 
                            unsigned char integer; 
                        } v88; 
                    } b; 
                } awbGainsActual; 
            } oneFrameAWB; 
            struct sAWBReflowParam { 
                bool bGenerateReflowAWB; 
                bool bUsingSingleStillAWB; 
            } awbReflow; 
            struct sBTRect { 
                int x; 
                int y; 
                unsigned int width; 
                unsigned int height; 
            } tileStatsRegionInRaw; 
            bool isTileStatsRegionUpdated; 
            unsigned long long semanticChannel; 
            unsigned int semanticFrameCount; 
            unsigned char clrBE2DHistProb; 
            unsigned int clrBE2DHistFrameCount; 
            unsigned char fdAWBVersion; 
            float spatialCCMWeights[192]; 
        } awb; 
        struct sZoomMetaData { 
            unsigned short fesOutputWidth; 
            unsigned short fesOutputHeight; 
            unsigned short ispInputWidth; 
            unsigned short ispInputHeight; 
            bool isFEStatOTF; 
        } zoom; 
        bool isReprocessing; 
        bool isReplay; 
        float tele2WideFOVDelta; 
        float wide2TeleFOVDelta; 
        float wide2SWideFOVDelta; 
        float sWide2WideFOVDelta; 
        float implicitFOVScaleSrcChToDestCh[6][6]; 
        struct sRectSize { 
            unsigned int width; 
            unsigned int height; 
        } FESOutputSize; 
        struct sBTRect { 
            int x; 
            int y; 
            unsigned int width; 
            unsigned int height; 
        } sensorCrop; 
        struct sBTRect { 
            int x; 
            int y; 
            unsigned int width; 
            unsigned int height; 
        } DMACrop; 
    }  _sMetaData;
    float  _sensorClockFreqHz;
    NSData * _setFileData;
    NSDictionary * _stats;
    unsigned int  _winRegionHeight;
    unsigned int  _winRegionWidth;
}

@property (nonatomic) struct { unsigned int x1; unsigned int x2; unsigned int x3; } awbComboGains;
@property (nonatomic) struct { unsigned int x1; unsigned int x2; unsigned int x3; } awbComboGainsNormalized;
@property (nonatomic) struct { unsigned int x1; unsigned int x2; unsigned int x3; } awbGains;
@property (nonatomic, retain) NSNumber *digitalFlash;
@property (nonatomic) unsigned int numTilesX;
@property (nonatomic) unsigned int numTilesY;
@property (nonatomic, retain) NSMutableDictionary *outputMetadata;
@property (nonatomic, retain) NSData *setFileData;
@property (nonatomic, retain) NSDictionary *stats;
@property (nonatomic) unsigned int winRegionHeight;
@property (nonatomic) unsigned int winRegionWidth;

+ (int)calculateSTRBKeyFromWideCamera:(struct { int x1; union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_2_1_1; struct { float x_2_2_1; float x_2_2_2; } x_2_1_2; struct { float x_3_2_1; float x_3_2_2; } x_2_1_3; } x2; }*)arg1 moduleConfig:(id)arg2;
+ (int)doAWBConfigLoad:(id)arg1 to:(id)arg2;
+ (int)getColorCalibrationsUsingIdealColorCalbrations:(id)arg1 absoluteColorCalibrations:(id)arg2 colorCalibrationsOut:(id*)arg3 awbConfig:(id)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_createShaders;
- (int)_updateHRGainDownRatioMetadata;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; })awbComboGains;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; })awbComboGainsNormalized;
- (int)awbConfigLoad:(id)arg1 to:(struct CAWBAFE { int (**x1)(); int x2; struct CDualLEDsWhitePointProjector {} *x3; struct { float x_4_1_1[9]; float x_4_1_2[9]; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; float x_3_2_5; } x_4_1_3[6]; struct { float x_4_2_1[6]; float x_4_2_2[6]; float x_4_2_3[6]; float x_4_2_4[6]; float x_4_2_5[6]; float x_4_2_6[6]; } x_4_1_4; struct { float x_5_2_1; float x_5_2_2; } x_4_1_5[3]; struct { float x_6_2_1; float x_6_2_2; } x_4_1_6[3]; struct { float x_7_2_1; float x_7_2_2; } x_4_1_7[3]; struct { float x_8_2_1; float x_8_2_2; } x_4_1_8[3]; bool x_4_1_9; bool x_4_1_10; } x4; struct CAWBAFEFDAssist {} *x5; struct CAWBAFEPhotometerAssistPenrose {} *x6; struct sPhotometerAWBMetadata {} *x7; struct _FE_3A_Stats_H15 {} *x8; struct _FE_3A_Stats_H15 {} *x9; struct _TILE_Stat_Elem {} *x10; struct _AEAWB_Stat_Elem {} *x11; struct _HighResAWBAE_Stat_Elem {} *x12; unsigned int *x13; struct sFEStatCSCConfig { short x_14_1_1[9]; short x_14_1_2[9]; short x_14_1_3[3]; unsigned short x_14_1_4[3]; unsigned short x_14_1_5[3]; unsigned short x_14_1_6[2]; unsigned char x_14_1_7; } x14; }*)arg2;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; })awbGains;
- (int)calculateEIT:(id)arg1 result:(unsigned long long*)arg2;
- (int)configFaceMetadata:(id)arg1;
- (int)configFallbackMetadata:(id)arg1;
- (int)configFlashRFCMetadata:(id)arg1 cameraInfo:(id)arg2 moduleConfig:(id)arg3;
- (int)configFlickerDetectionMetadata:(id)arg1 moduleConfig:(id)arg2;
- (int)configPortTypeMetadata:(id)arg1;
- (int)configWithMetadata:(id)arg1 cameraInfo:(id)arg2 moduleConfig:(id)arg3;
- (int)configWithMetadata:(id)arg1 colorCal:(id)arg2;
- (void)dealloc;
- (id)digitalFlash;
- (int)initTuningParameters:(id)arg1;
- (id)initWithMetalContext:(id)arg1;
- (unsigned int)numTilesX;
- (unsigned int)numTilesY;
- (id)outputMetadata;
- (int)process;
- (void)setAwbComboGains:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (void)setAwbComboGainsNormalized:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (void)setAwbGains:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (void)setDigitalFlash:(id)arg1;
- (id)setFileData;
- (void)setNumTilesX:(unsigned int)arg1;
- (void)setNumTilesY:(unsigned int)arg1;
- (void)setOutputMetadata:(id)arg1;
- (void)setSetFileData:(id)arg1;
- (void)setStats:(id)arg1;
- (void)setWinRegionHeight:(unsigned int)arg1;
- (void)setWinRegionWidth:(unsigned int)arg1;
- (id)stats;
- (unsigned int)winRegionHeight;
- (unsigned int)winRegionWidth;

@end
