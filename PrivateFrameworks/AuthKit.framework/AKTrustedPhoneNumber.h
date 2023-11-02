
@interface AKTrustedPhoneNumber : NSObject {
    NSNumber * _identifier;
    NSString * _number;
    NSString * _numberWithDialCode;
    NSString * _obfuscatedNumber;
    NSString * _pushMode;
}

@property (nonatomic, retain) NSNumber *identifier;
@property (nonatomic, retain) NSString *number;
@property (nonatomic, retain) NSString *numberWithDialCode;
@property (nonatomic, retain) NSString *obfuscatedNumber;
@property (nonatomic, retain) NSString *pushMode;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)initWithJSONDictionary:(id)arg1;
- (id)number;
- (id)numberWithDialCode;
- (id)obfuscatedNumber;
- (id)pushMode;
- (void)setIdentifier:(id)arg1;
- (void)setNumber:(id)arg1;
- (void)setNumberWithDialCode:(id)arg1;
- (void)setObfuscatedNumber:(id)arg1;
- (void)setPushMode:(id)arg1;

@end
