
@interface WFContentItemPrivacyConfiguration : NSObject {
    unsigned long long  _disclosureLevel;
    NSOrderedSet * _disclosureWarnings;
    WFContentLocation * _origin;
}

@property (nonatomic) unsigned long long disclosureLevel;
@property (nonatomic, readonly) NSOrderedSet *disclosureWarnings;
@property (nonatomic, readonly) WFContentLocation *origin;

+ (id)configurationWithOrigin:(id)arg1 disclosureLevel:(unsigned long long)arg2;
+ (id)configurationWithOrigin:(id)arg1 disclosureLevel:(unsigned long long)arg2 disclosureWarnings:(id)arg3;

- (void).cxx_destruct;
- (unsigned long long)disclosureLevel;
- (id)disclosureWarnings;
- (id)initWithOrigin:(id)arg1 disclosureLevel:(unsigned long long)arg2 disclosureWarnings:(id)arg3;
- (id)origin;
- (void)setDisclosureLevel:(unsigned long long)arg1;

@end
