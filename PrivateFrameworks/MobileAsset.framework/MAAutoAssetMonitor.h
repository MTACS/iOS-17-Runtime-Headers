
@interface MAAutoAssetMonitor : NSObject <NSSecureCoding> {
    MAAutoAssetSelector * _assetSelector;
    NSString * _autoAssetClientName;
    NSObject<OS_dispatch_queue> * _notificationDispatchQueue;
    id /* block */  _statusChangeNotificationBlock;
}

@property (nonatomic, readonly, retain) MAAutoAssetSelector *assetSelector;
@property (nonatomic, readonly, retain) NSString *autoAssetClientName;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationDispatchQueue;
@property (nonatomic, copy) id /* block */ statusChangeNotificationBlock;

+ (id)defaultDispatchQueue;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetSelector;
- (id)autoAssetClientName;
- (void)cancelRegistration:(id /* block */)arg1;
- (id)cancelRegistrationSync;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initForClientName:(id)arg1 forAssetSelector:(id)arg2 error:(id*)arg3 notifyingStatusChanges:(id /* block */)arg4;
- (id)initForClientName:(id)arg1 forAssetSelector:(id)arg2 notifyingFromQueue:(id)arg3 error:(id*)arg4 notifyingStatusChanges:(id /* block */)arg5;
- (id)initWithCoder:(id)arg1;
- (id)notificationDispatchQueue;
- (void)registerForNotifications:(id /* block */)arg1;
- (void)registerForNotifications:(id)arg1 completion:(id /* block */)arg2;
- (id)registerForNotificationsSync;
- (id)registerForNotificationsSync:(id)arg1;
- (void)setStatusChangeNotificationBlock:(id /* block */)arg1;
- (id /* block */)statusChangeNotificationBlock;
- (id)summary;

@end
