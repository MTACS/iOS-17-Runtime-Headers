
@interface AR3DSkeletonRegistrationData : NSObject <ARResultData, NSCopying> {
    float  _estimatedScaleFactor;
    double  _timestamp;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _visionTransform;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float estimatedScaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } visionTransform;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)estimatedScaleFactor;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setEstimatedScaleFactor:(float)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVisionTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (double)timestamp;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })visionTransform;

@end
