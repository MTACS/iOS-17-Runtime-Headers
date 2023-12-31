
@interface _UIObjectPerScreen : NSObject

+ (id)objectOfClass:(Class)arg1 forScreen:(id)arg2 withOptions:(id)arg3 createIfNecessary:(bool)arg4;
+ (void)removeObject:(id)arg1;
+ (void)removeObjectsOfClass:(Class)arg1;
+ (void)screenDisconnected:(id)arg1;

@end
