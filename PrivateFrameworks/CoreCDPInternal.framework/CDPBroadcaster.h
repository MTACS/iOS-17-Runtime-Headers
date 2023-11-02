
@interface CDPBroadcaster : NSObject {
    NSDistributedNotificationCenter * _broadcaster;
}

@property (nonatomic, readonly) NSDistributedNotificationCenter *broadcaster;

+ (void)_broadcastNotificationName:(id)arg1 userInfo:(id)arg2;
+ (void)broadcastWalrusStateChangeNotification;
+ (void)broadcastWebAccessStateChangeNotification;

- (void).cxx_destruct;
- (id)broadcaster;
- (id)init;
- (void)sendNotification:(id)arg1 userInfo:(id)arg2;

@end
