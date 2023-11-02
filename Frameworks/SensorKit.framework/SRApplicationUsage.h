
@interface SRApplicationUsage : NSObject <NSSecureCoding, SRSampleExporting> {
    NSString * _bundleIdentifier;
    NSMutableArray * _mutableSupplementalCategories;
    NSMutableArray * _mutableTextInputSessions;
    double  _relativeStartTime;
    NSString * _reportApplicationIdentifier;
    double  _usageTime;
}

@property (copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableArray *mutableSupplementalCategories;
@property (retain) NSMutableArray *mutableTextInputSessions;
@property (nonatomic) double relativeStartTime;
@property (copy) NSString *reportApplicationIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *supplementalCategories;
@property (readonly, copy) NSArray *textInputSessions;
@property double usageTime;

+ (id)applicationUsageWithBundleIdentifier:(id)arg1 reportApplicationIdentifier:(id)arg2 totalUsageTime:(double)arg3 relativeStartTime:(double)arg4;
+ (bool)supportsSecureCoding;

- (id)bundleIdentifier;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableSupplementalCategories;
- (id)mutableTextInputSessions;
- (double)relativeStartTime;
- (id)reportApplicationIdentifier;
- (void)setBundleIdentifier:(id)arg1;
- (void)setMutableSupplementalCategories:(id)arg1;
- (void)setMutableTextInputSessions:(id)arg1;
- (void)setRelativeStartTime:(double)arg1;
- (void)setReportApplicationIdentifier:(id)arg1;
- (void)setUsageTime:(double)arg1;
- (id)sr_dictionaryRepresentation;
- (id)supplementalCategories;
- (id)textInputSessions;
- (double)usageTime;

@end
