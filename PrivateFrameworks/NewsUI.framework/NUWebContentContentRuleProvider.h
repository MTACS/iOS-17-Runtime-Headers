
@interface NUWebContentContentRuleProvider : NSObject <SXWebContentComponentContentRuleProvider> {
    <FCNewsAppConfigurationManager> * _appConfigurationManager;
    <FCHeadlineProviding> * _headline;
}

@property (nonatomic, readonly) <FCNewsAppConfigurationManager> *appConfigurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FCHeadlineProviding> *headline;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appConfigurationManager;
- (id)contentRules;
- (id)headline;
- (id)initWithAppConfigurationManager:(id)arg1 headline:(id)arg2;

@end
