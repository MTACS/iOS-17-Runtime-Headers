
@interface BRCTrialConfiguration : NSObject {
    bool  ciconiaGatedForFPFSMigration;
    bool  enabledForFPFSMigration;
    NSString * factorPackId;
    bool  ignorePercentsOnInternal;
    long long  maxFailurePerVersion;
    long long  percent100kAndAbove;
    long long  percentBelow100k;
    long long  percentBelow10k;
    long long  percentBelow1k;
    NSString * rampId;
    NSString * rolloutId;
}

@property (nonatomic, readonly) bool ciconiaGatedForFPFSMigration;
@property (nonatomic, readonly) bool enabledForFPFSMigration;
@property (nonatomic, readonly) NSString *factorPackId;
@property (nonatomic, readonly) bool ignorePercentsOnInternal;
@property (nonatomic, readonly) long long maxFailurePerVersion;
@property (nonatomic, readonly) long long percent100kAndAbove;
@property (nonatomic, readonly) long long percentBelow100k;
@property (nonatomic, readonly) long long percentBelow10k;
@property (nonatomic, readonly) long long percentBelow1k;
@property (nonatomic, readonly) NSString *rampId;
@property (nonatomic, readonly) NSString *rolloutId;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (bool)boolForFactor:(id)arg1 client:(id)arg2 namespace:(id)arg3 byDefault:(bool)arg4;
- (bool)ciconiaGatedForFPFSMigration;
- (bool)enabledForFPFSMigration;
- (id)factorPackId;
- (bool)ignorePercentsOnInternal;
- (id)init;
- (long long)longLongForFactor:(id)arg1 client:(id)arg2 namespace:(id)arg3 min:(long long)arg4 max:(long long)arg5 byDefault:(long long)arg6;
- (long long)maxFailurePerVersion;
- (long long)percent100kAndAbove;
- (long long)percentBelow100k;
- (long long)percentBelow10k;
- (long long)percentBelow1k;
- (id)rampId;
- (void)refresh;
- (id)rolloutId;

@end
