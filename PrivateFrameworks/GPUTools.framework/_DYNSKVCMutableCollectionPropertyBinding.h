
@interface _DYNSKVCMutableCollectionPropertyBinding : NSObject {
    NSString * _key;
    NSString * _underlyingIvarName;
}

@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly, copy) NSString *underlyingIvarName;

- (void)dealloc;
- (id)initWithKey:(id)arg1 underlyingIvarName:(id)arg2;
- (id)key;
- (id)underlyingIvarName;
- (id)underlyingIvarValueForObject:(id)arg1;

@end
