
@interface PFLTaskStateUploading : NSObject <PFLTaskState> {
    long long  _diffCount;
    NSDictionary * _metrics;
    NSNumber * _numValidationSamples;
    NSData * _privatizedDiff;
}

@property (nonatomic, readonly) long long diffCount;
@property (nonatomic, readonly) NSDictionary *metrics;
@property (nonatomic, readonly) NSNumber *numValidationSamples;
@property (nonatomic, readonly) NSData *privatizedDiff;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)diffCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrivatizedDiff:(id)arg1 diffCount:(long long)arg2 metrics:(id)arg3 numValidationSamples:(id)arg4;
- (id)metrics;
- (id)numValidationSamples;
- (id)privatizedDiff;
- (void)resume:(id)arg1 completion:(id /* block */)arg2;
- (void)suspend;
- (unsigned long long)tag;

@end
