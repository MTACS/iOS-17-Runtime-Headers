
@interface _IKDOMConditionalOperation : NSObject {
    NSString * _literal;
    IKDataBindingPropertyPath * _propertyPath;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *literal;
@property (nonatomic, retain) IKDataBindingPropertyPath *propertyPath;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)literal;
- (bool)passesForDataItem:(id)arg1;
- (id)propertyPath;
- (void)setLiteral:(id)arg1;
- (void)setPropertyPath:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
