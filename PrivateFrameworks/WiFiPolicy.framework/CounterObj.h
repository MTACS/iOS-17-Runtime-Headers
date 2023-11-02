
@interface CounterObj : NSObject {
    unsigned long long  _count;
}

@property (nonatomic) unsigned long long count;

- (unsigned long long)count;
- (void)increment;
- (void)setCount:(unsigned long long)arg1;

@end
