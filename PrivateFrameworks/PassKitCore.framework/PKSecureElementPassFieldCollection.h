
@interface PKSecureElementPassFieldCollection : NSObject {
    NSDictionary * _fieldsDictionary;
}

@property (nonatomic, readonly, copy) NSArray *balanceFields;
@property (nonatomic, readonly, copy) NSArray *commutePlans;
@property (nonatomic, copy) NSDictionary *fieldsDictionary;

- (void).cxx_destruct;
- (id)balanceFields;
- (id)commutePlans;
- (id)fieldsDictionary;
- (id)initWithBalanceFieldsFromPass:(id)arg1;
- (id)initWithFieldsDictionary:(id)arg1;
- (id)initWithPassDictionary:(id)arg1;
- (void)setFieldsDictionary:(id)arg1;

@end
