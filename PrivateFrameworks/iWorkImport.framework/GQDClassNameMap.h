
@interface GQDClassNameMap : NSObject

+ (Class)classForName:(const char *)arg1 inRootType:(Class)arg2;
+ (void)initialize;
+ (void)registerClass:(Class)arg1 forName:(const char *)arg2 inRootType:(Class)arg3;
+ (void)registerDefaults;
+ (void)registerGlobalClass:(Class)arg1 name:(const char *)arg2;

@end
