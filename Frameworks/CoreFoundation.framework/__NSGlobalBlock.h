
@interface __NSGlobalBlock : NSBlock

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
