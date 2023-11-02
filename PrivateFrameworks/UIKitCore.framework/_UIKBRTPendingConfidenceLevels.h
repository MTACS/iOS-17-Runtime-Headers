
@interface _UIKBRTPendingConfidenceLevels : _UIKBRTConfidenceLevels {
    float  _confidenceCheckTimeout;
}

@property (nonatomic) float confidenceCheckTimeout;

- (float)confidenceCheckTimeout;
- (void)setConfidenceCheckTimeout:(float)arg1;

@end
