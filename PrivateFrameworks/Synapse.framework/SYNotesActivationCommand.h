
@interface SYNotesActivationCommand : NSObject {
    NSObject<OS_dispatch_queue> * __dataLoadingQueue;
    SYNotesActivationRequest * _activationRequest;
}

@property (nonatomic, retain) SYNotesActivationRequest *activationRequest;

+ (Class)_iOSImpl;
+ (void)activateWithDomainIdentifier:(id)arg1 noteIdentifier:(id)arg2 completion:(id /* block */)arg3;
+ (void)activateWithMetaActivity:(id)arg1 completion:(id /* block */)arg2;
+ (void)activateWithNoteIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (bool)remotePresentationEnabled;
+ (void)setRemotePresentationEnabled:(bool)arg1;

- (void).cxx_destruct;
- (void)_loadDataFromFileURLs:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)activationRequest;
- (id)init;
- (void)setActivationRequest:(id)arg1;

@end
