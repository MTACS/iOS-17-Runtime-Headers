
@interface ARODTResult : NSObject {
    unsigned long long  _detectedObjectID;
    double  _estimatedScaleFactor;
    void * _imageContext;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _visionTransform;
}

@property (nonatomic) unsigned long long detectedObjectID;
@property (nonatomic) double estimatedScaleFactor;
@property (nonatomic) void*imageContext;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } visionTransform;

- (unsigned long long)detectedObjectID;
- (double)estimatedScaleFactor;
- (void*)imageContext;
- (void)setDetectedObjectID:(unsigned long long)arg1;
- (void)setEstimatedScaleFactor:(double)arg1;
- (void)setImageContext:(void*)arg1;
- (void)setVisionTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })visionTransform;

@end
