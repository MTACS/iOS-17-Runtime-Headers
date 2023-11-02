
@interface SXClassFactory : NSObject

+ (Class)classForBaseClass:(Class)arg1 type:(id)arg2;
+ (void)initialize;
+ (void)registerClass:(Class)arg1 type:(id)arg2 baseClass:(Class)arg3;
+ (void)startTesting;
+ (void)stopTesting;
+ (id /* block */)valueClassBlockForBaseClass:(Class)arg1;

@end
