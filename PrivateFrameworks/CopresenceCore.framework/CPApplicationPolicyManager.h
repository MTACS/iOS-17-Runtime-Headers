
@interface CPApplicationPolicyManager : NSObject <CPApplicationPolicyManager> {
    void config;
    void contactStore;
    void contactsDataSourceCreationBlock;
    void delegates;
    void featureFlags;
    void lock;
    void queue;
    void storage;
}

@property (nonatomic, readonly) NSDictionary *authorizedBundleIdentifiers;
@property (nonatomic, readonly) bool autoLaunchEnabled;
@property (nonatomic) bool autoSharePlayEnabled;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 withQueue:(id)arg2;
- (id)authorizedBundleIdentifiers;
- (bool)autoLaunchEnabled;
- (bool)autoSharePlayEnabled;
- (void)dealloc;
- (void)handleApplicationUninstalledNotification:(id)arg1;
- (void)handleCNContactStoreDidChangeNotification:(id)arg1;
- (id)init;
- (void)setAuthorization:(bool)arg1 forBundleID:(id)arg2;
- (void)setAutoSharePlayEnabled:(bool)arg1;
- (bool)shouldAutoLaunchAppForActivity:(id)arg1 onConversation:(id)arg2;
- (void)updateAllowedHandlesForConversation:(id)arg1;

@end
