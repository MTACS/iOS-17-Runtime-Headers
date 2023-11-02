
@interface BLTLocalPingSubscriberService : NSObject <BLTPingService> {
    BLTBulletinDistributorSubscriber * _subscriber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BLTBulletinDistributorSubscriber *subscriber;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)sendBulletinSummary:(id)arg1;
- (void)setSubscriber:(id)arg1;
- (void)subscribeToSectionID:(id)arg1 forFullBulletins:(bool)arg2 withAck:(bool)arg3 ackAllowedOnLocalConnection:(bool)arg4;
- (void)subscribeWithMachServiceName:(id)arg1;
- (id)subscriber;
- (void)unsubscribeFromSectionID:(id)arg1;

@end
