
@interface PTTimedStabilizationMetadataVersion1 : PTTimedStabilizationMetadata {
    void _estimatedMotionBlur;
    bool  _hasEstimatedMotionBlur;
    bool  _hasStabilizationHomography;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _stabilizationHomography;
}

@property (nonatomic) void estimatedMotionBlur;
@property (readonly) bool hasEstimatedMotionBlur;
@property (readonly) bool hasStabilizationHomography;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } stabilizationHomography;

- (void)estimatedMotionBlur;
- (bool)hasEstimatedMotionBlur;
- (bool)hasStabilizationHomography;
- (id)initWithData:(id)arg1 minorVersion:(unsigned int)arg2;
- (id)initWithMinorVersion:(unsigned int)arg1;
- (void)setEstimatedMotionBlur;
- (void)setStabilizationHomography:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })stabilizationHomography;
- (bool)writeToData:(id)arg1 withOptions:(id)arg2;

@end
