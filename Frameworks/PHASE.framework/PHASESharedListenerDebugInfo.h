
@interface PHASESharedListenerDebugInfo : PHASESharedEntityDebugInfo {
    float  _gain;
}

@property (nonatomic, readonly) float gain;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (float)gain;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setGain:(float)arg1;

@end
