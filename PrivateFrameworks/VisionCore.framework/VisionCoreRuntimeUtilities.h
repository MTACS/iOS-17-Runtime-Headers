
@interface VisionCoreRuntimeUtilities : NSObject

+ (id)allSubclassesOfClass:(Class)arg1 excludingRootClass:(bool)arg2 overridingClassSelector:(SEL)arg3;
+ (id)allSubclassesOfClass:(Class)arg1 excludingRootClass:(bool)arg2 overridingSelector:(SEL)arg3;
+ (void)enumerateSubclassesOfClass:(Class)arg1 excludingRootClass:(bool)arg2 usingBlock:(id /* block */)arg3;
+ (bool)item:(id)arg1 overridesClassSelector:(SEL)arg2;
+ (bool)item:(id)arg1 overridesSelector:(SEL)arg2;
+ (id)leafSubclassesOfClass:(Class)arg1 excludingRootClass:(bool)arg2;
+ (id)leafSubclassesOfClass:(Class)arg1 excludingRootClass:(bool)arg2 overridingClassSelector:(SEL)arg3;
+ (id)leafSubclassesOfClass:(Class)arg1 excludingRootClass:(bool)arg2 overridingSelector:(SEL)arg3;
+ (bool)linkTimeOrRunTimeAtLeastVersion:(int)arg1;
+ (bool)linkTimeOrRunTimeBeforeVersion:(int)arg1;
+ (int)linkTimeVersion;
+ (int)runTimeVersion;
+ (id)signatureForItem:(id)arg1 selector:(SEL)arg2;

@end
