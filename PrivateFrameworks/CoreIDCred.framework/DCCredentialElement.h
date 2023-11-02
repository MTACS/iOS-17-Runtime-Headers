
@interface DCCredentialElement : NSObject <NSSecureCoding> {
    NSArray * _arrayValue;
    NSData * _dataValue;
    NSDate * _dateValue;
    NSDictionary * _dictionaryValue;
    NSString * _elementIdentifier;
    NSNumber * _numberValue;
    unsigned long long  _numericTypeHint;
    NSString * _stringValue;
}

@property (nonatomic, retain) NSArray *arrayValue;
@property (nonatomic, retain) NSData *dataValue;
@property (nonatomic, retain) NSDate *dateValue;
@property (nonatomic, retain) NSDictionary *dictionaryValue;
@property (nonatomic, retain) NSString *elementIdentifier;
@property (nonatomic, retain) NSNumber *numberValue;
@property (nonatomic) unsigned long long numericTypeHint;
@property (nonatomic, retain) NSString *stringValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arrayValue;
- (id)dataValue;
- (id)dateValue;
- (id)description;
- (id)dictionaryValue;
- (id)elementIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithElementIdentifier:(id)arg1;
- (id)initWithElementIdentifier:(id)arg1 arrayValue:(id)arg2;
- (id)initWithElementIdentifier:(id)arg1 boolValue:(bool)arg2;
- (id)initWithElementIdentifier:(id)arg1 dataValue:(id)arg2;
- (id)initWithElementIdentifier:(id)arg1 dateValue:(id)arg2;
- (id)initWithElementIdentifier:(id)arg1 dictionaryValue:(id)arg2;
- (id)initWithElementIdentifier:(id)arg1 doubleValue:(double)arg2;
- (id)initWithElementIdentifier:(id)arg1 intValue:(long long)arg2;
- (id)initWithElementIdentifier:(id)arg1 stringValue:(id)arg2;
- (id)initWithElementIdentifier:(id)arg1 stringValue:(id)arg2 dataValue:(id)arg3 dateValue:(id)arg4 numberValue:(id)arg5 arrayValue:(id)arg6 dictionaryValue:(id)arg7 numericTypeHint:(unsigned long long)arg8;
- (id)numberValue;
- (unsigned long long)numericTypeHint;
- (void)setArrayValue:(id)arg1;
- (void)setDataValue:(id)arg1;
- (void)setDateValue:(id)arg1;
- (void)setDictionaryValue:(id)arg1;
- (void)setElementIdentifier:(id)arg1;
- (void)setNumberValue:(id)arg1;
- (void)setNumericTypeHint:(unsigned long long)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end
