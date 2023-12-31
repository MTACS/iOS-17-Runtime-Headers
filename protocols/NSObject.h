
@protocol NSObject

@required

- (id)autorelease;
- (Class)class;
- (bool)conformsToProtocol:(Protocol *)arg1;
- (NSString *)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isMemberOfClass:(Class)arg1;
- (bool)isProxy;
- (id)performSelector:(SEL)arg1;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (oneway void)release;
- (bool)respondsToSelector:(SEL)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (id)self;
- (Class)superclass;
- (struct _NSZone { }*)zone;

@optional

- (NSString *)debugDescription;

@end
