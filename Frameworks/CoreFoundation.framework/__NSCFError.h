
@interface __NSCFError : NSError

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (Class)classForCoder;
- (long long)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)domain;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)userInfo;

@end
