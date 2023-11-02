
@protocol SATimeEventRequestProtocol

@required

- (void)cancelSATimeEventForAlarm:(NSUUID *)arg1;
- (void)scheduleSATimeEvent:(double)arg1 forAlarm:(NSUUID *)arg2;

@end
