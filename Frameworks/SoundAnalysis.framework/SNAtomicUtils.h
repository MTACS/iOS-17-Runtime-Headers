
@interface SNAtomicUtils : NSObject

+ (bool)atomicAdd:(long long)arg1 notSurpassing:(long long)arg2 atAddress:(void*)arg3;
+ (long long)atomicUpdateValue:(id /* block */)arg1 atAddress:(void*)arg2;

- (id)init;

@end
