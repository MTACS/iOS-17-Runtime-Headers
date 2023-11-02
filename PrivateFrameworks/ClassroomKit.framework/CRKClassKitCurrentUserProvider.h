
@interface CRKClassKitCurrentUserProvider : NSObject {
    NSObject<CRKClassKitFacade> * _classKitFacade;
    <CRKClassKitCurrentUser> * _currentUser;
    bool  _currentUserFetched;
    <CRKCancelable> * _currentUserSubscription;
    unsigned long long  _sequenceNumber;
}

@property (nonatomic, readonly) NSObject<CRKClassKitFacade> *classKitFacade;
@property (nonatomic, retain) <CRKClassKitCurrentUser> *currentUser;
@property (nonatomic) bool currentUserFetched;
@property (nonatomic, retain) <CRKCancelable> *currentUserSubscription;
@property (nonatomic) unsigned long long sequenceNumber;

- (void).cxx_destruct;
- (id)classKitFacade;
- (id)currentUser;
- (bool)currentUserFetched;
- (id)currentUserSubscription;
- (void)dealloc;
- (id)initWithClassKitFacade:(id)arg1;
- (bool)isSafeToTalkToProgressdWithAccountState:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performKVOUpdateForKeyPaths:(id)arg1 updateBlock:(id /* block */)arg2;
- (void)safeFetchCurrentUserWithCompletion:(id /* block */)arg1;
- (unsigned long long)sequenceNumber;
- (void)setCurrentUser:(id)arg1;
- (void)setCurrentUserFetched:(bool)arg1;
- (void)setCurrentUserSubscription:(id)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)startObservingCurrentUser;
- (void)stopObservingCurrentUser;
- (void)updateCurrentUser;
- (void)updateCurrentUser:(id)arg1 fetched:(bool)arg2;

@end
