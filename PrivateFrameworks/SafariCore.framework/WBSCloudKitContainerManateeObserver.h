
@interface WBSCloudKitContainerManateeObserver : NSObject <WBSCloudKitContainerManateeObserving> {
    <WBSAppleAccountInformationProviding> * _appleAccountInformationProvider;
    CKContainer * _container;
    NSString * _containerIdentifier;
    long long  _currentState;
    bool  _determiningManateeState;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _stateChangeObserver;
    NSMutableArray * _stateDeterminationCompletionBlocks;
}

@property (nonatomic, readonly, copy) NSString *containerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ stateChangeObserver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accountChanged:(id)arg1;
- (void)_determineManateeStateWithCompletion:(id /* block */)arg1;
- (id)containerIdentifier;
- (void)determineManateeStateWithCompletion:(id /* block */)arg1;
- (id)initWithContainerIdentifier:(id)arg1 appleAccountInformationProvider:(id)arg2;
- (void)setStateChangeObserver:(id /* block */)arg1;
- (id /* block */)stateChangeObserver;

@end
