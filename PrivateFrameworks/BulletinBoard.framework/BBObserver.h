
@interface BBObserver : NSObject <BBAssertionDelegate> {
    NSMapTable * _bulletinLifeAssertions;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    <BBObserverDelegate> * _delegate;
    NSString * _gatewayName;
    unsigned long long  _gatewayPriority;
    bool  _isGateway;
    unsigned long long  _observerFeed;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _remainingFeedsByBulletinID;
    NSMutableDictionary * _sectionParametersBySectionID;
    BBObserverServerProxy * _serverProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BBObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *gatewayName;
@property (nonatomic, readonly) unsigned long long gatewayPriority;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long observerFeed;
@property (readonly) Class superclass;

+ (id)gatewayWithQueue:(id)arg1 calloutQueue:(id)arg2 name:(id)arg3 priority:(unsigned long long)arg4;
+ (void)initialize;
+ (id)observerWithQueue:(id)arg1 calloutQueue:(id)arg2 forGatewayName:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithQueue:(id)arg1 calloutQueue:(id)arg2 gatewayName:(id)arg3 gatewayPriority:(unsigned long long)arg4 isGateway:(bool)arg5;
- (void)_queue_invalidate;
- (void)_queue_noteBulletinsLoadedForSectionID:(id)arg1;
- (void)_queue_registerBulletin:(id)arg1 withTransactionID:(unsigned long long)arg2;
- (void)_queue_serverProxy:(id)arg1 connectionStateDidChange:(bool)arg2;
- (void)_queue_updateAddBulletin:(id)arg1 withReply:(id /* block */)arg2;
- (void)_queue_updateBulletin:(id)arg1 withReply:(id /* block */)arg2;
- (void)_queue_updateModifyBulletin:(id)arg1 withReply:(id /* block */)arg2;
- (void)_queue_updateRemoveBulletin:(id)arg1 withReply:(id /* block */)arg2;
- (void)assertionExpired:(id)arg1 transactionID:(unsigned long long)arg2;
- (void)clearBulletins:(id)arg1 inSection:(id)arg2;
- (void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3;
- (void)clearSection:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)gatewayName;
- (unsigned long long)gatewayPriority;
- (void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)getBulletinsWithCompletion:(id /* block */)arg1;
- (void)getComposedImageSizeForAttachment:(id)arg1 bulletin:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)getParametersForSectionID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getSectionInfoForActiveSectionsWithCompletion:(id /* block */)arg1;
- (void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getSectionInfoWithCompletion:(id /* block */)arg1;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 asGateway:(id)arg2 priority:(unsigned long long)arg3;
- (id)initWithQueue:(id)arg1 calloutQueue:(id)arg2;
- (id)initWithQueue:(id)arg1 calloutQueue:(id)arg2 gatewayName:(id)arg3 gatewayPriority:(unsigned long long)arg4 isGateway:(bool)arg5 connection:(id)arg6;
- (id)initWithQueue:(id)arg1 forGateway:(id)arg2;
- (void)invalidate;
- (bool)isValid;
- (void)noteBulletinsLoadedForSectionID:(id)arg1;
- (void)noteServerReceivedResponseForBulletin:(id)arg1;
- (unsigned long long)observerFeed;
- (id)parametersForSectionID:(id)arg1;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeed:(unsigned long long)arg3;
- (void)removeSection:(id)arg1;
- (void)requestListBulletinsForSectionID:(id)arg1;
- (void)requestNoticesBulletinsForAllSections;
- (void)requestNoticesBulletinsForSectionID:(id)arg1;
- (void)sendResponse:(id)arg1;
- (void)sendResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendResponse:(id)arg1 withCompletionIncludingModifiedResponse:(id /* block */)arg2;
- (void)serverProxy:(id)arg1 connectionStateDidChange:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setObserverFeed:(unsigned long long)arg1;
- (void)updateBulletin:(id)arg1 withReply:(id /* block */)arg2;
- (void)updateGlobalSettings:(id)arg1;
- (void)updateSectionInfo:(id)arg1;
- (void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;

@end
