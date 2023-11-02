
@interface FPDFilePresenter : NSObject <FPDLifetimeExtender, FPXEnumeratorObserver> {
    NSData * _changeToken;
    FPItem * _currentItem;
    FPDDomain * _domain;
    <FPXEnumerator> * _enumerator;
    id  _filePresenterID;
    bool  _isEnumeratorActive;
    bool  _isFetchingChanges;
    bool  _isFrontmost;
    bool  _isRunning;
    FPItemID * _itemID;
    FPDExtensionManager * _manager;
    FPItemID * _observedItemID;
    NSURL * _presentedItemURL;
    int  _presenterPid;
    bool  _presenterWantsUbiqitousAttributes;
    NSObject<OS_dispatch_queue> * _queue;
    int  _requestEffectivePID;
    bool  _shouldRefetchChanges;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FPDDomain *domain;
@property (nonatomic, copy) id filePresenterID;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isEnumeratorActive;
@property (nonatomic) bool isFrontmost;
@property (nonatomic, retain) FPItemID *itemID;
@property (nonatomic, readonly) FPItemID *observedItemID;
@property (nonatomic, readonly) NSURL *presentedItemURL;
@property (nonatomic) int presenterPid;
@property (readonly) NSString *prettyDescription;
@property (readonly) int requestEffectivePID;
@property (readonly) Class superclass;
@property (readonly) double timeout;
@property unsigned long long timeoutState;

+ (id)presenter:(id)arg1 withItemID:(id)arg2 pid:(int)arg3 urlHint:(id)arg4 domain:(id)arg5;

- (void).cxx_destruct;
- (void)_destroyEnumerator;
- (void)_enumeratorRequestDidFailWithXPCError:(id)arg1;
- (void)_fetchChangeToken;
- (void)_fetchUpdates;
- (id)_newCoordinator;
- (id)_presentedItemDescription:(bool)arg1;
- (void)becomeFrontmost:(bool)arg1 inWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)description;
- (void)didUpdateItem:(id)arg1;
- (id)domain;
- (void)dumpStateTo:(id)arg1;
- (void)enumerationResultsDidChange;
- (id)enumerator;
- (id)filePresenterID;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 itemID:(id)arg2 pid:(int)arg3 urlHint:(id)arg4 domain:(id)arg5;
- (bool)isEnumeratorActive;
- (bool)isEqual:(id)arg1;
- (bool)isFrontmost;
- (id)itemID;
- (id)observedItemID;
- (id)presentedItemURL;
- (int)presenterPid;
- (id)prettyDescription;
- (void)receiveUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2;
- (int)requestEffectivePID;
- (void)setDomain:(id)arg1;
- (void)setFilePresenterID:(id)arg1;
- (void)setIsEnumeratorActive:(bool)arg1;
- (void)setIsFrontmost:(bool)arg1;
- (void)setItemID:(id)arg1;
- (void)setPresenterPid:(int)arg1;
- (void)start;
- (void)stop;

@end
