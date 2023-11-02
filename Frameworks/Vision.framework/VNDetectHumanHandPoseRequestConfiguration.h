
@interface VNDetectHumanHandPoseRequestConfiguration : VNImageBasedRequestConfiguration {
    unsigned long long  _maximumHandCount;
}

@property unsigned long long maximumHandCount;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestClass:(Class)arg1;
- (unsigned long long)maximumHandCount;
- (void)setMaximumHandCount:(unsigned long long)arg1;

@end
