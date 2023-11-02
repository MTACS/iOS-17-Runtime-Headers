
@interface DISPHDRProcessing : ProcessingEngine {
    struct DISPCurveData_t { 
        int mode; 
        int curveLoc; 
        struct { 
            int type; 
            union { 
                struct { 
                    float gamma; 
                    float a; 
                    float b; 
                    float c; 
                    float d; 
                    float e; 
                    float f; 
                } param; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *samples; 
                } table; 
                struct { 
                    unsigned int numsegments; 
                    unsigned int segcurvorder[10]; 
                    float segcurvebound[10]; 
                    float segcurvcoeff[10][11]; 
                } polycurve; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *xsamples; 
                    float yMax; 
                    float *ysamples; 
                } nonuniformtable; 
                struct { 
                    float slope; 
                    float offset; 
                    unsigned int tmaxnits; 
                } ambcurve; 
                struct { 
                    float c1; 
                    float c2; 
                    float c3; 
                    float m; 
                    float n; 
                } tonemapcurve; 
                struct { 
                    unsigned int smaxnits; 
                } tonemapoetf; 
                struct { 
                    float c0; 
                    float c1; 
                    float a; 
                    float b; 
                    float p; 
                } mixfactorcurve; 
            } ; 
        } curveData; 
    }  FixedDegamma;
    struct DISPColorMatrix_t { 
        int mode; 
        int matLoc; 
        struct { 
            float in_offset[3]; 
            float matrix[9]; 
            float out_offset[3]; 
        } colorMatrix; 
    }  PostToneMapCSC;
    struct DISPColorMatrix_t { 
        int mode; 
        int matLoc; 
        struct { 
            float in_offset[3]; 
            float matrix[9]; 
            float out_offset[3]; 
        } colorMatrix; 
    }  PreToneMapCSC;
    struct DISPCurveData_t { 
        int mode; 
        int curveLoc; 
        struct { 
            int type; 
            union { 
                struct { 
                    float gamma; 
                    float a; 
                    float b; 
                    float c; 
                    float d; 
                    float e; 
                    float f; 
                } param; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *samples; 
                } table; 
                struct { 
                    unsigned int numsegments; 
                    unsigned int segcurvorder[10]; 
                    float segcurvebound[10]; 
                    float segcurvcoeff[10][11]; 
                } polycurve; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *xsamples; 
                    float yMax; 
                    float *ysamples; 
                } nonuniformtable; 
                struct { 
                    float slope; 
                    float offset; 
                    unsigned int tmaxnits; 
                } ambcurve; 
                struct { 
                    float c1; 
                    float c2; 
                    float c3; 
                    float m; 
                    float n; 
                } tonemapcurve; 
                struct { 
                    unsigned int smaxnits; 
                } tonemapoetf; 
                struct { 
                    float c0; 
                    float c1; 
                    float a; 
                    float b; 
                    float p; 
                } mixfactorcurve; 
            } ; 
        } curveData; 
    }  ToneMapAmbEOTFCurve;
    struct DISPCurveData_t { 
        int mode; 
        int curveLoc; 
        struct { 
            int type; 
            union { 
                struct { 
                    float gamma; 
                    float a; 
                    float b; 
                    float c; 
                    float d; 
                    float e; 
                    float f; 
                } param; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *samples; 
                } table; 
                struct { 
                    unsigned int numsegments; 
                    unsigned int segcurvorder[10]; 
                    float segcurvebound[10]; 
                    float segcurvcoeff[10][11]; 
                } polycurve; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *xsamples; 
                    float yMax; 
                    float *ysamples; 
                } nonuniformtable; 
                struct { 
                    float slope; 
                    float offset; 
                    unsigned int tmaxnits; 
                } ambcurve; 
                struct { 
                    float c1; 
                    float c2; 
                    float c3; 
                    float m; 
                    float n; 
                } tonemapcurve; 
                struct { 
                    unsigned int smaxnits; 
                } tonemapoetf; 
                struct { 
                    float c0; 
                    float c1; 
                    float a; 
                    float b; 
                    float p; 
                } mixfactorcurve; 
            } ; 
        } curveData; 
    }  ToneMapAmbPolyCurve;
    struct DISPCurveData_t { 
        int mode; 
        int curveLoc; 
        struct { 
            int type; 
            union { 
                struct { 
                    float gamma; 
                    float a; 
                    float b; 
                    float c; 
                    float d; 
                    float e; 
                    float f; 
                } param; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *samples; 
                } table; 
                struct { 
                    unsigned int numsegments; 
                    unsigned int segcurvorder[10]; 
                    float segcurvebound[10]; 
                    float segcurvcoeff[10][11]; 
                } polycurve; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *xsamples; 
                    float yMax; 
                    float *ysamples; 
                } nonuniformtable; 
                struct { 
                    float slope; 
                    float offset; 
                    unsigned int tmaxnits; 
                } ambcurve; 
                struct { 
                    float c1; 
                    float c2; 
                    float c3; 
                    float m; 
                    float n; 
                } tonemapcurve; 
                struct { 
                    unsigned int smaxnits; 
                } tonemapoetf; 
                struct { 
                    float c0; 
                    float c1; 
                    float a; 
                    float b; 
                    float p; 
                } mixfactorcurve; 
            } ; 
        } curveData; 
    }  ToneMapAmbientCurve;
    struct { 
        int toneMapMode_Enable; 
        union { 
            struct { 
                unsigned int precision; 
            } toneMapMode0; 
            struct { 
                unsigned char histtype; 
                unsigned char scaleShiftBits; 
                unsigned char lumaShiftBits; 
                unsigned char mixLookupBasis; 
                unsigned char lumaOutputSel; 
                int lumaAvgCoeff[3]; 
                int lumaAvgOffset; 
                int lumaMaxCoeff[3]; 
                unsigned int histBinLimit[8]; 
            } toneMapMode1; 
            struct { 
                unsigned char msbPos0; 
                unsigned char msbPos1; 
                unsigned char msbPos2; 
                unsigned char spacingComp0; 
                unsigned char spacingComp1; 
                unsigned char spacingComp2; 
            } toneMapMode2; 
        } ; 
    }  ToneMapConfig;
    struct DISPCurveData_t { 
        int mode; 
        int curveLoc; 
        struct { 
            int type; 
            union { 
                struct { 
                    float gamma; 
                    float a; 
                    float b; 
                    float c; 
                    float d; 
                    float e; 
                    float f; 
                } param; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *samples; 
                } table; 
                struct { 
                    unsigned int numsegments; 
                    unsigned int segcurvorder[10]; 
                    float segcurvebound[10]; 
                    float segcurvcoeff[10][11]; 
                } polycurve; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *xsamples; 
                    float yMax; 
                    float *ysamples; 
                } nonuniformtable; 
                struct { 
                    float slope; 
                    float offset; 
                    unsigned int tmaxnits; 
                } ambcurve; 
                struct { 
                    float c1; 
                    float c2; 
                    float c3; 
                    float m; 
                    float n; 
                } tonemapcurve; 
                struct { 
                    unsigned int smaxnits; 
                } tonemapoetf; 
                struct { 
                    float c0; 
                    float c1; 
                    float a; 
                    float b; 
                    float p; 
                } mixfactorcurve; 
            } ; 
        } curveData; 
    }  ToneMapEdrPolyCurve;
    struct DISPCurveData_t { 
        int mode; 
        int curveLoc; 
        struct { 
            int type; 
            union { 
                struct { 
                    float gamma; 
                    float a; 
                    float b; 
                    float c; 
                    float d; 
                    float e; 
                    float f; 
                } param; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *samples; 
                } table; 
                struct { 
                    unsigned int numsegments; 
                    unsigned int segcurvorder[10]; 
                    float segcurvebound[10]; 
                    float segcurvcoeff[10][11]; 
                } polycurve; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *xsamples; 
                    float yMax; 
                    float *ysamples; 
                } nonuniformtable; 
                struct { 
                    float slope; 
                    float offset; 
                    unsigned int tmaxnits; 
                } ambcurve; 
                struct { 
                    float c1; 
                    float c2; 
                    float c3; 
                    float m; 
                    float n; 
                } tonemapcurve; 
                struct { 
                    unsigned int smaxnits; 
                } tonemapoetf; 
                struct { 
                    float c0; 
                    float c1; 
                    float a; 
                    float b; 
                    float p; 
                } mixfactorcurve; 
            } ; 
        } curveData; 
    }  ToneMapLUT;
    struct DISPCurveData_t { 
        int mode; 
        int curveLoc; 
        struct { 
            int type; 
            union { 
                struct { 
                    float gamma; 
                    float a; 
                    float b; 
                    float c; 
                    float d; 
                    float e; 
                    float f; 
                } param; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *samples; 
                } table; 
                struct { 
                    unsigned int numsegments; 
                    unsigned int segcurvorder[10]; 
                    float segcurvebound[10]; 
                    float segcurvcoeff[10][11]; 
                } polycurve; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *xsamples; 
                    float yMax; 
                    float *ysamples; 
                } nonuniformtable; 
                struct { 
                    float slope; 
                    float offset; 
                    unsigned int tmaxnits; 
                } ambcurve; 
                struct { 
                    float c1; 
                    float c2; 
                    float c3; 
                    float m; 
                    float n; 
                } tonemapcurve; 
                struct { 
                    unsigned int smaxnits; 
                } tonemapoetf; 
                struct { 
                    float c0; 
                    float c1; 
                    float a; 
                    float b; 
                    float p; 
                } mixfactorcurve; 
            } ; 
        } curveData; 
    }  ToneMapMixFactorCurve;
    struct DISPCurveData_t { 
        int mode; 
        int curveLoc; 
        struct { 
            int type; 
            union { 
                struct { 
                    float gamma; 
                    float a; 
                    float b; 
                    float c; 
                    float d; 
                    float e; 
                    float f; 
                } param; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *samples; 
                } table; 
                struct { 
                    unsigned int numsegments; 
                    unsigned int segcurvorder[10]; 
                    float segcurvebound[10]; 
                    float segcurvcoeff[10][11]; 
                } polycurve; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *xsamples; 
                    float yMax; 
                    float *ysamples; 
                } nonuniformtable; 
                struct { 
                    float slope; 
                    float offset; 
                    unsigned int tmaxnits; 
                } ambcurve; 
                struct { 
                    float c1; 
                    float c2; 
                    float c3; 
                    float m; 
                    float n; 
                } tonemapcurve; 
                struct { 
                    unsigned int smaxnits; 
                } tonemapoetf; 
                struct { 
                    float c0; 
                    float c1; 
                    float a; 
                    float b; 
                    float p; 
                } mixfactorcurve; 
            } ; 
        } curveData; 
    }  ToneMapMixFactorLUT;
    struct DISPCurveData_t { 
        int mode; 
        int curveLoc; 
        struct { 
            int type; 
            union { 
                struct { 
                    float gamma; 
                    float a; 
                    float b; 
                    float c; 
                    float d; 
                    float e; 
                    float f; 
                } param; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *samples; 
                } table; 
                struct { 
                    unsigned int numsegments; 
                    unsigned int segcurvorder[10]; 
                    float segcurvebound[10]; 
                    float segcurvcoeff[10][11]; 
                } polycurve; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *xsamples; 
                    float yMax; 
                    float *ysamples; 
                } nonuniformtable; 
                struct { 
                    float slope; 
                    float offset; 
                    unsigned int tmaxnits; 
                } ambcurve; 
                struct { 
                    float c1; 
                    float c2; 
                    float c3; 
                    float m; 
                    float n; 
                } tonemapcurve; 
                struct { 
                    unsigned int smaxnits; 
                } tonemapoetf; 
                struct { 
                    float c0; 
                    float c1; 
                    float a; 
                    float b; 
                    float p; 
                } mixfactorcurve; 
            } ; 
        } curveData; 
    }  ToneMapOetf;
    struct DISPCurveData_t { 
        int mode; 
        int curveLoc; 
        struct { 
            int type; 
            union { 
                struct { 
                    float gamma; 
                    float a; 
                    float b; 
                    float c; 
                    float d; 
                    float e; 
                    float f; 
                } param; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *samples; 
                } table; 
                struct { 
                    unsigned int numsegments; 
                    unsigned int segcurvorder[10]; 
                    float segcurvebound[10]; 
                    float segcurvcoeff[10][11]; 
                } polycurve; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *xsamples; 
                    float yMax; 
                    float *ysamples; 
                } nonuniformtable; 
                struct { 
                    float slope; 
                    float offset; 
                    unsigned int tmaxnits; 
                } ambcurve; 
                struct { 
                    float c1; 
                    float c2; 
                    float c3; 
                    float m; 
                    float n; 
                } tonemapcurve; 
                struct { 
                    unsigned int smaxnits; 
                } tonemapoetf; 
                struct { 
                    float c0; 
                    float c1; 
                    float a; 
                    float b; 
                    float p; 
                } mixfactorcurve; 
            } ; 
        } curveData; 
    }  ToneMapOotf;
    struct DISPCurveData_t { 
        int mode; 
        int curveLoc; 
        struct { 
            int type; 
            union { 
                struct { 
                    float gamma; 
                    float a; 
                    float b; 
                    float c; 
                    float d; 
                    float e; 
                    float f; 
                } param; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *samples; 
                } table; 
                struct { 
                    unsigned int numsegments; 
                    unsigned int segcurvorder[10]; 
                    float segcurvebound[10]; 
                    float segcurvcoeff[10][11]; 
                } polycurve; 
                struct { 
                    unsigned int count; 
                    float xMax; 
                    float *xsamples; 
                    float yMax; 
                    float *ysamples; 
                } nonuniformtable; 
                struct { 
                    float slope; 
                    float offset; 
                    unsigned int tmaxnits; 
                } ambcurve; 
                struct { 
                    float c1; 
                    float c2; 
                    float c3; 
                    float m; 
                    float n; 
                } tonemapcurve; 
                struct { 
                    unsigned int smaxnits; 
                } tonemapoetf; 
                struct { 
                    float c0; 
                    float c1; 
                    float a; 
                    float b; 
                    float p; 
                } mixfactorcurve; 
            } ; 
        } curveData; 
    }  ToneMapPolyCurve;
    struct EngineHDRContext { 
        unsigned int contentType; 
        unsigned int displayType; 
        int processingType; 
        unsigned int operation; 
        unsigned int convertType; 
        unsigned int inputFormatRaw; 
        unsigned int outputFormatRaw; 
        unsigned int inputFormat; 
        unsigned int outputFormat; 
        unsigned int inputColorSpace; 
        unsigned int outputColorSpace; 
        unsigned int inputTransferFunction; 
        unsigned int outputTransferFunction; 
        unsigned long long inputWidth; 
        unsigned long long inputHeight; 
        unsigned long long outputWidth; 
        unsigned long long outputHeight; 
        bool enableReshaping; 
        bool enableToneMapping; 
        bool enableConverting; 
        struct _DpcParam { 
            float alpha; 
            float alphaPrime; 
            float rangeMax; 
            float gain; 
            bool on; 
        } dpcParam; 
        unsigned int originalInputTransferFunction; 
    }  _dispHC;
    DolbyVisionDM4 * _dm40;
    float  _lumaMixFactorTableBuffer;
    float  _lutInput;
    float  _scalingFactorTableBuffer;
}

- (void).cxx_destruct;
- (void)decideStageStatus:(bool*)arg1 AlgoMode:(int*)arg2 DISPHDRContext:(struct EngineHDRContext { unsigned int x1; unsigned int x2; int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; bool x18; bool x19; bool x20; struct _DpcParam { float x_21_1_1; float x_21_1_2; float x_21_1_3; float x_21_1_4; bool x_21_1_5; } x21; unsigned int x22; }*)arg3;
- (void)getTmLutInput;
- (unsigned long long)getTmLutSize;
- (void)hdr10_createLUTFromDMConfig:(struct { float x1; float x2; unsigned int x3; float x4; float x5; float x6; float x7; unsigned int x8; float x9; float x10; float x11; float x12; unsigned int x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; unsigned int x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; bool x46; float x47; float x48; bool x49; float x50; bool x51; int x52; int x53; float x54; int x55; struct _DpcParam { float x_56_1_1; float x_56_1_2; float x_56_1_3; float x_56_1_4; bool x_56_1_5; } x56; int x57; unsigned short x58; bool x59; float x60; bool x61; bool x62; bool x63; bool x64; bool x65; }*)arg1 TCControl:(struct ToneCurve_Control { double x1; double x2; double x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; double x11; bool x12; bool x13; float x14; bool x15; int x16; struct __CFString {} *x17; int x18; int x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; float x25; float x26; float x27; float x28; float x29; unsigned int x30; unsigned int x31 : 1; unsigned int x32 : 1; float x33; struct _AuxData { int x_34_1_1; int x_34_1_2; int x_34_1_3; float x_34_1_4; float x_34_1_5; float x_34_1_6; float x_34_1_7; int x_34_1_8; float x_34_1_9; float x_34_1_10; float x_34_1_11; bool x_34_1_12; } x34; struct _TMData { int x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; int x_35_1_5; float x_35_1_6; float x_35_1_7; float x_35_1_8; int x_35_1_9; float x_35_1_10; float x_35_1_11; float x_35_1_12; float x_35_1_13; float x_35_1_14; float x_35_1_15; float x_35_1_16; float x_35_1_17; float x_35_1_18; float x_35_1_19; float x_35_1_20; float x_35_1_21; float x_35_1_22; float x_35_1_23; float x_35_1_24; float x_35_1_25; int x_35_1_26; int x_35_1_27; float x_35_1_28; float x_35_1_29; struct _Percentiles_t { float x_30_2_1[8]; float x_30_2_2[8]; unsigned int x_30_2_3; } x_35_1_30; bool x_35_1_31; bool x_35_1_32; bool x_35_1_33; } x35; }*)arg2 HDRControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19[9]; float x20[9]; unsigned int x21; float x22; unsigned int x23; float x24; bool x25; int x26; unsigned int x27; bool x28; }*)arg3 TMParam:(struct _HDR10TMParam { bool x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; struct _TMCurveParam { int x_22_1_1; union { struct _splCurveParam { unsigned short x_1_3_1; float x_1_3_2[6]; float x_1_3_3[6]; float x_1_3_4[6]; float x_1_3_5[5][4]; float x_1_3_6[5][4]; float x_1_3_7[2][2]; } x_2_2_1; struct _ebzCurveParam { unsigned short x_2_3_1; float x_2_3_2[6]; float x_2_3_3[6]; float x_2_3_4[6]; unsigned short x_2_3_5[5]; float x_2_3_6[5][14]; float x_2_3_7[6]; float x_2_3_8[5][15]; float x_2_3_9[5][15]; float x_2_3_10[5][15]; } x_2_2_2; struct _doviCurveParam { float x_3_3_1; float x_3_3_2; float x_3_3_3; float x_3_3_4; } x_2_2_3; } x_22_1_2; } x22; float x23; float x24; float x25; float x26; int x27; float x28; float x29; float x30; float x31; float x32; }*)arg4 EdrAdaptationParam:(struct _EdrAdaptationParam { bool x1; unsigned short x2; float x3[3]; float x4[3]; float x5[3]; bool x6; float x7[2][4]; float x8[2][4]; float x9[2][2]; }*)arg5 AmbAdaptationParam:(struct _AmbAdaptationParam { bool x1; unsigned short x2; float x3[3]; float x4[3]; float x5[3]; float x6; float x7; bool x8; float x9[2][4]; float x10[2][4]; float x11[2][2]; float x12; }*)arg6;
- (void)hdr10_tm_createLUTFromDMConfig:(struct _HDR10TMParam { bool x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; struct _TMCurveParam { int x_22_1_1; union { struct _splCurveParam { unsigned short x_1_3_1; float x_1_3_2[6]; float x_1_3_3[6]; float x_1_3_4[6]; float x_1_3_5[5][4]; float x_1_3_6[5][4]; float x_1_3_7[2][2]; } x_2_2_1; struct _ebzCurveParam { unsigned short x_2_3_1; float x_2_3_2[6]; float x_2_3_3[6]; float x_2_3_4[6]; unsigned short x_2_3_5[5]; float x_2_3_6[5][14]; float x_2_3_7[6]; float x_2_3_8[5][15]; float x_2_3_9[5][15]; float x_2_3_10[5][15]; } x_2_2_2; struct _doviCurveParam { float x_3_3_1; float x_3_3_2; float x_3_3_3; float x_3_3_4; } x_2_2_3; } x_22_1_2; } x22; float x23; float x24; float x25; float x26; int x27; float x28; float x29; float x30; float x31; float x32; }*)arg1 EdrAdaptationParam:(struct _EdrAdaptationParam { bool x1; unsigned short x2; float x3[3]; float x4[3]; float x5[3]; bool x6; float x7[2][4]; float x8[2][4]; float x9[2][2]; }*)arg2 AmbAdaptationParam:(struct _AmbAdaptationParam { bool x1; unsigned short x2; float x3[3]; float x4[3]; float x5[3]; float x6; float x7; bool x8; float x9[2][4]; float x10[2][4]; float x11[2][2]; float x12; }*)arg3 dmConfig:(struct { float x1; float x2; unsigned int x3; float x4; float x5; float x6; float x7; unsigned int x8; float x9; float x10; float x11; float x12; unsigned int x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; unsigned int x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; bool x46; float x47; float x48; bool x49; float x50; bool x51; int x52; int x53; float x54; int x55; struct _DpcParam { float x_56_1_1; float x_56_1_2; float x_56_1_3; float x_56_1_4; bool x_56_1_5; } x56; int x57; unsigned short x58; bool x59; float x60; bool x61; bool x62; bool x63; bool x64; bool x65; }*)arg4;
- (void)hlg_createLUTFromDMConfig:(struct { float x1; float x2; unsigned int x3; float x4; float x5; float x6; float x7; unsigned int x8; float x9; float x10; float x11; float x12; unsigned int x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; unsigned int x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; bool x46; float x47; float x48; bool x49; float x50; bool x51; int x52; int x53; float x54; int x55; struct _DpcParam { float x_56_1_1; float x_56_1_2; float x_56_1_3; float x_56_1_4; bool x_56_1_5; } x56; int x57; unsigned short x58; bool x59; float x60; bool x61; bool x62; bool x63; bool x64; bool x65; }*)arg1 DM:(id)arg2 HDRControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19[9]; float x20[9]; unsigned int x21; float x22; unsigned int x23; float x24; bool x25; int x26; unsigned int x27; bool x28; }*)arg3 TMParam:(struct _HLGTMParam { float x1; struct _HDR10TMParam { bool x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; float x_2_1_11; float x_2_1_12; float x_2_1_13; float x_2_1_14; float x_2_1_15; float x_2_1_16; float x_2_1_17; float x_2_1_18; float x_2_1_19; float x_2_1_20; float x_2_1_21; struct _TMCurveParam { int x_22_2_1; union { struct _splCurveParam { unsigned short x_1_4_1; float x_1_4_2[6]; float x_1_4_3[6]; float x_1_4_4[6]; float x_1_4_5[5][4]; float x_1_4_6[5][4]; float x_1_4_7[2][2]; } x_2_3_1; struct _ebzCurveParam { unsigned short x_2_4_1; float x_2_4_2[6]; float x_2_4_3[6]; float x_2_4_4[6]; unsigned short x_2_4_5[5]; float x_2_4_6[5][14]; float x_2_4_7[6]; float x_2_4_8[5][15]; float x_2_4_9[5][15]; float x_2_4_10[5][15]; } x_2_3_2; struct _doviCurveParam { float x_3_4_1; float x_3_4_2; float x_3_4_3; float x_3_4_4; } x_2_3_3; } x_22_2_2; } x_2_1_22; float x_2_1_23; float x_2_1_24; float x_2_1_25; float x_2_1_26; int x_2_1_27; float x_2_1_28; float x_2_1_29; float x_2_1_30; } x2; }*)arg4 EdrAdaptationParam:(struct _EdrAdaptationParam { bool x1; unsigned short x2; float x3[3]; float x4[3]; float x5[3]; bool x6; float x7[2][4]; float x8[2][4]; float x9[2][2]; }*)arg5 AmbAdaptationParam:(struct _AmbAdaptationParam { bool x1; unsigned short x2; float x3[3]; float x4[3]; float x5[3]; float x6; float x7; bool x8; float x9[2][4]; float x10[2][4]; float x11[2][2]; float x12; }*)arg6 TMMode:(int)arg7;
- (void)hlg_tm_createLUTFromDMConfig:(struct { float x1; float x2; unsigned int x3; float x4; float x5; float x6; float x7; unsigned int x8; float x9; float x10; float x11; float x12; unsigned int x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; unsigned int x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; bool x46; float x47; float x48; bool x49; float x50; bool x51; int x52; int x53; float x54; int x55; struct _DpcParam { float x_56_1_1; float x_56_1_2; float x_56_1_3; float x_56_1_4; bool x_56_1_5; } x56; int x57; unsigned short x58; bool x59; float x60; bool x61; bool x62; bool x63; bool x64; bool x65; }*)arg1 DM:(id)arg2 TMParam:(struct _HLGTMParam { float x1; struct _HDR10TMParam { bool x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; float x_2_1_11; float x_2_1_12; float x_2_1_13; float x_2_1_14; float x_2_1_15; float x_2_1_16; float x_2_1_17; float x_2_1_18; float x_2_1_19; float x_2_1_20; float x_2_1_21; struct _TMCurveParam { int x_22_2_1; union { struct _splCurveParam { unsigned short x_1_4_1; float x_1_4_2[6]; float x_1_4_3[6]; float x_1_4_4[6]; float x_1_4_5[5][4]; float x_1_4_6[5][4]; float x_1_4_7[2][2]; } x_2_3_1; struct _ebzCurveParam { unsigned short x_2_4_1; float x_2_4_2[6]; float x_2_4_3[6]; float x_2_4_4[6]; unsigned short x_2_4_5[5]; float x_2_4_6[5][14]; float x_2_4_7[6]; float x_2_4_8[5][15]; float x_2_4_9[5][15]; float x_2_4_10[5][15]; } x_2_3_2; struct _doviCurveParam { float x_3_4_1; float x_3_4_2; float x_3_4_3; float x_3_4_4; } x_2_3_3; } x_22_2_2; } x_2_1_22; float x_2_1_23; float x_2_1_24; float x_2_1_25; float x_2_1_26; int x_2_1_27; float x_2_1_28; float x_2_1_29; float x_2_1_30; } x2; }*)arg3 EdrAdaptationParam:(struct _EdrAdaptationParam { bool x1; unsigned short x2; float x3[3]; float x4[3]; float x5[3]; bool x6; float x7[2][4]; float x8[2][4]; float x9[2][2]; }*)arg4 AmbAdaptationParam:(struct _AmbAdaptationParam { bool x1; unsigned short x2; float x3[3]; float x4[3]; float x5[3]; float x6; float x7; bool x8; float x9[2][4]; float x10[2][4]; float x11[2][2]; float x12; }*)arg5 TMMode:(int)arg6;
- (id)init;
- (bool)isContentSupported:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19[9]; float x20[9]; unsigned int x21; float x22; unsigned int x23; float x24; bool x25; int x26; unsigned int x27; bool x28; }*)arg1;
- (long long)iterateDISPColorConfig:(int)arg1 config:(id /* block */)arg2;
- (void)populateDISPColorConfig:(struct { float x1; float x2; unsigned int x3; float x4; float x5; float x6; float x7; unsigned int x8; float x9; float x10; float x11; float x12; unsigned int x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; unsigned int x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; bool x46; float x47; float x48; bool x49; float x50; bool x51; int x52; int x53; float x54; int x55; struct _DpcParam { float x_56_1_1; float x_56_1_2; float x_56_1_3; float x_56_1_4; bool x_56_1_5; } x56; int x57; unsigned short x58; bool x59; float x60; bool x61; bool x62; bool x63; bool x64; bool x65; }*)arg1 DMData:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5[9]; unsigned int x6[3]; int x7[9]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; struct { unsigned short x_22_1_1; unsigned short x_22_1_2; unsigned short x_22_1_3; unsigned short x_22_1_4; } x22; struct { unsigned short x_23_1_1; unsigned short x_23_1_2; unsigned short x_23_1_3; unsigned short x_23_1_4; unsigned short x_23_1_5; unsigned short x_23_1_6; unsigned short x_23_1_7; short x_23_1_8; } x23[8]; struct { unsigned short x_24_1_1; unsigned short x_24_1_2; unsigned short x_24_1_3; unsigned short x_24_1_4; } x24; struct { unsigned short x_25_1_1; unsigned short x_25_1_2; unsigned short x_25_1_3; } x25; struct { unsigned short x_26_1_1; unsigned short x_26_1_2; unsigned short x_26_1_3; unsigned short x_26_1_4; unsigned short x_26_1_5; } x26; }*)arg2 tcControl:(struct ToneCurve_Control { double x1; double x2; double x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; double x11; bool x12; bool x13; float x14; bool x15; int x16; struct __CFString {} *x17; int x18; int x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; float x25; float x26; float x27; float x28; float x29; unsigned int x30; unsigned int x31 : 1; unsigned int x32 : 1; float x33; struct _AuxData { int x_34_1_1; int x_34_1_2; int x_34_1_3; float x_34_1_4; float x_34_1_5; float x_34_1_6; float x_34_1_7; int x_34_1_8; float x_34_1_9; float x_34_1_10; float x_34_1_11; bool x_34_1_12; } x34; struct _TMData { int x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; int x_35_1_5; float x_35_1_6; float x_35_1_7; float x_35_1_8; int x_35_1_9; float x_35_1_10; float x_35_1_11; float x_35_1_12; float x_35_1_13; float x_35_1_14; float x_35_1_15; float x_35_1_16; float x_35_1_17; float x_35_1_18; float x_35_1_19; float x_35_1_20; float x_35_1_21; float x_35_1_22; float x_35_1_23; float x_35_1_24; float x_35_1_25; int x_35_1_26; int x_35_1_27; float x_35_1_28; float x_35_1_29; struct _Percentiles_t { float x_30_2_1[8]; float x_30_2_2[8]; unsigned int x_30_2_3; } x_35_1_30; bool x_35_1_31; bool x_35_1_32; bool x_35_1_33; } x35; }*)arg3 hdrControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19[9]; float x20[9]; unsigned int x21; float x22; unsigned int x23; float x24; bool x25; int x26; unsigned int x27; bool x28; }*)arg4 MSRHDRContext:(struct EngineHDRContext { unsigned int x1; unsigned int x2; int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; bool x18; bool x19; bool x20; struct _DpcParam { float x_21_1_1; float x_21_1_2; float x_21_1_3; float x_21_1_4; bool x_21_1_5; } x21; unsigned int x22; }*)arg5;
- (void)populateDISPColorConfigFixedDegamma:(bool)arg1 AlgoMode:(int)arg2 Prefix:(char *)arg3 DMConfig:(struct { float x1; float x2; unsigned int x3; float x4; float x5; float x6; float x7; unsigned int x8; float x9; float x10; float x11; float x12; unsigned int x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; unsigned int x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; bool x46; float x47; float x48; bool x49; float x50; bool x51; int x52; int x53; float x54; int x55; struct _DpcParam { float x_56_1_1; float x_56_1_2; float x_56_1_3; float x_56_1_4; bool x_56_1_5; } x56; int x57; unsigned short x58; bool x59; float x60; bool x61; bool x62; bool x63; bool x64; bool x65; }*)arg4 DMData:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5[9]; unsigned int x6[3]; int x7[9]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; struct { unsigned short x_22_1_1; unsigned short x_22_1_2; unsigned short x_22_1_3; unsigned short x_22_1_4; } x22; struct { unsigned short x_23_1_1; unsigned short x_23_1_2; unsigned short x_23_1_3; unsigned short x_23_1_4; unsigned short x_23_1_5; unsigned short x_23_1_6; unsigned short x_23_1_7; short x_23_1_8; } x23[8]; struct { unsigned short x_24_1_1; unsigned short x_24_1_2; unsigned short x_24_1_3; unsigned short x_24_1_4; } x24; struct { unsigned short x_25_1_1; unsigned short x_25_1_2; unsigned short x_25_1_3; } x25; struct { unsigned short x_26_1_1; unsigned short x_26_1_2; unsigned short x_26_1_3; unsigned short x_26_1_4; unsigned short x_26_1_5; } x26; }*)arg5 tcControl:(struct ToneCurve_Control { double x1; double x2; double x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; double x11; bool x12; bool x13; float x14; bool x15; int x16; struct __CFString {} *x17; int x18; int x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; float x25; float x26; float x27; float x28; float x29; unsigned int x30; unsigned int x31 : 1; unsigned int x32 : 1; float x33; struct _AuxData { int x_34_1_1; int x_34_1_2; int x_34_1_3; float x_34_1_4; float x_34_1_5; float x_34_1_6; float x_34_1_7; int x_34_1_8; float x_34_1_9; float x_34_1_10; float x_34_1_11; bool x_34_1_12; } x34; struct _TMData { int x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; int x_35_1_5; float x_35_1_6; float x_35_1_7; float x_35_1_8; int x_35_1_9; float x_35_1_10; float x_35_1_11; float x_35_1_12; float x_35_1_13; float x_35_1_14; float x_35_1_15; float x_35_1_16; float x_35_1_17; float x_35_1_18; float x_35_1_19; float x_35_1_20; float x_35_1_21; float x_35_1_22; float x_35_1_23; float x_35_1_24; float x_35_1_25; int x_35_1_26; int x_35_1_27; float x_35_1_28; float x_35_1_29; struct _Percentiles_t { float x_30_2_1[8]; float x_30_2_2[8]; unsigned int x_30_2_3; } x_35_1_30; bool x_35_1_31; bool x_35_1_32; bool x_35_1_33; } x35; }*)arg6 hdrControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19[9]; float x20[9]; unsigned int x21; float x22; unsigned int x23; float x24; bool x25; int x26; unsigned int x27; bool x28; }*)arg7 DISPHDRContext:(struct EngineHDRContext { unsigned int x1; unsigned int x2; int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; bool x18; bool x19; bool x20; struct _DpcParam { float x_21_1_1; float x_21_1_2; float x_21_1_3; float x_21_1_4; bool x_21_1_5; } x21; unsigned int x22; }*)arg8;
- (void)populateDISPColorConfigPostToneMapCSC:(bool)arg1 AlgoMode:(int)arg2 Prefix:(char *)arg3 DMConfig:(struct { float x1; float x2; unsigned int x3; float x4; float x5; float x6; float x7; unsigned int x8; float x9; float x10; float x11; float x12; unsigned int x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; unsigned int x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; bool x46; float x47; float x48; bool x49; float x50; bool x51; int x52; int x53; float x54; int x55; struct _DpcParam { float x_56_1_1; float x_56_1_2; float x_56_1_3; float x_56_1_4; bool x_56_1_5; } x56; int x57; unsigned short x58; bool x59; float x60; bool x61; bool x62; bool x63; bool x64; bool x65; }*)arg4 DMData:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5[9]; unsigned int x6[3]; int x7[9]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; struct { unsigned short x_22_1_1; unsigned short x_22_1_2; unsigned short x_22_1_3; unsigned short x_22_1_4; } x22; struct { unsigned short x_23_1_1; unsigned short x_23_1_2; unsigned short x_23_1_3; unsigned short x_23_1_4; unsigned short x_23_1_5; unsigned short x_23_1_6; unsigned short x_23_1_7; short x_23_1_8; } x23[8]; struct { unsigned short x_24_1_1; unsigned short x_24_1_2; unsigned short x_24_1_3; unsigned short x_24_1_4; } x24; struct { unsigned short x_25_1_1; unsigned short x_25_1_2; unsigned short x_25_1_3; } x25; struct { unsigned short x_26_1_1; unsigned short x_26_1_2; unsigned short x_26_1_3; unsigned short x_26_1_4; unsigned short x_26_1_5; } x26; }*)arg5 tcControl:(struct ToneCurve_Control { double x1; double x2; double x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; double x11; bool x12; bool x13; float x14; bool x15; int x16; struct __CFString {} *x17; int x18; int x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; float x25; float x26; float x27; float x28; float x29; unsigned int x30; unsigned int x31 : 1; unsigned int x32 : 1; float x33; struct _AuxData { int x_34_1_1; int x_34_1_2; int x_34_1_3; float x_34_1_4; float x_34_1_5; float x_34_1_6; float x_34_1_7; int x_34_1_8; float x_34_1_9; float x_34_1_10; float x_34_1_11; bool x_34_1_12; } x34; struct _TMData { int x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; int x_35_1_5; float x_35_1_6; float x_35_1_7; float x_35_1_8; int x_35_1_9; float x_35_1_10; float x_35_1_11; float x_35_1_12; float x_35_1_13; float x_35_1_14; float x_35_1_15; float x_35_1_16; float x_35_1_17; float x_35_1_18; float x_35_1_19; float x_35_1_20; float x_35_1_21; float x_35_1_22; float x_35_1_23; float x_35_1_24; float x_35_1_25; int x_35_1_26; int x_35_1_27; float x_35_1_28; float x_35_1_29; struct _Percentiles_t { float x_30_2_1[8]; float x_30_2_2[8]; unsigned int x_30_2_3; } x_35_1_30; bool x_35_1_31; bool x_35_1_32; bool x_35_1_33; } x35; }*)arg6 hdrControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19[9]; float x20[9]; unsigned int x21; float x22; unsigned int x23; float x24; bool x25; int x26; unsigned int x27; bool x28; }*)arg7 DISPHDRContext:(struct EngineHDRContext { unsigned int x1; unsigned int x2; int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; bool x18; bool x19; bool x20; struct _DpcParam { float x_21_1_1; float x_21_1_2; float x_21_1_3; float x_21_1_4; bool x_21_1_5; } x21; unsigned int x22; }*)arg8;
- (void)populateDISPColorConfigPreToneMapCSC:(bool)arg1 AlgoMode:(int)arg2 Prefix:(char *)arg3 DMConfig:(struct { float x1; float x2; unsigned int x3; float x4; float x5; float x6; float x7; unsigned int x8; float x9; float x10; float x11; float x12; unsigned int x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; unsigned int x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; bool x46; float x47; float x48; bool x49; float x50; bool x51; int x52; int x53; float x54; int x55; struct _DpcParam { float x_56_1_1; float x_56_1_2; float x_56_1_3; float x_56_1_4; bool x_56_1_5; } x56; int x57; unsigned short x58; bool x59; float x60; bool x61; bool x62; bool x63; bool x64; bool x65; }*)arg4 DMData:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5[9]; unsigned int x6[3]; int x7[9]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; struct { unsigned short x_22_1_1; unsigned short x_22_1_2; unsigned short x_22_1_3; unsigned short x_22_1_4; } x22; struct { unsigned short x_23_1_1; unsigned short x_23_1_2; unsigned short x_23_1_3; unsigned short x_23_1_4; unsigned short x_23_1_5; unsigned short x_23_1_6; unsigned short x_23_1_7; short x_23_1_8; } x23[8]; struct { unsigned short x_24_1_1; unsigned short x_24_1_2; unsigned short x_24_1_3; unsigned short x_24_1_4; } x24; struct { unsigned short x_25_1_1; unsigned short x_25_1_2; unsigned short x_25_1_3; } x25; struct { unsigned short x_26_1_1; unsigned short x_26_1_2; unsigned short x_26_1_3; unsigned short x_26_1_4; unsigned short x_26_1_5; } x26; }*)arg5 tcControl:(struct ToneCurve_Control { double x1; double x2; double x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; double x11; bool x12; bool x13; float x14; bool x15; int x16; struct __CFString {} *x17; int x18; int x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; float x25; float x26; float x27; float x28; float x29; unsigned int x30; unsigned int x31 : 1; unsigned int x32 : 1; float x33; struct _AuxData { int x_34_1_1; int x_34_1_2; int x_34_1_3; float x_34_1_4; float x_34_1_5; float x_34_1_6; float x_34_1_7; int x_34_1_8; float x_34_1_9; float x_34_1_10; float x_34_1_11; bool x_34_1_12; } x34; struct _TMData { int x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; int x_35_1_5; float x_35_1_6; float x_35_1_7; float x_35_1_8; int x_35_1_9; float x_35_1_10; float x_35_1_11; float x_35_1_12; float x_35_1_13; float x_35_1_14; float x_35_1_15; float x_35_1_16; float x_35_1_17; float x_35_1_18; float x_35_1_19; float x_35_1_20; float x_35_1_21; float x_35_1_22; float x_35_1_23; float x_35_1_24; float x_35_1_25; int x_35_1_26; int x_35_1_27; float x_35_1_28; float x_35_1_29; struct _Percentiles_t { float x_30_2_1[8]; float x_30_2_2[8]; unsigned int x_30_2_3; } x_35_1_30; bool x_35_1_31; bool x_35_1_32; bool x_35_1_33; } x35; }*)arg6 hdrControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19[9]; float x20[9]; unsigned int x21; float x22; unsigned int x23; float x24; bool x25; int x26; unsigned int x27; bool x28; }*)arg7 DISPHDRContext:(struct EngineHDRContext { unsigned int x1; unsigned int x2; int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; bool x18; bool x19; bool x20; struct _DpcParam { float x_21_1_1; float x_21_1_2; float x_21_1_3; float x_21_1_4; bool x_21_1_5; } x21; unsigned int x22; }*)arg8;
- (void)populateDISPColorConfigToneMap:(bool)arg1 AlgoMode:(int)arg2 Prefix:(char *)arg3 DMConfig:(struct { float x1; float x2; unsigned int x3; float x4; float x5; float x6; float x7; unsigned int x8; float x9; float x10; float x11; float x12; unsigned int x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; unsigned int x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; bool x46; float x47; float x48; bool x49; float x50; bool x51; int x52; int x53; float x54; int x55; struct _DpcParam { float x_56_1_1; float x_56_1_2; float x_56_1_3; float x_56_1_4; bool x_56_1_5; } x56; int x57; unsigned short x58; bool x59; float x60; bool x61; bool x62; bool x63; bool x64; bool x65; }*)arg4 DMData:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5[9]; unsigned int x6[3]; int x7[9]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; struct { unsigned short x_22_1_1; unsigned short x_22_1_2; unsigned short x_22_1_3; unsigned short x_22_1_4; } x22; struct { unsigned short x_23_1_1; unsigned short x_23_1_2; unsigned short x_23_1_3; unsigned short x_23_1_4; unsigned short x_23_1_5; unsigned short x_23_1_6; unsigned short x_23_1_7; short x_23_1_8; } x23[8]; struct { unsigned short x_24_1_1; unsigned short x_24_1_2; unsigned short x_24_1_3; unsigned short x_24_1_4; } x24; struct { unsigned short x_25_1_1; unsigned short x_25_1_2; unsigned short x_25_1_3; } x25; struct { unsigned short x_26_1_1; unsigned short x_26_1_2; unsigned short x_26_1_3; unsigned short x_26_1_4; unsigned short x_26_1_5; } x26; }*)arg5 tcControl:(struct ToneCurve_Control { double x1; double x2; double x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; double x11; bool x12; bool x13; float x14; bool x15; int x16; struct __CFString {} *x17; int x18; int x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; float x25; float x26; float x27; float x28; float x29; unsigned int x30; unsigned int x31 : 1; unsigned int x32 : 1; float x33; struct _AuxData { int x_34_1_1; int x_34_1_2; int x_34_1_3; float x_34_1_4; float x_34_1_5; float x_34_1_6; float x_34_1_7; int x_34_1_8; float x_34_1_9; float x_34_1_10; float x_34_1_11; bool x_34_1_12; } x34; struct _TMData { int x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; int x_35_1_5; float x_35_1_6; float x_35_1_7; float x_35_1_8; int x_35_1_9; float x_35_1_10; float x_35_1_11; float x_35_1_12; float x_35_1_13; float x_35_1_14; float x_35_1_15; float x_35_1_16; float x_35_1_17; float x_35_1_18; float x_35_1_19; float x_35_1_20; float x_35_1_21; float x_35_1_22; float x_35_1_23; float x_35_1_24; float x_35_1_25; int x_35_1_26; int x_35_1_27; float x_35_1_28; float x_35_1_29; struct _Percentiles_t { float x_30_2_1[8]; float x_30_2_2[8]; unsigned int x_30_2_3; } x_35_1_30; bool x_35_1_31; bool x_35_1_32; bool x_35_1_33; } x35; }*)arg6 hdrControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19[9]; float x20[9]; unsigned int x21; float x22; unsigned int x23; float x24; bool x25; int x26; unsigned int x27; bool x28; }*)arg7 DISPHDRContext:(struct EngineHDRContext { unsigned int x1; unsigned int x2; int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; bool x18; bool x19; bool x20; struct _DpcParam { float x_21_1_1; float x_21_1_2; float x_21_1_3; float x_21_1_4; bool x_21_1_5; } x21; unsigned int x22; }*)arg8;
- (void)populateDISPColorConfigToneMapLUT:(bool)arg1 Prefix:(char *)arg2 DMConfig:(struct { float x1; float x2; unsigned int x3; float x4; float x5; float x6; float x7; unsigned int x8; float x9; float x10; float x11; float x12; unsigned int x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; unsigned int x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; bool x46; float x47; float x48; bool x49; float x50; bool x51; int x52; int x53; float x54; int x55; struct _DpcParam { float x_56_1_1; float x_56_1_2; float x_56_1_3; float x_56_1_4; bool x_56_1_5; } x56; int x57; unsigned short x58; bool x59; float x60; bool x61; bool x62; bool x63; bool x64; bool x65; }*)arg3 DMData:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5[9]; unsigned int x6[3]; int x7[9]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; struct { unsigned short x_22_1_1; unsigned short x_22_1_2; unsigned short x_22_1_3; unsigned short x_22_1_4; } x22; struct { unsigned short x_23_1_1; unsigned short x_23_1_2; unsigned short x_23_1_3; unsigned short x_23_1_4; unsigned short x_23_1_5; unsigned short x_23_1_6; unsigned short x_23_1_7; short x_23_1_8; } x23[8]; struct { unsigned short x_24_1_1; unsigned short x_24_1_2; unsigned short x_24_1_3; unsigned short x_24_1_4; } x24; struct { unsigned short x_25_1_1; unsigned short x_25_1_2; unsigned short x_25_1_3; } x25; struct { unsigned short x_26_1_1; unsigned short x_26_1_2; unsigned short x_26_1_3; unsigned short x_26_1_4; unsigned short x_26_1_5; } x26; }*)arg4 tcControl:(struct ToneCurve_Control { double x1; double x2; double x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; double x11; bool x12; bool x13; float x14; bool x15; int x16; struct __CFString {} *x17; int x18; int x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; float x25; float x26; float x27; float x28; float x29; unsigned int x30; unsigned int x31 : 1; unsigned int x32 : 1; float x33; struct _AuxData { int x_34_1_1; int x_34_1_2; int x_34_1_3; float x_34_1_4; float x_34_1_5; float x_34_1_6; float x_34_1_7; int x_34_1_8; float x_34_1_9; float x_34_1_10; float x_34_1_11; bool x_34_1_12; } x34; struct _TMData { int x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; int x_35_1_5; float x_35_1_6; float x_35_1_7; float x_35_1_8; int x_35_1_9; float x_35_1_10; float x_35_1_11; float x_35_1_12; float x_35_1_13; float x_35_1_14; float x_35_1_15; float x_35_1_16; float x_35_1_17; float x_35_1_18; float x_35_1_19; float x_35_1_20; float x_35_1_21; float x_35_1_22; float x_35_1_23; float x_35_1_24; float x_35_1_25; int x_35_1_26; int x_35_1_27; float x_35_1_28; float x_35_1_29; struct _Percentiles_t { float x_30_2_1[8]; float x_30_2_2[8]; unsigned int x_30_2_3; } x_35_1_30; bool x_35_1_31; bool x_35_1_32; bool x_35_1_33; } x35; }*)arg5 hdrControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19[9]; float x20[9]; unsigned int x21; float x22; unsigned int x23; float x24; bool x25; int x26; unsigned int x27; bool x28; }*)arg6 DISPHDRContext:(struct EngineHDRContext { unsigned int x1; unsigned int x2; int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; bool x18; bool x19; bool x20; struct _DpcParam { float x_21_1_1; float x_21_1_2; float x_21_1_3; float x_21_1_4; bool x_21_1_5; } x21; unsigned int x22; }*)arg7;
- (void)populateDISPColorConfigToneMapParametric:(bool)arg1 Prefix:(char *)arg2 DMConfig:(struct { float x1; float x2; unsigned int x3; float x4; float x5; float x6; float x7; unsigned int x8; float x9; float x10; float x11; float x12; unsigned int x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; unsigned int x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; bool x46; float x47; float x48; bool x49; float x50; bool x51; int x52; int x53; float x54; int x55; struct _DpcParam { float x_56_1_1; float x_56_1_2; float x_56_1_3; float x_56_1_4; bool x_56_1_5; } x56; int x57; unsigned short x58; bool x59; float x60; bool x61; bool x62; bool x63; bool x64; bool x65; }*)arg3 DMData:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5[9]; unsigned int x6[3]; int x7[9]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; struct { unsigned short x_22_1_1; unsigned short x_22_1_2; unsigned short x_22_1_3; unsigned short x_22_1_4; } x22; struct { unsigned short x_23_1_1; unsigned short x_23_1_2; unsigned short x_23_1_3; unsigned short x_23_1_4; unsigned short x_23_1_5; unsigned short x_23_1_6; unsigned short x_23_1_7; short x_23_1_8; } x23[8]; struct { unsigned short x_24_1_1; unsigned short x_24_1_2; unsigned short x_24_1_3; unsigned short x_24_1_4; } x24; struct { unsigned short x_25_1_1; unsigned short x_25_1_2; unsigned short x_25_1_3; } x25; struct { unsigned short x_26_1_1; unsigned short x_26_1_2; unsigned short x_26_1_3; unsigned short x_26_1_4; unsigned short x_26_1_5; } x26; }*)arg4 tcControl:(struct ToneCurve_Control { double x1; double x2; double x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; double x11; bool x12; bool x13; float x14; bool x15; int x16; struct __CFString {} *x17; int x18; int x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; float x25; float x26; float x27; float x28; float x29; unsigned int x30; unsigned int x31 : 1; unsigned int x32 : 1; float x33; struct _AuxData { int x_34_1_1; int x_34_1_2; int x_34_1_3; float x_34_1_4; float x_34_1_5; float x_34_1_6; float x_34_1_7; int x_34_1_8; float x_34_1_9; float x_34_1_10; float x_34_1_11; bool x_34_1_12; } x34; struct _TMData { int x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; int x_35_1_5; float x_35_1_6; float x_35_1_7; float x_35_1_8; int x_35_1_9; float x_35_1_10; float x_35_1_11; float x_35_1_12; float x_35_1_13; float x_35_1_14; float x_35_1_15; float x_35_1_16; float x_35_1_17; float x_35_1_18; float x_35_1_19; float x_35_1_20; float x_35_1_21; float x_35_1_22; float x_35_1_23; float x_35_1_24; float x_35_1_25; int x_35_1_26; int x_35_1_27; float x_35_1_28; float x_35_1_29; struct _Percentiles_t { float x_30_2_1[8]; float x_30_2_2[8]; unsigned int x_30_2_3; } x_35_1_30; bool x_35_1_31; bool x_35_1_32; bool x_35_1_33; } x35; }*)arg5 hdrControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19[9]; float x20[9]; unsigned int x21; float x22; unsigned int x23; float x24; bool x25; int x26; unsigned int x27; bool x28; }*)arg6 DISPHDRContext:(struct EngineHDRContext { unsigned int x1; unsigned int x2; int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; bool x18; bool x19; bool x20; struct _DpcParam { float x_21_1_1; float x_21_1_2; float x_21_1_3; float x_21_1_4; bool x_21_1_5; } x21; unsigned int x22; }*)arg7;
- (void)populateDISPToneMapConfig:(char *)arg1 DMConfig:(struct { float x1; float x2; unsigned int x3; float x4; float x5; float x6; float x7; unsigned int x8; float x9; float x10; float x11; float x12; unsigned int x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; unsigned int x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; bool x46; float x47; float x48; bool x49; float x50; bool x51; int x52; int x53; float x54; int x55; struct _DpcParam { float x_56_1_1; float x_56_1_2; float x_56_1_3; float x_56_1_4; bool x_56_1_5; } x56; int x57; unsigned short x58; bool x59; float x60; bool x61; bool x62; bool x63; bool x64; bool x65; }*)arg2 DMData:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5[9]; unsigned int x6[3]; int x7[9]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; struct { unsigned short x_22_1_1; unsigned short x_22_1_2; unsigned short x_22_1_3; unsigned short x_22_1_4; } x22; struct { unsigned short x_23_1_1; unsigned short x_23_1_2; unsigned short x_23_1_3; unsigned short x_23_1_4; unsigned short x_23_1_5; unsigned short x_23_1_6; unsigned short x_23_1_7; short x_23_1_8; } x23[8]; struct { unsigned short x_24_1_1; unsigned short x_24_1_2; unsigned short x_24_1_3; unsigned short x_24_1_4; } x24; struct { unsigned short x_25_1_1; unsigned short x_25_1_2; unsigned short x_25_1_3; } x25; struct { unsigned short x_26_1_1; unsigned short x_26_1_2; unsigned short x_26_1_3; unsigned short x_26_1_4; unsigned short x_26_1_5; } x26; }*)arg3 tcControl:(struct ToneCurve_Control { double x1; double x2; double x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; double x11; bool x12; bool x13; float x14; bool x15; int x16; struct __CFString {} *x17; int x18; int x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; float x25; float x26; float x27; float x28; float x29; unsigned int x30; unsigned int x31 : 1; unsigned int x32 : 1; float x33; struct _AuxData { int x_34_1_1; int x_34_1_2; int x_34_1_3; float x_34_1_4; float x_34_1_5; float x_34_1_6; float x_34_1_7; int x_34_1_8; float x_34_1_9; float x_34_1_10; float x_34_1_11; bool x_34_1_12; } x34; struct _TMData { int x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; int x_35_1_5; float x_35_1_6; float x_35_1_7; float x_35_1_8; int x_35_1_9; float x_35_1_10; float x_35_1_11; float x_35_1_12; float x_35_1_13; float x_35_1_14; float x_35_1_15; float x_35_1_16; float x_35_1_17; float x_35_1_18; float x_35_1_19; float x_35_1_20; float x_35_1_21; float x_35_1_22; float x_35_1_23; float x_35_1_24; float x_35_1_25; int x_35_1_26; int x_35_1_27; float x_35_1_28; float x_35_1_29; struct _Percentiles_t { float x_30_2_1[8]; float x_30_2_2[8]; unsigned int x_30_2_3; } x_35_1_30; bool x_35_1_31; bool x_35_1_32; bool x_35_1_33; } x35; }*)arg4 hdrControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19[9]; float x20[9]; unsigned int x21; float x22; unsigned int x23; float x24; bool x25; int x26; unsigned int x27; bool x28; }*)arg5 DISPHDRContext:(struct EngineHDRContext { unsigned int x1; unsigned int x2; int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; bool x18; bool x19; bool x20; struct _DpcParam { float x_21_1_1; float x_21_1_2; float x_21_1_3; float x_21_1_4; bool x_21_1_5; } x21; unsigned int x22; }*)arg6;
- (void)processDISPColorConfig:(struct __IOMobileFramebuffer { }*)arg1 layer:(unsigned int)arg2;
- (bool)processFrameByDISPWithComposerData:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13[3]; unsigned int x14[3][18]; unsigned int x15[1][1][3][9]; unsigned int x16[1][1][3][9]; unsigned int x17[1][1][3][9]; unsigned int x18[1][1][3][9]; unsigned int x19[1][1][3][9]; int x20[1][1][3][9][3]; unsigned int x21[1][1][3][9][3]; long long x22[1][1][3][9][6]; float x23[1][1][3][9][6]; unsigned int x24[1][1][3][9]; int x25[1][1][3][9]; unsigned int x26[1][1][3][9]; int x27[1][1][3][9][4][7]; unsigned int x28[1][1][3][9][4][7]; long long x29[1][1][3][9][4][7]; float x30[1][1][3][9][4][7]; int x31[1][1][3][9][6]; unsigned int x32[1][1][3][9][6]; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36[9]; unsigned int x37[1][1][9][3]; unsigned int x38[1][1][9][3]; unsigned int x39[1][1][9][3]; long long x40[1][1][9][3]; unsigned int x41[1][1][9][3]; unsigned int x42[1][1][9][3]; }*)arg1 DM:(id)arg2 DMData:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5[9]; unsigned int x6[3]; int x7[9]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; struct { unsigned short x_22_1_1; unsigned short x_22_1_2; unsigned short x_22_1_3; unsigned short x_22_1_4; } x22; struct { unsigned short x_23_1_1; unsigned short x_23_1_2; unsigned short x_23_1_3; unsigned short x_23_1_4; unsigned short x_23_1_5; unsigned short x_23_1_6; unsigned short x_23_1_7; short x_23_1_8; } x23[8]; struct { unsigned short x_24_1_1; unsigned short x_24_1_2; unsigned short x_24_1_3; unsigned short x_24_1_4; } x24; struct { unsigned short x_25_1_1; unsigned short x_25_1_2; unsigned short x_25_1_3; } x25; struct { unsigned short x_26_1_1; unsigned short x_26_1_2; unsigned short x_26_1_3; unsigned short x_26_1_4; unsigned short x_26_1_5; } x26; }*)arg3 tcControl:(struct ToneCurve_Control { double x1; double x2; double x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; double x11; bool x12; bool x13; float x14; bool x15; int x16; struct __CFString {} *x17; int x18; int x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; float x25; float x26; float x27; float x28; float x29; unsigned int x30; unsigned int x31 : 1; unsigned int x32 : 1; float x33; struct _AuxData { int x_34_1_1; int x_34_1_2; int x_34_1_3; float x_34_1_4; float x_34_1_5; float x_34_1_6; float x_34_1_7; int x_34_1_8; float x_34_1_9; float x_34_1_10; float x_34_1_11; bool x_34_1_12; } x34; struct _TMData { int x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; int x_35_1_5; float x_35_1_6; float x_35_1_7; float x_35_1_8; int x_35_1_9; float x_35_1_10; float x_35_1_11; float x_35_1_12; float x_35_1_13; float x_35_1_14; float x_35_1_15; float x_35_1_16; float x_35_1_17; float x_35_1_18; float x_35_1_19; float x_35_1_20; float x_35_1_21; float x_35_1_22; float x_35_1_23; float x_35_1_24; float x_35_1_25; int x_35_1_26; int x_35_1_27; float x_35_1_28; float x_35_1_29; struct _Percentiles_t { float x_30_2_1[8]; float x_30_2_2[8]; unsigned int x_30_2_3; } x_35_1_30; bool x_35_1_31; bool x_35_1_32; bool x_35_1_33; } x35; }*)arg4 hdrControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19[9]; float x20[9]; unsigned int x21; float x22; unsigned int x23; float x24; bool x25; int x26; unsigned int x27; bool x28; }*)arg5 hdr10InfoFrame:(struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned short x_1_1_7; unsigned short x_1_1_8; unsigned int x_1_1_9; unsigned int x_1_1_10; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; }*)arg6 layer0:(struct __IOSurface { }*)arg7 layer1:(struct __IOSurface { }*)arg8 frameNumebr:(unsigned long long)arg9;
- (void)runPostFrameDumpActions;
- (void)runPreFrameDumpActions:(struct EngineHDRContext { unsigned int x1; unsigned int x2; int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; bool x18; bool x19; bool x20; struct _DpcParam { float x_21_1_1; float x_21_1_2; float x_21_1_3; float x_21_1_4; bool x_21_1_5; } x21; unsigned int x22; }*)arg1 tcControl:(struct ToneCurve_Control { double x1; double x2; double x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; double x11; bool x12; bool x13; float x14; bool x15; int x16; struct __CFString {} *x17; int x18; int x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; float x25; float x26; float x27; float x28; float x29; unsigned int x30; unsigned int x31 : 1; unsigned int x32 : 1; float x33; struct _AuxData { int x_34_1_1; int x_34_1_2; int x_34_1_3; float x_34_1_4; float x_34_1_5; float x_34_1_6; float x_34_1_7; int x_34_1_8; float x_34_1_9; float x_34_1_10; float x_34_1_11; bool x_34_1_12; } x34; struct _TMData { int x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; int x_35_1_5; float x_35_1_6; float x_35_1_7; float x_35_1_8; int x_35_1_9; float x_35_1_10; float x_35_1_11; float x_35_1_12; float x_35_1_13; float x_35_1_14; float x_35_1_15; float x_35_1_16; float x_35_1_17; float x_35_1_18; float x_35_1_19; float x_35_1_20; float x_35_1_21; float x_35_1_22; float x_35_1_23; float x_35_1_24; float x_35_1_25; int x_35_1_26; int x_35_1_27; float x_35_1_28; float x_35_1_29; struct _Percentiles_t { float x_30_2_1[8]; float x_30_2_2[8]; unsigned int x_30_2_3; } x_35_1_30; bool x_35_1_31; bool x_35_1_32; bool x_35_1_33; } x35; }*)arg2 hdrControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19[9]; float x20[9]; unsigned int x21; float x22; unsigned int x23; float x24; bool x25; int x26; unsigned int x27; bool x28; }*)arg3;
- (void)setDisplayManagementParametricConfig:(struct ToneCurve_Control { double x1; double x2; double x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; double x11; bool x12; bool x13; float x14; bool x15; int x16; struct __CFString {} *x17; int x18; int x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; float x25; float x26; float x27; float x28; float x29; unsigned int x30; unsigned int x31 : 1; unsigned int x32 : 1; float x33; struct _AuxData { int x_34_1_1; int x_34_1_2; int x_34_1_3; float x_34_1_4; float x_34_1_5; float x_34_1_6; float x_34_1_7; int x_34_1_8; float x_34_1_9; float x_34_1_10; float x_34_1_11; bool x_34_1_12; } x34; struct _TMData { int x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; int x_35_1_5; float x_35_1_6; float x_35_1_7; float x_35_1_8; int x_35_1_9; float x_35_1_10; float x_35_1_11; float x_35_1_12; float x_35_1_13; float x_35_1_14; float x_35_1_15; float x_35_1_16; float x_35_1_17; float x_35_1_18; float x_35_1_19; float x_35_1_20; float x_35_1_21; float x_35_1_22; float x_35_1_23; float x_35_1_24; float x_35_1_25; int x_35_1_26; int x_35_1_27; float x_35_1_28; float x_35_1_29; struct _Percentiles_t { float x_30_2_1[8]; float x_30_2_2[8]; unsigned int x_30_2_3; } x_35_1_30; bool x_35_1_31; bool x_35_1_32; bool x_35_1_33; } x35; }*)arg1 HDRControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19[9]; float x20[9]; unsigned int x21; float x22; unsigned int x23; float x24; bool x25; int x26; unsigned int x27; bool x28; }*)arg2;
- (void)setDisplayManagementParametricConfigToneMap:(struct ToneCurve_Control { double x1; double x2; double x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; double x11; bool x12; bool x13; float x14; bool x15; int x16; struct __CFString {} *x17; int x18; int x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; float x25; float x26; float x27; float x28; float x29; unsigned int x30; unsigned int x31 : 1; unsigned int x32 : 1; float x33; struct _AuxData { int x_34_1_1; int x_34_1_2; int x_34_1_3; float x_34_1_4; float x_34_1_5; float x_34_1_6; float x_34_1_7; int x_34_1_8; float x_34_1_9; float x_34_1_10; float x_34_1_11; bool x_34_1_12; } x34; struct _TMData { int x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; int x_35_1_5; float x_35_1_6; float x_35_1_7; float x_35_1_8; int x_35_1_9; float x_35_1_10; float x_35_1_11; float x_35_1_12; float x_35_1_13; float x_35_1_14; float x_35_1_15; float x_35_1_16; float x_35_1_17; float x_35_1_18; float x_35_1_19; float x_35_1_20; float x_35_1_21; float x_35_1_22; float x_35_1_23; float x_35_1_24; float x_35_1_25; int x_35_1_26; int x_35_1_27; float x_35_1_28; float x_35_1_29; struct _Percentiles_t { float x_30_2_1[8]; float x_30_2_2[8]; unsigned int x_30_2_3; } x_35_1_30; bool x_35_1_31; bool x_35_1_32; bool x_35_1_33; } x35; }*)arg1 HDRControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19[9]; float x20[9]; unsigned int x21; float x22; unsigned int x23; float x24; bool x25; int x26; unsigned int x27; bool x28; }*)arg2;
- (void)setDisplayManagementParametricConfigToneMapBezier:(struct _ebzCurveParam { unsigned short x1; float x2[6]; float x3[6]; float x4[6]; unsigned short x5[5]; float x6[5][14]; float x7[6]; float x8[5][15]; float x9[5][15]; float x10[5][15]; }*)arg1 TMSendC:(float)arg2;
- (void)setDisplayManagementParametricConfigToneMapHDR10:(struct ToneCurve_Control { double x1; double x2; double x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; double x11; bool x12; bool x13; float x14; bool x15; int x16; struct __CFString {} *x17; int x18; int x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; float x25; float x26; float x27; float x28; float x29; unsigned int x30; unsigned int x31 : 1; unsigned int x32 : 1; float x33; struct _AuxData { int x_34_1_1; int x_34_1_2; int x_34_1_3; float x_34_1_4; float x_34_1_5; float x_34_1_6; float x_34_1_7; int x_34_1_8; float x_34_1_9; float x_34_1_10; float x_34_1_11; bool x_34_1_12; } x34; struct _TMData { int x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; int x_35_1_5; float x_35_1_6; float x_35_1_7; float x_35_1_8; int x_35_1_9; float x_35_1_10; float x_35_1_11; float x_35_1_12; float x_35_1_13; float x_35_1_14; float x_35_1_15; float x_35_1_16; float x_35_1_17; float x_35_1_18; float x_35_1_19; float x_35_1_20; float x_35_1_21; float x_35_1_22; float x_35_1_23; float x_35_1_24; float x_35_1_25; int x_35_1_26; int x_35_1_27; float x_35_1_28; float x_35_1_29; struct _Percentiles_t { float x_30_2_1[8]; float x_30_2_2[8]; unsigned int x_30_2_3; } x_35_1_30; bool x_35_1_31; bool x_35_1_32; bool x_35_1_33; } x35; }*)arg1 HDRControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19[9]; float x20[9]; unsigned int x21; float x22; unsigned int x23; float x24; bool x25; int x26; unsigned int x27; bool x28; }*)arg2;
- (void)setDisplayManagementParametricConfigToneMapHLG:(struct ToneCurve_Control { double x1; double x2; double x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; double x11; bool x12; bool x13; float x14; bool x15; int x16; struct __CFString {} *x17; int x18; int x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; float x25; float x26; float x27; float x28; float x29; unsigned int x30; unsigned int x31 : 1; unsigned int x32 : 1; float x33; struct _AuxData { int x_34_1_1; int x_34_1_2; int x_34_1_3; float x_34_1_4; float x_34_1_5; float x_34_1_6; float x_34_1_7; int x_34_1_8; float x_34_1_9; float x_34_1_10; float x_34_1_11; bool x_34_1_12; } x34; struct _TMData { int x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; int x_35_1_5; float x_35_1_6; float x_35_1_7; float x_35_1_8; int x_35_1_9; float x_35_1_10; float x_35_1_11; float x_35_1_12; float x_35_1_13; float x_35_1_14; float x_35_1_15; float x_35_1_16; float x_35_1_17; float x_35_1_18; float x_35_1_19; float x_35_1_20; float x_35_1_21; float x_35_1_22; float x_35_1_23; float x_35_1_24; float x_35_1_25; int x_35_1_26; int x_35_1_27; float x_35_1_28; float x_35_1_29; struct _Percentiles_t { float x_30_2_1[8]; float x_30_2_2[8]; unsigned int x_30_2_3; } x_35_1_30; bool x_35_1_31; bool x_35_1_32; bool x_35_1_33; } x35; }*)arg1 HDRControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19[9]; float x20[9]; unsigned int x21; float x22; unsigned int x23; float x24; bool x25; int x26; unsigned int x27; bool x28; }*)arg2;
- (void)setDisplayManagementParametricConfigToneMapSpline:(struct _splCurveParam { unsigned short x1; float x2[6]; float x3[6]; float x4[6]; float x5[5][4]; float x6[5][4]; float x7[2][2]; }*)arg1;
- (void)setupDISPHDRContext:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; float x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19[9]; float x20[9]; unsigned int x21; float x22; unsigned int x23; float x24; bool x25; int x26; unsigned int x27; bool x28; }*)arg1 TCControl:(struct ToneCurve_Control { double x1; double x2; double x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; double x11; bool x12; bool x13; float x14; bool x15; int x16; struct __CFString {} *x17; int x18; int x19; int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; float x25; float x26; float x27; float x28; float x29; unsigned int x30; unsigned int x31 : 1; unsigned int x32 : 1; float x33; struct _AuxData { int x_34_1_1; int x_34_1_2; int x_34_1_3; float x_34_1_4; float x_34_1_5; float x_34_1_6; float x_34_1_7; int x_34_1_8; float x_34_1_9; float x_34_1_10; float x_34_1_11; bool x_34_1_12; } x34; struct _TMData { int x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; int x_35_1_5; float x_35_1_6; float x_35_1_7; float x_35_1_8; int x_35_1_9; float x_35_1_10; float x_35_1_11; float x_35_1_12; float x_35_1_13; float x_35_1_14; float x_35_1_15; float x_35_1_16; float x_35_1_17; float x_35_1_18; float x_35_1_19; float x_35_1_20; float x_35_1_21; float x_35_1_22; float x_35_1_23; float x_35_1_24; float x_35_1_25; int x_35_1_26; int x_35_1_27; float x_35_1_28; float x_35_1_29; struct _Percentiles_t { float x_30_2_1[8]; float x_30_2_2[8]; unsigned int x_30_2_3; } x_35_1_30; bool x_35_1_31; bool x_35_1_32; bool x_35_1_33; } x35; }*)arg2 DMData:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5[9]; unsigned int x6[3]; int x7[9]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; struct { unsigned short x_22_1_1; unsigned short x_22_1_2; unsigned short x_22_1_3; unsigned short x_22_1_4; } x22; struct { unsigned short x_23_1_1; unsigned short x_23_1_2; unsigned short x_23_1_3; unsigned short x_23_1_4; unsigned short x_23_1_5; unsigned short x_23_1_6; unsigned short x_23_1_7; short x_23_1_8; } x23[8]; struct { unsigned short x_24_1_1; unsigned short x_24_1_2; unsigned short x_24_1_3; unsigned short x_24_1_4; } x24; struct { unsigned short x_25_1_1; unsigned short x_25_1_2; unsigned short x_25_1_3; } x25; struct { unsigned short x_26_1_1; unsigned short x_26_1_2; unsigned short x_26_1_3; unsigned short x_26_1_4; unsigned short x_26_1_5; } x26; }*)arg3 input:(struct __IOSurface { }*)arg4;

@end
