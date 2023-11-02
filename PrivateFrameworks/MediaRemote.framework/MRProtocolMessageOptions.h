
@interface MRProtocolMessageOptions : NSObject {
    long long  _priority;
    bool  _waking;
}

@property (nonatomic) long long priority;
@property (getter=isWaking, nonatomic) bool waking;

- (bool)isWaking;
- (long long)priority;
- (void)setPriority:(long long)arg1;
- (void)setWaking:(bool)arg1;

@end
