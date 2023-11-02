
@interface PKPaymentSetupFieldRequirement : NSObject {
    NSString * _fieldIdentifier;
    unsigned long long  _type;
    <NSObject><NSCopying> * _value;
}

@property (nonatomic, copy) NSString *fieldIdentifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic, copy) <NSObject><NSCopying> *value;

- (void).cxx_destruct;
- (id)fieldIdentifier;
- (id)initWithDictionary:(id)arg1;
- (void)setFieldIdentifier:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (unsigned long long)type;
- (id)value;

@end
