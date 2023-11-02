
@interface __NSCFLocale : NSLocale

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (unsigned long long)hash;
- (id)initWithLocaleIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectForKey:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
