
@interface PKPassSectionDetailDrillInField : PKPassField {
    long long  _authRequirement;
    NSString * _localizedTitle;
    NSArray * _sectionIdentifiers;
}

@property (nonatomic) long long authRequirement;
@property (nonatomic, retain) NSString *localizedTitle;
@property (nonatomic, retain) NSArray *sectionIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asDictionary;
- (long long)authRequirement;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDrillInField;
- (id)localizedTitle;
- (id)sectionIdentifiers;
- (void)setAuthRequirement:(long long)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setSectionIdentifiers:(id)arg1;

@end
