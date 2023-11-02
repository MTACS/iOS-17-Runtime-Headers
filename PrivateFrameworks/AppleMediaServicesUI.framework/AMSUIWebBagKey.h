
@interface AMSUIWebBagKey : NSObject {
    NSString * _key;
    unsigned long long  _valueType;
}

@property (nonatomic, retain) NSString *key;
@property (nonatomic) unsigned long long valueType;

- (void).cxx_destruct;
- (id)description;
- (id)key;
- (void)setKey:(id)arg1;
- (void)setValueType:(unsigned long long)arg1;
- (unsigned long long)valueType;

@end
