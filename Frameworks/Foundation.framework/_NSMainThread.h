
@interface _NSMainThread : NSThread

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
