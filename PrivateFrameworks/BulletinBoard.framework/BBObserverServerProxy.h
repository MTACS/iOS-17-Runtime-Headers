
@interface BBObserverServerProxy : NSObject <BBObserverClientInterface, BBObserverServerInterface> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSXPCConnection * _connection;
    bool  _isEstablished;
    bool  _isValid;
    BBObserver * _observer;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *calloutQueue;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) BBObserver *observer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)xpcInterface;

- (void).cxx_destruct;
- (id)calloutQueue;
- (void)clearBulletinIDs:(id)arg1 inSection:(id)arg2;
- (void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3;
- (void)clearSection:(id)arg1;
- (id)connection;
- (void)dealloc;
- (bool)established;
- (void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned long long)arg2;
- (void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(id /* block */)arg3;
- (void)getBulletinsWithHandler:(id /* block */)arg1;
- (void)getObserverDebugInfo:(id /* block */)arg1;
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getSectionInfoForActiveSectionsWithHandler:(id /* block */)arg1;
- (void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getSectionInfoWithHandler:(id /* block */)arg1;
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)handleResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithObserver:(id)arg1 connection:(id)arg2 queue:(id)arg3 calloutQueue:(id)arg4;
- (void)invalidate;
- (bool)isValid;
- (void)noteBulletinsLoadedForSectionID:(id)arg1;
- (void)noteServerReceivedResponseForBulletin:(id)arg1;
- (id)observer;
- (id)queue;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned long long)arg3;
- (void)removeSection:(id)arg1;
- (void)requestNoticesBulletinsForAllSections;
- (void)requestNoticesBulletinsForSectionID:(id)arg1;
- (void)setCalloutQueue:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(id)arg2 priority:(unsigned long long)arg3;
- (void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(id)arg2;
- (void)setQueue:(id)arg1;
- (void)updateBulletin:(id)arg1 withHandler:(id /* block */)arg2;
- (void)updateGlobalSettings:(id)arg1;
- (void)updateSectionInfo:(id)arg1;
- (void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;

@end
