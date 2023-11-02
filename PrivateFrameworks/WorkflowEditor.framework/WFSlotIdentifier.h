
@interface WFSlotIdentifier : NSObject <NSCopying> {
    long long  _arrayIndex;
    NSString * _key;
    NSString * _parameterKey;
}

@property (nonatomic, readonly) long long arrayIndex;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *parameterKey;

- (void).cxx_destruct;
- (long long)arrayIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifierBySettingArrayIndex:(long long)arg1;
- (id)identifierBySettingParameterKey:(id)arg1;
- (id)identifierBySettingParameterKey:(id)arg1 arrayIndex:(long long)arg2;
- (id)initWithKey:(id)arg1;
- (id)initWithKey:(id)arg1 parameterKey:(id)arg2 arrayIndex:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)parameterKey;

@end
