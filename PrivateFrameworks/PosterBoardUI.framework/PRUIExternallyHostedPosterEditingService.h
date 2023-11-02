
@interface PRUIExternallyHostedPosterEditingService : NSObject <PRUIExternallyHostedPosterEditingServerToClientInterface> {
    <PRUIExternallyHostedPosterEditingServiceDelegate> * _delegate;
    BSServiceConnection<BSServiceConnectionClient> * _serviceConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRUIExternallyHostedPosterEditingServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)editingRequestForEntryPoint:(id)arg1;
+ (bool)isExternalEditingSupported;

- (void).cxx_destruct;
- (id)_serviceInterfaceWithError:(id*)arg1;
- (oneway void)beginEditingWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (oneway void)didEndEditingWithResponse:(id)arg1;
- (id)init;
- (void)invalidate;
- (oneway void)sendRequestDismissalActionWithRequest:(id)arg1;
- (void)setDelegate:(id)arg1;
- (oneway void)willEndEditingWithResponse:(id)arg1;

@end
