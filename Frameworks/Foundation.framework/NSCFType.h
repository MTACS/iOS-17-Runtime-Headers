
@interface NSCFType : NSObject

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (bool)allowsWeakReference;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;

@end
