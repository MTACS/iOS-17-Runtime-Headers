
@interface PSGQuickResponsesEngagementMetrics : NSObject <NSSecureCoding> {
    NSMutableArray * _engagementDeltas;
    NSString * _experimentId;
    NSString * _factorPackId;
    NSString * _lang;
    NSString * _rolloutId;
    NSString * _treatmentId;
}

@property (nonatomic, readonly) NSMutableArray *engagementDeltas;
@property (nonatomic, readonly) NSString *experimentId;
@property (nonatomic, readonly) NSString *factorPackId;
@property (nonatomic, readonly) NSString *lang;
@property (nonatomic, readonly) NSString *rolloutId;
@property (nonatomic, readonly) NSString *treatmentId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)engagementDeltas;
- (id)experimentId;
- (id)factorPackId;
- (id)initWithCoder:(id)arg1;
- (id)initWithLang:(id)arg1 rolloutId:(id)arg2 factorPackId:(id)arg3 experimentId:(id)arg4 treatmentId:(id)arg5;
- (id)initWithLang:(id)arg1 rolloutId:(id)arg2 factorPackId:(id)arg3 experimentId:(id)arg4 treatmentId:(id)arg5 engagementDeltas:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToQuickResponsesEngagementMetrics:(id)arg1;
- (id)lang;
- (id)rolloutId;
- (id)treatmentId;

@end
