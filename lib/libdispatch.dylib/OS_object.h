
@interface OS_object : NSObject

- (void)_xref_dispose;
- (bool)allowsWeakReference;
- (id)init;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;

@end
