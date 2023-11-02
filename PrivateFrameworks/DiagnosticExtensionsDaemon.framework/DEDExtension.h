
@interface DEDExtension : NSObject <DEDSecureArchiving, NSCopying> {
    DEDExtensionIdentifier * _dedExtensionIdentifier;
    NSString * _identifier;
    NSString * _localizedConsentText;
    NSString * _localizedDataCollectedExplanation;
    NSString * _localizedDataCollectedSummary;
    NSString * _name;
    bool  _requiresDataClassBAccessToRun;
}

@property (readonly, copy) NSString *debugDescription;
@property (retain) DEDExtensionIdentifier *dedExtensionIdentifier;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *identifier;
@property (retain) NSString *localizedConsentText;
@property (retain) NSString *localizedDataCollectedExplanation;
@property (retain) NSString *localizedDataCollectedSummary;
@property (retain) NSString *name;
@property (nonatomic) bool requiresDataClassBAccessToRun;
@property (readonly) Class superclass;

+ (id)archivedClasses;
+ (id)extensionWithDEExtension:(id)arg1;
+ (id)extensionWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dedExtensionIdentifier;
- (id)description;
- (id)identifier;
- (id)localizedConsentText;
- (id)localizedDataCollectedExplanation;
- (id)localizedDataCollectedSummary;
- (id)name;
- (bool)requiresDataClassBAccessToRun;
- (id)serialize;
- (void)setDedExtensionIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedConsentText:(id)arg1;
- (void)setLocalizedDataCollectedExplanation:(id)arg1;
- (void)setLocalizedDataCollectedSummary:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRequiresDataClassBAccessToRun:(bool)arg1;

@end
