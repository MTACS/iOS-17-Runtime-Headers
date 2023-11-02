
@interface PocketAPIBlockDelegate : NSObject <PocketAPIDelegate> {
    id /* block */  loginHandler;
    id /* block */  responseHandler;
    id /* block */  saveHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ loginHandler;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, copy) id /* block */ saveHandler;
@property (readonly) Class superclass;

+ (id)delegateWithLoginHandler:(id /* block */)arg1;
+ (id)delegateWithResponseHandler:(id /* block */)arg1;
+ (id)delegateWithSaveHandler:(id /* block */)arg1;

- (void)dealloc;
- (id /* block */)loginHandler;
- (void)pocketAPI:(id)arg1 failedToSaveURL:(id)arg2 error:(id)arg3;
- (void)pocketAPI:(id)arg1 hadLoginError:(id)arg2;
- (void)pocketAPI:(id)arg1 receivedResponse:(id)arg2 forAPIMethod:(id)arg3 error:(id)arg4;
- (void)pocketAPI:(id)arg1 savedURL:(id)arg2;
- (void)pocketAPILoggedIn:(id)arg1;
- (id /* block */)responseHandler;
- (id /* block */)saveHandler;
- (void)setLoginHandler:(id /* block */)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setSaveHandler:(id /* block */)arg1;

@end
