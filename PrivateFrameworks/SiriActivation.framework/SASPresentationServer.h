
@interface SASPresentationServer : NSObject {
    BSServiceConnection<BSServiceConnectionHost> * _connection;
    bool  _invalidated;
    long long  _presentationIdentifier;
    NSMutableArray * _waitForConnectBlocks;
    <SASPresentationServerDelegate> * _weak_delegate;
    BSServiceConnectionEndpointInjector * _workspaceServiceInjector;
}

@property (nonatomic, retain) BSServiceConnection<BSServiceConnectionHost> *connection;
@property (nonatomic) bool invalidated;
@property (nonatomic) long long presentationIdentifier;
@property (nonatomic, retain) NSMutableArray *waitForConnectBlocks;
@property (nonatomic) <SASPresentationServerDelegate> *weak_delegate;
@property (nonatomic, retain) BSServiceConnectionEndpointInjector *workspaceServiceInjector;

+ (void)_unregisterConnection:(id)arg1;
+ (id)interface;
+ (id)serverForConnection:(id)arg1;
+ (id)serviceQuality;

- (void).cxx_destruct;
- (void)_setConnection:(id)arg1;
- (id)allBulletins;
- (id)bulletinForIdentifier:(id)arg1;
- (id)bulletinsOnLockScreen;
- (id)connection;
- (void)dealloc;
- (id)description;
- (oneway void)didDismiss;
- (oneway void)didPresentSiri;
- (oneway void)didUpdatePresentationState:(id)arg1;
- (oneway void)failedToPresentSiriWithError:(id)arg1;
- (id)init;
- (bool)invalidated;
- (oneway void)pong;
- (long long)presentationIdentifier;
- (oneway void)registerPresentationIdentifier:(id)arg1;
- (oneway void)resetSiriToActive;
- (void)setConnection:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setPresentationIdentifier:(long long)arg1;
- (void)setWaitForConnectBlocks:(id)arg1;
- (void)setWeak_delegate:(id)arg1;
- (void)setWorkspaceServiceInjector:(id)arg1;
- (oneway void)speechRequestCancelledFromSiriOrb;
- (oneway void)speechRequestStartedFromSiriOrb;
- (oneway void)unregisterPresentationIdentifier:(id)arg1;
- (id)waitForConnectBlocks;
- (id)weak_delegate;
- (oneway void)willDismiss;
- (id)workspaceServiceInjector;

@end
