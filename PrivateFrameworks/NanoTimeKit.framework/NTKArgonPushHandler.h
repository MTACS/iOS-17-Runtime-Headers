
@interface NTKArgonPushHandler : NSObject <NTKArgonPushProviding> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    CKDatabase * _database;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) CKDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)callbackQueue;
- (id)database;
- (void)handleNotificationUserInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithCloudKitDatabase:(id)arg1;
- (void)registerToken:(id)arg1 completion:(id /* block */)arg2;

@end
