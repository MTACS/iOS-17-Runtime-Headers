
@interface HMDCloudPhotosSettingObserver : HMFObject <HMFLogging> {
    id /* block */  _accountFactory;
    bool  _cloudPhotosEnabled;
    NSNotificationCenter * _notificationCenter;
}

@property (readonly) id /* block */ accountFactory;
@property (getter=isCloudPhotosEnabled) bool cloudPhotosEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id /* block */)accountFactory;
- (bool)fetchCloudPhotosEnabled;
- (void)handleAccountStoreDidChangeNotification:(id)arg1;
- (id)init;
- (id)initWithAccountFactory:(id /* block */)arg1 notificationCenter:(id)arg2;
- (bool)isCloudPhotosEnabled;
- (id)notificationCenter;
- (void)setCloudPhotosEnabled:(bool)arg1;

@end
