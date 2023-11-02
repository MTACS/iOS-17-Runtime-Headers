
@interface PKSecureElementPassField : NSObject {
    NSSet * _foreignReferenceIdentifiers;
    NSString * _key;
    long long  _unitType;
}

@property (nonatomic, copy) NSSet *foreignReferenceIdentifiers;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) long long unitType;

- (void).cxx_destruct;
- (id)foreignReferenceIdentifiers;
- (id)initWithPassField:(id)arg1;
- (id)initWithPaymentPassFieldDictionary:(id)arg1;
- (id)key;
- (void)setForeignReferenceIdentifiers:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setUnitType:(long long)arg1;
- (long long)unitType;

@end
