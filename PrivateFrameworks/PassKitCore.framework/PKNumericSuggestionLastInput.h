
@interface PKNumericSuggestionLastInput : NSObject {
    NSMutableDictionary * _passLastInputDictionary;
    NSString * _serialNumber;
}

@property (nonatomic, copy) NSDecimalNumber *value;
@property (nonatomic) bool wentToMax;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPassSerialNumber:(id)arg1;
- (void)save;
- (void)setValue:(id)arg1;
- (void)setWentToMax:(bool)arg1;
- (id)value;
- (bool)wentToMax;

@end
