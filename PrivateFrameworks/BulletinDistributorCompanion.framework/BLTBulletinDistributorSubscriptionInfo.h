
@interface BLTBulletinDistributorSubscriptionInfo : NSObject {
    bool  _ack;
    bool  _ackAllowedOnLocalConnection;
    bool  _fullBulletins;
}

@property (nonatomic) bool ack;
@property (nonatomic) bool ackAllowedOnLocalConnection;
@property (nonatomic) bool fullBulletins;

- (bool)ack;
- (bool)ackAllowedOnLocalConnection;
- (bool)fullBulletins;
- (void)setAck:(bool)arg1;
- (void)setAckAllowedOnLocalConnection:(bool)arg1;
- (void)setFullBulletins:(bool)arg1;

@end
