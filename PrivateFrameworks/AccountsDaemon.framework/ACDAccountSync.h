
@interface ACDAccountSync : NSObject {
    int  _circleToken;
    bool  _duchessEnabled;
    bool  _enabled;
    int  _keychainToken;
    ACAccountStore * _store;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSTimer * _timer;
}

+ (id)accountSyncPropertiesForAccount:(id)arg1;
+ (id)accountSyncSupportedTypes;
+ (id)accountSyncUnsupportedTypes;
+ (id)sharedAccountSyncServer;

- (void).cxx_destruct;
- (bool)checkCircleState;
- (void)dealloc;
- (id)init;
- (void)setupAccountSync;

@end
