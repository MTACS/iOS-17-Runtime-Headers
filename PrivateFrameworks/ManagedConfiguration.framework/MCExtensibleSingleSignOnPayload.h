
@interface MCExtensibleSingleSignOnPayload : MCPayload {
    NSArray * _esso_URLs;
    NSArray * _esso_deniedBundleIdentifiers;
    NSDictionary * _esso_extensionData;
    NSString * _esso_extensionIdentifier;
    NSArray * _esso_hosts;
    NSString * _esso_realm;
    NSString * _esso_screenLockedBehavior;
    NSString * _esso_teamIdentifier;
    NSString * _esso_type;
}

@property (nonatomic, retain) NSArray *esso_URLs;
@property (nonatomic, retain) NSArray *esso_deniedBundleIdentifiers;
@property (nonatomic, retain) NSDictionary *esso_extensionData;
@property (nonatomic, retain) NSString *esso_extensionIdentifier;
@property (nonatomic, retain) NSArray *esso_hosts;
@property (nonatomic, retain) NSString *esso_realm;
@property (nonatomic, retain) NSString *esso_screenLockedBehavior;
@property (nonatomic, retain) NSString *esso_teamIdentifier;
@property (nonatomic, retain) NSString *esso_type;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (bool)_validateHost:(id)arg1 outError:(id*)arg2;
- (id)_validateURLString:(id)arg1 outError:(id*)arg2;
- (id)esso_URLs;
- (id)esso_deniedBundleIdentifiers;
- (id)esso_extensionData;
- (id)esso_extensionIdentifier;
- (id)esso_hosts;
- (id)esso_realm;
- (id)esso_screenLockedBehavior;
- (id)esso_teamIdentifier;
- (id)esso_type;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)payloadDescriptionKeyValueSections;
- (void)setEsso_URLs:(id)arg1;
- (void)setEsso_deniedBundleIdentifiers:(id)arg1;
- (void)setEsso_extensionData:(id)arg1;
- (void)setEsso_extensionIdentifier:(id)arg1;
- (void)setEsso_hosts:(id)arg1;
- (void)setEsso_realm:(id)arg1;
- (void)setEsso_screenLockedBehavior:(id)arg1;
- (void)setEsso_teamIdentifier:(id)arg1;
- (void)setEsso_type:(id)arg1;
- (id)stubDictionary;
- (id)title;
- (id)verboseDescription;

@end
