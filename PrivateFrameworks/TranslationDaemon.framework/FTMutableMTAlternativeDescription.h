
@interface FTMutableMTAlternativeDescription : FTMTAlternativeDescription

@property (nonatomic) long long alternative_type;
@property (nonatomic, copy) FTMTAlternativeDescription_MTGenderDescription *gender_description;
@property (nonatomic, copy) FTMTAlternativeDescription_MTMeaningDescription *meaning_description;

- (long long)alternative_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)gender_description;
- (id)init;
- (id)meaning_description;
- (void)setAlternative_type:(long long)arg1;
- (void)setGender_description:(id)arg1;
- (void)setMeaning_description:(id)arg1;

@end
