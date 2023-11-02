
@interface PanoramaGyroStage : NSObject <ImageBufferProcessor> {
    double  _curTime;
    float  _focalLength;
    bool  _isGyroDataValid;
    bool  _isTranslationValid;
    int  _motionSource;
    void _rotation;
    float  _sliceHeight;
    float  _sliceWidth;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _transformMatrix;
    void _translation;
    void _translationRate;
    void _txty;
    NSDictionary * cameraInfoByPortType;
    NSDictionary * tuningParameters;
}

@property (nonatomic, retain) NSDictionary *cameraInfoByPortType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *tuningParameters;

- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })ISPMotionToHomography;
- (id)cameraInfoByPortType;
- (int)finishProcessing;
- (id)init;
- (int)prepareToProcess:(unsigned int)arg1;
- (int)prewarm;
- (int)process;
- (int)purgeResources;
- (int)resetState;
- (void)setCameraInfoByPortType:(id)arg1;
- (void)setTuningParameters:(id)arg1;
- (int)setup;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })toHomography;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })transformToHomography;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })translationToHomography;
- (id)tuningParameters;
- (int)update:(id)arg1 sliceType:(int)arg2 sliceWidth:(float)arg3 sliceHeight:(float)arg4 sliceID:(int)arg5;
- (int)updateWithDebugISPMedian:(struct { unsigned int x1; unsigned int x2; struct { unsigned long long x_3_1_1; unsigned long long x_3_1_2; unsigned short x_3_1_3; union { unsigned char x_4_2_1[64]; struct { unsigned short x_2_3_1; unsigned short x_2_3_2; int x_2_3_3; int x_2_3_4; int x_2_3_5; int x_2_3_6; int x_2_3_7; int x_2_3_8; int x_2_3_9; int x_2_3_10; int x_2_3_11; int x_2_3_12; } x_4_2_2; struct { unsigned short x_3_3_1; unsigned short x_3_3_2; int x_3_3_3; int x_3_3_4; int x_3_3_5; int x_3_3_6; int x_3_3_7; int x_3_3_8; int x_3_3_9; int x_3_3_10; int x_3_3_11; int x_3_3_12; int x_3_3_13; int x_3_3_14; int x_3_3_15; int x_3_3_16; unsigned short x_3_3_17; unsigned short x_3_3_18; int x_3_3_19; int x_3_3_20; int x_3_3_21; int x_3_3_22; } x_4_2_3; } x_3_1_4; } x3[0]; }*)arg1;
- (int)updateWithTransformMatrix:(float*)arg1 sliceType:(int)arg2;
- (int)updateWithTranslation:(float*)arg1 sliceType:(int)arg2;

@end
