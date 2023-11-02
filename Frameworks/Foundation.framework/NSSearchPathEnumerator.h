
@interface NSSearchPathEnumerator : NSEnumerator {
    unsigned long long  directory;
    unsigned long long  domainMask;
    long long  state;
}

- (id)initWithDirectory:(unsigned long long)arg1 domains:(unsigned long long)arg2;
- (id)nextObject;

@end
