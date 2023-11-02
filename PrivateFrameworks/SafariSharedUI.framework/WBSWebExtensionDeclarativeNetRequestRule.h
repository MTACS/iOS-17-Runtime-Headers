
@interface WBSWebExtensionDeclarativeNetRequestRule : NSObject {
    NSDictionary * _action;
    NSDictionary * _condition;
    long long  _priority;
    long long  _ruleID;
}

@property (nonatomic, readonly, copy) NSDictionary *action;
@property (nonatomic, readonly, copy) NSDictionary *condition;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) long long ruleID;
@property (nonatomic, readonly) NSArray *ruleInWebKitFormat;

- (void).cxx_destruct;
- (id)_allChromeResourceTypes;
- (id)_chromeDomainTypeToWebKitDomainType;
- (id)_chromeResourceTypeToWebKitLoadContext;
- (id)_chromeResourceTypeToWebKitResourceType;
- (id)_convertedResourceTypesForChromeResourceTypes:(id)arg1;
- (id)_convertedRulesForWebKitActionType:(id)arg1 chromeActionType:(id)arg2;
- (id)_regexURLFilterForChromeURLFilter:(id)arg1;
- (id)_resourcesToTargetWhenNoneAreSpecifiedInRule;
- (id)_validateHeaderInfoDictionary:(id)arg1;
- (id)_webKitRuleWithWebKitActionType:(id)arg1 chromeActionType:(id)arg2 chromeResourceTypes:(id)arg3;
- (id)action;
- (long long)compare:(id)arg1;
- (id)condition;
- (id)description;
- (id)initWithDictionary:(id)arg1 errorString:(id*)arg2;
- (long long)priority;
- (void)removeInvalidResourceTypesForKey:(id)arg1;
- (long long)ruleID;
- (id)ruleInWebKitFormat;

@end
