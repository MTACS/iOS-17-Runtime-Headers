
@interface AR3DSkeletonDetectionResults : NSObject <ARResultData, NSCopying> {
    NSArray * _detectedSkeletons;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *detectedSkeletons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detectedSkeletons;
- (void)setDetectedSkeletons:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
