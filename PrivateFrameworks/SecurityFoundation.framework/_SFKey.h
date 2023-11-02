
@interface _SFKey : NSObject {
    NSData * _keyData;
    id  _keyInternal;
}

@property (nonatomic, readonly) NSData *keyData;
@property (nonatomic, readonly, copy) NSString *keyDomain;
@property (nonatomic, readonly, copy) _SFKeySpecifier *keySpecifier;

+ (Class)_attributesClass;
+ (id)_specifierForSecKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;

- (void).cxx_destruct;
- (id)initRandomKeyWithSpecifier:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (id)keyData;
- (id)keyDomain;
- (id)keySpecifier;

@end
