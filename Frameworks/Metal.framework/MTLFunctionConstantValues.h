
@interface MTLFunctionConstantValues : NSObject <NSCopying>

// Image: /System/Library/Frameworks/Metal.framework/Metal

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)reset;
- (void)setConstantValue:(const void*)arg1 type:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setConstantValue:(const void*)arg1 type:(unsigned long long)arg2 withName:(id)arg3;
- (void)setConstantValues:(const void*)arg1 type:(unsigned long long)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

// Image: /System/Library/PrivateFrameworks/Portrait.framework/Portrait

- (void)setConstantFloat2:(void *)arg1 withName:(void *)arg2; // needs 2 arg types, found 1: id
- (void)setConstantFloat:(float)arg1 withName:(id)arg2;
- (void)setConstantHalf3:(/* Warning: Unrecognized filer type: ' ' using 'void*' */ void**)arg1 withName:(id)arg2;

@end
