
@interface PFUbiquityContainerMonitor : NSObject {
    PFUbiquityContainerIdentifier * _containerIdentifier;
    int  _containerState;
    <NSObject><NSCopying><NSCoding> * _currentIdentityToken;
    bool  _hasScheduledCheckBlock;
    NSString * _localPeerID;
    int  _monitorState;
    NSObject<OS_dispatch_queue> * _processingQueue;
    int  _scheduleSpinLock;
    NSString * _storeName;
    PFUbiquityLocation * _ubiquityRootLocation;
}

- (void)_applicationResumed:(id)arg1;
- (void)containerDeleteDetected:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithProcessingQueue:(id)arg1 localPeerID:(id)arg2 storeName:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (void)ubiquityIdentityChanged:(id)arg1;

@end
