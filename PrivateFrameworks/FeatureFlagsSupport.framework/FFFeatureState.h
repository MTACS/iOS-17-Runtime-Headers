
@interface FFFeatureState : NSObject <NSCopying> {
    NSDictionary * _attributes;
    NSString * _disclosurerequired;
    NSString * _domain;
    NSString * _feature;
    NSString * _phase;
    long long  _value;
}

@property (nonatomic, retain) NSDictionary *attributes;
@property (nonatomic, retain) NSString *disclosurerequired;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, retain) NSString *feature;
@property (nonatomic, retain) NSString *phase;
@property (nonatomic) long long value;

- (void).cxx_destruct;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)disclosurerequired;
- (id)domain;
- (id)feature;
- (id)initWithDomain:(id)arg1 feature:(id)arg2 value:(long long)arg3;
- (id)initWithDomain:(id)arg1 feature:(id)arg2 value:(long long)arg3 phase:(id)arg4 disclosureRequired:(id)arg5 attributes:(id)arg6;
- (id)phase;
- (void)setAttributes:(id)arg1;
- (void)setDisclosurerequired:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setFeature:(id)arg1;
- (void)setPhase:(id)arg1;
- (void)setValue:(long long)arg1;
- (long long)value;

@end
