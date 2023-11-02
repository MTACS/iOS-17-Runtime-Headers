
@interface MRUTVRemoteController : NSObject <MRUEndpointControllerObserver, _MCStateDumpPropertyListTransformable> {
    long long  _context;
    <MRUTVRemoteControllerDelegate> * _delegate;
    MRUEndpointController * _endpointController;
    bool  _showTVRemote;
}

@property (nonatomic) long long context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUTVRemoteControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MRUEndpointController *endpointController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool showTVRemote;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_stateDumpObject;
- (id)airplayIdentifier;
- (long long)context;
- (id)delegate;
- (id)endpointController;
- (void)endpointController:(id)arg1 didChangeRoute:(id)arg2;
- (id)initWithEndpointController:(id)arg1;
- (long long)launchContext;
- (id)mediaRemoteIdentifier;
- (void)presentTVRemoteUsingApp:(bool)arg1;
- (void)prewarmIfNeeded;
- (void)setContext:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (bool)showTVRemote;
- (void)updateShowTVRemote;

@end
