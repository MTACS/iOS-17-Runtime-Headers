
@interface SAAlarmTask : NSObject {
    NSUUID * _alarmUUID;
    <SATimeClientProtocol> * _client;
    NSDate * _fireDate;
}

@property (nonatomic, copy) NSUUID *alarmUUID;
@property (nonatomic) <SATimeClientProtocol> *client;
@property (nonatomic, copy) NSDate *fireDate;

- (void).cxx_destruct;
- (id)alarmUUID;
- (id)client;
- (id)fireDate;
- (void)setAlarmUUID:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setFireDate:(id)arg1;

@end
