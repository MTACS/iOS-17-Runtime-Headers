
@interface _UIAssertionRecord : NSObject {
    long long  _activeAssertionCount;
    bool  _initialState;
    NSString * _reason;
    unsigned long long  _type;
}

@property (nonatomic) long long activeAssertionCount;
@property (nonatomic) bool initialState;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (long long)activeAssertionCount;
- (bool)initialState;
- (id)reason;
- (void)setActiveAssertionCount:(long long)arg1;
- (void)setInitialState:(bool)arg1;
- (void)setReason:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
