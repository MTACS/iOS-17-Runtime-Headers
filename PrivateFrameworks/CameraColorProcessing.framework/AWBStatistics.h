
@interface AWBStatistics : NSObject {
    struct { 
        int layout; 
        unsigned char firstPix; 
        unsigned char greenAverage; 
        unsigned char downsizeRatio; 
        float ispDGain; 
        struct { 
            struct { 
                /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
                void*gammaOffsetIn; 
            } coeff; 
        } ccm; 
        struct { 
            struct { 
                struct { 
                    void*columns[3]; 
                } coeff; 
                void*min; 
            } lin3x3; 
            void*scale; 
            struct { 
                bool enable; 
                bool countClipEn; 
                unsigned short startX; 
                unsigned short startY; 
                unsigned short endX; 
                unsigned short endY; 
                float offsetC1; 
                float offsetC2; 
                float scaleC1; 
                float scaleC2; 
                unsigned short count[16]; 
                unsigned short yThd[16]; 
                void*debiasGain; 
            } colorHist; 
            struct { 
                unsigned char condSel; 
                unsigned char statSel; 
                bool countClipEn; 
                int Ymin; 
                int Ymax; 
                int C1min; 
                int C1max; 
                int C2min; 
                int C2max; 
                unsigned int distMax; 
                int offset; 
                int C1delta; 
                int C2delta; 
            } pixFilt[2]; 
            struct { 
                void*offset; 
            } debiasCfg[2]; 
            struct AWBFastLSCConfig { 
                bool enabled; 
                unsigned short gridWidth; 
                unsigned short gridHeight; 
                float gridMaxGain; 
                float modulationWeight; 
                void*gridIntervalReciprocal; 
            } fastLSCCfg; 
        } csc; 
        struct { 
            bool enable; 
            bool bitDepth; 
            int pfSel[2]; 
            int startX; 
            int startY; 
            int endX; 
            int endY; 
        } windows[2]; 
        struct { 
            bool bitDepth; 
            int startX; 
            int startY; 
            int endX; 
            int endY; 
            unsigned short horzInt; 
            unsigned short vertInt; 
        } tiles; 
        bool skipDemosaic; 
        int digitalFlashBehaviorMode; 
    }  _awbStatCfg;
    <MTLComputePipelineState> * _computeAWBStatBayerFastPipelineState;
    <MTLComputePipelineState> * _computeAWBStatBayerPipelineState;
    <MTLComputePipelineState> * _computeAWBStatQuadraFastPipelineState;
    <MTLComputePipelineState> * _computeAWBStatRGBPipelineState;
    NSNumber * _digitalFlash;
    NSNumber * _lscMaxGain;
    FigMetalContext * _metalContext;
    <MTLComputePipelineState> * _normTileStatPipelineState;
    <MTLComputePipelineState> * _normWindowStatPipelineState;
    <MTLComputePipelineState> * _resetMtlBufferPipelineState;
    <MTLComputePipelineState> * _resizeANST;
    NSNumber * _skipDemosaic;
}

@property (nonatomic, retain) NSNumber *digitalFlash;
@property (nonatomic, retain) NSNumber *lscMaxGain;
@property (nonatomic, retain) NSNumber *skipDemosaic;

- (void).cxx_destruct;
- (int)_adjustConfigToValidRect:(id)arg1;
- (int)_createShaders;
- (int)configWindowsV2:(struct { bool x1; bool x2; int x3[2]; int x4; int x5; int x6; int x7; }*)arg1 metadata:(id)arg2 tilesConfig:(id)arg3;
- (int)configWithMetadata:(id)arg1 cameraInfo:(id)arg2 moduleConfig:(id)arg3 firstPixel:(int)arg4 layout:(int)arg5;
- (int)configWithRegs:(id)arg1;
- (int)configWithRegs:(id)arg1 metadata:(id)arg2 cameraInfo:(id)arg3;
- (int)configWithSetFile:(id)arg1 metadata:(id)arg2 cameraInfo:(id)arg3;
- (id)digitalFlash;
- (id)initWithMetalContext:(id)arg1;
- (id)lscMaxGain;
- (int)process:(id)arg1 clipped:(id)arg2 lscGainsTex:(id)arg3 validRect:(id)arg4 awbStatsBuffer:(id)arg5 awbTileStatsConfig:(struct { bool x1; int x2; int x3; int x4; int x5; unsigned short x6; unsigned short x7; }*)arg6 anstSkinMask:(id)arg7 anstSkinMaskData:(id*)arg8 downsizeFactor:(unsigned int*)arg9;
- (void)setDigitalFlash:(id)arg1;
- (void)setLscMaxGain:(id)arg1;
- (void)setSkipDemosaic:(id)arg1;
- (id)skipDemosaic;

@end
