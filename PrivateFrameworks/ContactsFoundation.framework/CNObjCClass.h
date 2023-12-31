
@interface CNObjCClass : NSObject {
    Class  _cls;
}

+ (bool)addMethod:(id)arg1 toClass:(Class)arg2;
+ (id)allMethodsOfClass:(Class)arg1;
+ (id)classWithClass:(Class)arg1;
+ (void)enumerateMethodsOfClass:(Class)arg1 withBlock:(id /* block */)arg2;
+ (id)instanceMethodOfClass:(Class)arg1 forSelector:(SEL)arg2;

- (bool)addMethod:(id)arg1;
- (id)allMethods;
- (void)enumerateMethodsWithBlock:(id /* block */)arg1;
- (id)initWithClass:(Class)arg1;
- (id)instanceMethodForSelector:(SEL)arg1;

@end
