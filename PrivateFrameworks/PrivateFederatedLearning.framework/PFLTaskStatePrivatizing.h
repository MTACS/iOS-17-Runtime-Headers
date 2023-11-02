
@interface PFLTaskStatePrivatizing : NSObject <PFLTaskState> {
    NSData * _diff;
    NSDictionary * _metrics;
    NSNumber * _numValidationSamples;
}

@property (nonatomic, readonly) NSData *diff;
@property (nonatomic, readonly) NSDictionary *metrics;
@property (nonatomic, readonly) NSNumber *numValidationSamples;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)diff;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGradientDiff:(id)arg1 metrics:(id)arg2 numValidationSamples:(id)arg3;
- (id)metrics;
- (id)numValidationSamples;
- (void)resume:(id)arg1 completion:(id /* block */)arg2;
- (void)suspend;
- (unsigned long long)tag;

@end
