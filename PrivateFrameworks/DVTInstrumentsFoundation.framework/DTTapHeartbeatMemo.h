
@interface DTTapHeartbeatMemo : DTTapMemo {
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long timestamp;

- (id)initWithTimestamp:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
