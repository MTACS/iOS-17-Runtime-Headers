
@interface SFSearchResult_Compatibility : SFSearchResult_SpotlightExtras

@property (nonatomic, retain) NSString *compatibilityTitle;
@property (nonatomic, retain) NSString *externalIdentifier;
@property (nonatomic, retain) NSString *resultIdentifier;

- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)compatibilityTitle;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)externalIdentifier;
- (bool)isQuickGlance;
- (id)resultIdentifier;
- (id)section_header;
- (void)setCompatibilityTitle:(id)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setResultIdentifier:(id)arg1;
- (void)setSimpleTitle:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)simpleTitle;
- (id)uniqueIdentifier;
- (void)writeTo:(id)arg1;

@end
