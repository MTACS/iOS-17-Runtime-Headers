
@interface NSCFError : NSError

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (bool)allowsWeakReference;
- (Class)classForCoder;
- (long long)code;
- (id)domain;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;
- (id)userInfo;

@end
