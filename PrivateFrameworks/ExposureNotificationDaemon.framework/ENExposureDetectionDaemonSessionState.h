
@interface ENExposureDetectionDaemonSessionState : NSObject <NSSecureCoding> {
    NSString * _clientSigningIdentity;
    NSDictionary * _infectiousnessForDaysSinceOnsetOfSymptoms;
    NSDate * _infectiousnessForDaysSinceOnsetOfSymptomsChangeDate;
    ENRegion * _region;
}

@property (nonatomic, copy) NSString *clientSigningIdentity;
@property (nonatomic, copy) NSDictionary *infectiousnessForDaysSinceOnsetOfSymptoms;
@property (nonatomic, copy) NSDate *infectiousnessForDaysSinceOnsetOfSymptomsChangeDate;
@property (nonatomic, copy) ENRegion *region;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientSigningIdentity;
- (void)encodeWithCoder:(id)arg1;
- (id)infectiousnessForDaysSinceOnsetOfSymptoms;
- (id)infectiousnessForDaysSinceOnsetOfSymptomsChangeDate;
- (id)initWithCoder:(id)arg1;
- (id)region;
- (void)setClientSigningIdentity:(id)arg1;
- (void)setInfectiousnessForDaysSinceOnsetOfSymptoms:(id)arg1;
- (void)setInfectiousnessForDaysSinceOnsetOfSymptomsChangeDate:(id)arg1;
- (void)setRegion:(id)arg1;

@end
