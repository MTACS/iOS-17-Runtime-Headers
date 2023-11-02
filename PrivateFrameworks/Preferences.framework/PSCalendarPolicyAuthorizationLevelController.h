
@interface PSCalendarPolicyAuthorizationLevelController : PSListItemsController {
    NSString * _clientIdentifier;
    NSString * _displayName;
    NSString * _serviceKey;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *serviceKey;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (void)_handleUpgradePromptNotification:(id)arg1;
- (id)displayName;
- (id)footerStringForSpecifiers:(id)arg1;
- (id)serviceKey;
- (void)setDisplayName:(id)arg1;
- (void)setServiceKey:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (id)specifiers;
- (void)viewDidLoad;

@end
