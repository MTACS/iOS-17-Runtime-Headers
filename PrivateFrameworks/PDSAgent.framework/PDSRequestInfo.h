
@interface PDSRequestInfo : NSObject {
    NSDate * _heartbeatDate;
    unsigned long long  _regReason;
}

@property (nonatomic, retain) NSDate *heartbeatDate;
@property (nonatomic) unsigned long long regReason;

- (void).cxx_destruct;
- (id)heartbeatDate;
- (id)init;
- (id)initWithRegistrationReason:(unsigned long long)arg1 nextHeartbeatDate:(id)arg2;
- (unsigned long long)regReason;
- (void)setHeartbeatDate:(id)arg1;
- (void)setRegReason:(unsigned long long)arg1;

@end
