
@interface FPPreflightUserInteraction : NSObject {
    FPPreflightUserInteractionAlert * _alert;
    NSString * _domainIdentifier;
    bool  _hasSuppressionIdentifier;
    NSString * _helpURL;
    NSPredicate * _predicate;
    NSString * _providerIdentifier;
    NSArray * _subInteractions;
    NSString * _userInteractionIdentifier;
}

@property (nonatomic, retain) FPPreflightUserInteractionAlert *alert;
@property (nonatomic, retain) NSString *domainIdentifier;
@property (nonatomic) bool hasSuppressionIdentifier;
@property (nonatomic, retain) NSString *helpURL;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, retain) NSString *providerIdentifier;
@property (nonatomic, retain) NSArray *subInteractions;
@property (nonatomic, retain) NSString *userInteractionIdentifier;

+ (id)evaluationObjectsForAction:(id)arg1 sourceItems:(id)arg2 destinationItem:(id)arg3 domainUserInfo:(id)arg4 sourceItemKeysAllowList:(id)arg5 destinationItemKeysAllowList:(id)arg6;
+ (id)gatherErrorsForInteractions:(id)arg1 evaluationObjects:(id)arg2 suppressionDelegate:(id)arg3;
+ (id)interactionFromDictionary:(id)arg1 localizationLookup:(id)arg2 providerIdentifier:(id)arg3 domainIdentifier:(id)arg4;
+ (id)interactionsForArray:(id)arg1 localizationLookup:(id)arg2 providerIdentifier:(id)arg3 domainIdentifier:(id)arg4;
+ (id)interactionsForBundle:(id)arg1 providerIdentifier:(id)arg2 domainIdentifier:(id)arg3;
+ (id)interactionsForProviderItem:(id)arg1 error:(id*)arg2;
+ (void)propagateConfigurationKeysDownInteractionTreeWithObject:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)userInteractionErrorsInInfoPlistDict:(id)arg1 forAction:(id)arg2 bundleID:(id)arg3 hierarchyServicer:(id)arg4 sourceNSFPItems:(id)arg5 destinationNSFPItem:(id)arg6 localizationLookup:(id)arg7 provider:(id)arg8 domain:(id)arg9 extensionCapabilities:(unsigned long long)arg10 useFPFS:(bool)arg11;

- (void).cxx_destruct;
- (id)_evaluateWithObjectsByName:(id)arg1 sourceItems:(id)arg2 suppressionDelegate:(id)arg3 errorIndex:(unsigned long long*)arg4;
- (id)alert;
- (id)description;
- (id)domainIdentifier;
- (id)evaluateWithObjectsByName:(id)arg1 suppressionDelegate:(id)arg2;
- (bool)hasSuppressionIdentifier;
- (id)helpURL;
- (id)predicate;
- (id)providerIdentifier;
- (void)setAlert:(id)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setHasSuppressionIdentifier:(bool)arg1;
- (void)setHelpURL:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setProviderIdentifier:(id)arg1;
- (void)setSubInteractions:(id)arg1;
- (void)setUserInteractionIdentifier:(id)arg1;
- (id)subInteractions;
- (id)userInteractionIdentifier;

@end
