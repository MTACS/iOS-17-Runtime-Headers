
@interface PAEKeyerAutokeySetup : NSObject <NSSecureCoding> {
    NSMutableArray * _initialSamples;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initialSamples;
- (id)interpolateBetween:(id)arg1 withWeight:(float)arg2;
- (void)setInitialSamples:(id)arg1;

@end
