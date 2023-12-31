
@interface SiriCorePingInfo : NSObject <NSCopying> {
    double  _avgPingTime;
    NSMapTable * _outstandingPings;
    long long  _pingAcknowledgedCount;
}

@property (nonatomic, readonly) double avgPingTime;
@property (nonatomic, readonly) long long pingAcknowledgedCount;

- (void).cxx_destruct;
- (double)avgPingTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)markPingSentWithIndex:(long long)arg1;
- (void)markPongReceivedWithIndex:(long long)arg1;
- (unsigned long long)numberOfUnacknowledgedPings;
- (long long)pingAcknowledgedCount;

@end
