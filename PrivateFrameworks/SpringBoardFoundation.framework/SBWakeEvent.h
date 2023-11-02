
@interface SBWakeEvent : NSObject {
    unsigned long long  _eventAbsTimestamp;
    unsigned long long  _eventRecvContTimestamp;
}

@property (nonatomic) unsigned long long eventAbsTimestamp;
@property (nonatomic) unsigned long long eventRecvContTimestamp;

- (unsigned long long)eventAbsTimestamp;
- (unsigned long long)eventRecvContTimestamp;
- (id)initWithTimestamp:(unsigned long long)arg1;
- (void)setEventAbsTimestamp:(unsigned long long)arg1;
- (void)setEventRecvContTimestamp:(unsigned long long)arg1;

@end
