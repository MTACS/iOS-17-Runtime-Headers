
@interface MDMServerAppInstallBlocking : NSObject {
    id /* block */  _appBlockCompletionBlock;
    NSObject<OS_dispatch_queue> * _appBlockQueue;
    MDMServerCore * _server;
}

@property (nonatomic, copy) id /* block */ appBlockCompletionBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *appBlockQueue;
@property (nonatomic) MDMServerCore *server;

- (void).cxx_destruct;
- (id /* block */)appBlockCompletionBlock;
- (id)appBlockQueue;
- (void)blockAppInstallsWithCompletion:(id /* block */)arg1;
- (void)didUnblockAppInstalls;
- (id)init;
- (bool)isAppInstallBlocked;
- (id)server;
- (void)setAppBlockCompletionBlock:(id /* block */)arg1;
- (void)setAppBlockQueue:(id)arg1;
- (void)setServer:(id)arg1;
- (void)unblockAppInstallsWithCompletion:(id /* block */)arg1;

@end
