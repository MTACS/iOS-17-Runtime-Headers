
@interface GFTKeyWrapping : NSObject

+ (id)decrypt:(id)arg1 usingKey:(struct __SecKey { }*)arg2 error:(id*)arg3;
+ (id)encrypt:(id)arg1 toKey:(struct __SecKey { }*)arg2 error:(id*)arg3;
+ (id)unwrapSeed:(id)arg1 usingKey:(struct __SecKey { }*)arg2 legacy:(bool)arg3 error:(id*)arg4;
+ (id)wrapSeed:(id)arg1 to:(struct __SecKey { }*)arg2 legacy:(bool)arg3 error:(id*)arg4;
+ (id)wrapSeed:(id)arg1 toKeys:(id)arg2 error:(id*)arg3;

@end
