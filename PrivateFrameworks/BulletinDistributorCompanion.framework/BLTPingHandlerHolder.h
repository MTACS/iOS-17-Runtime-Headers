
@interface BLTPingHandlerHolder : NSObject <BLTPingSubscriptionInfo> {
    unsigned long long  _ackType;
    bool  _forBulletin;
    bool  _forNotification;
    id  _pingHandler;
    NSString * _sectionID;
}

@property (nonatomic) unsigned long long ackType;
@property (nonatomic, readonly) bool canAck;
@property (nonatomic, readonly) bool canAckOnLocalConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forBulletin;
@property (nonatomic) bool forNotification;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *sectionID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performPingWithAckableForwardBlock:(id /* block */)arg1 ackableNoParametersBlock:(id /* block */)arg2 noAckBlock:(id /* block */)arg3 clientAck:(id /* block */)arg4;
- (unsigned long long)ackType;
- (bool)canAck;
- (bool)canAckOnLocalConnection;
- (bool)forBulletin;
- (bool)forNotification;
- (id)init;
- (id)initWithPingHandler:(id)arg1;
- (void)pingWithBulletin:(id)arg1 ack:(id /* block */)arg2;
- (void)pingWithBulletin:(id)arg1 notification:(id)arg2 ack:(id /* block */)arg3;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(id /* block */)arg3;
- (id)sectionID;
- (void)setAckType:(unsigned long long)arg1;
- (void)setForBulletin:(bool)arg1;
- (void)setForNotification:(bool)arg1;
- (void)setSectionID:(id)arg1;

@end
