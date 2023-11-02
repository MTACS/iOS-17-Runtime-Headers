
@interface BCSChatSuggestController : NSObject <BCSChatSuggestControllerProtocol> {
    <BCSIdentityServiceProtocol> * _identityService;
    <BCSLocaleHelperProtocol> * _localeHelper;
    <BCSUserDefaultsProviding> * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)chatSuggestVisibilityForBusinessItem:(id)arg1;

@end
