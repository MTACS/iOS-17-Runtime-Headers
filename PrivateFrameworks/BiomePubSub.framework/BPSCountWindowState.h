
@interface BPSCountWindowState : BPSWindowState {
    unsigned long long  _capacity;
    unsigned long long  _currentCount;
}

@property (nonatomic) unsigned long long capacity;
@property (nonatomic) unsigned long long currentCount;

+ (bool)supportsSecureCoding;

- (unsigned long long)capacity;
- (unsigned long long)currentCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 currentCount:(unsigned long long)arg2 identifier:(id)arg3 aggregate:(id)arg4 completed:(bool)arg5;
- (id)initWithCoder:(id)arg1;
- (id)metadata;
- (void)setCapacity:(unsigned long long)arg1;
- (void)setCurrentCount:(unsigned long long)arg1;

@end
