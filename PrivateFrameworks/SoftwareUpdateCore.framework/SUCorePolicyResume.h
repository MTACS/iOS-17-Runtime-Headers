
@interface SUCorePolicyResume : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _additionalOptions;
    NSDictionary * _baseResumeOptions;
    bool  _skipPhase;
    long long  _specifiedFields;
}

@property (nonatomic, retain) NSDictionary *additionalOptions;
@property (nonatomic, retain) NSDictionary *baseResumeOptions;
@property (nonatomic) bool skipPhase;
@property long long specifiedFields;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalOptions;
- (void)backToDefaultsWithSkipPhaseSet:(bool)arg1;
- (id)baseResumeOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSkipPhaseSet:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAdditionalOptions:(id)arg1;
- (void)setBaseResumeOptions:(id)arg1;
- (void)setSkipPhase:(bool)arg1;
- (void)setSpecifiedFields:(long long)arg1;
- (bool)skipPhase;
- (long long)specifiedFields;
- (id)summary;

@end
