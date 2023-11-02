
@interface HKAuthorizationPresentationRequest : NSObject <NSSecureCoding> {
    bool  _dismissWhenBackgrounded;
    NSString * _readUsageDescription;
    NSString * _researchStudyUsageDescription;
    NSString * _shareUsageDescription;
    long long  _type;
    NSSet * _typesRequiringReadAuthorization;
    NSSet * _typesRequiringShareAuthorization;
}

@property (getter=shouldDismissWhenBackgrounded, nonatomic) bool dismissWhenBackgrounded;
@property (nonatomic, copy) NSString *readUsageDescription;
@property (nonatomic, copy) NSString *researchStudyUsageDescription;
@property (nonatomic, copy) NSString *shareUsageDescription;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSSet *typesRequiringReadAuthorization;
@property (nonatomic, copy) NSSet *typesRequiringShareAuthorization;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)readUsageDescription;
- (id)researchStudyUsageDescription;
- (void)setDismissWhenBackgrounded:(bool)arg1;
- (void)setReadUsageDescription:(id)arg1;
- (void)setResearchStudyUsageDescription:(id)arg1;
- (void)setShareUsageDescription:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setTypesRequiringReadAuthorization:(id)arg1;
- (void)setTypesRequiringShareAuthorization:(id)arg1;
- (id)shareUsageDescription;
- (bool)shouldDismissWhenBackgrounded;
- (long long)type;
- (id)typesRequiringReadAuthorization;
- (id)typesRequiringShareAuthorization;

@end
