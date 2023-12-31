
@interface NullCodecConfiguration : AUPasscodeCodecConfiguration <NSSecureCoding> {
    float  _retrievalCallbackInterval;
}

@property (nonatomic) float retrievalCallbackInterval;

+ (bool)supportsSecureCoding;

- (id)commandLineOptions;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommandLineArgs:(id)arg1;
- (float)retrievalCallbackInterval;
- (void)setDefaultValues;
- (void)setRetrievalCallbackInterval:(float)arg1;

@end
