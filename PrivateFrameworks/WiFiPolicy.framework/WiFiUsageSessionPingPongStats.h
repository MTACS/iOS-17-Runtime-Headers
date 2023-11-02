
@interface WiFiUsageSessionPingPongStats : NSObject {
    unsigned long long  _pingPongNth;
    bool  _pingPongSequenceIsLowRssiOnly;
    bool  _pingPongSequenceIsReassocOnly;
    bool  _pingPongSequenceIsReassocOrLowRSSIOnly;
    NSArray * _sequence;
}

@property (nonatomic) unsigned long long pingPongNth;
@property (nonatomic) bool pingPongSequenceIsLowRssiOnly;
@property (nonatomic) bool pingPongSequenceIsReassocOnly;
@property (nonatomic) bool pingPongSequenceIsReassocOrLowRSSIOnly;
@property (nonatomic, retain) NSArray *sequence;

- (void).cxx_destruct;
- (id)initWithPingPongSequence:(id)arg1;
- (unsigned long long)pingPongNth;
- (bool)pingPongSequenceIsLowRssiOnly;
- (bool)pingPongSequenceIsReassocOnly;
- (bool)pingPongSequenceIsReassocOrLowRSSIOnly;
- (id)sequence;
- (void)setPingPongNth:(unsigned long long)arg1;
- (void)setPingPongSequenceIsLowRssiOnly:(bool)arg1;
- (void)setPingPongSequenceIsReassocOnly:(bool)arg1;
- (void)setPingPongSequenceIsReassocOrLowRSSIOnly:(bool)arg1;
- (void)setSequence:(id)arg1;

@end
