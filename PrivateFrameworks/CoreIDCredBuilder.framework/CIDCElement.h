
@interface CIDCElement : NSObject {
    NSArray * _arrayValue;
    NSData * _dataValue;
    NSDate * _dateValue;
    NSDictionary * _dictionaryValue;
    NSString * _elementIdentifier;
    NSNumber * _numberValue;
    NSString * _stringValue;
}

@property (nonatomic, retain) NSArray *arrayValue;
@property (nonatomic, retain) NSData *dataValue;
@property (nonatomic, retain) NSDate *dateValue;
@property (nonatomic, retain) NSDictionary *dictionaryValue;
@property (nonatomic, retain) NSString *elementIdentifier;
@property (nonatomic, retain) NSNumber *numberValue;
@property (nonatomic, retain) NSString *stringValue;

- (void).cxx_destruct;
- (id)arrayValue;
- (id)dataValue;
- (id)dateValue;
- (id)dictionaryValue;
- (id)elementIdentifier;
- (id)initWithElementIdentifier:(id)arg1 arrayValue:(id)arg2;
- (id)initWithElementIdentifier:(id)arg1 dataValue:(id)arg2;
- (id)initWithElementIdentifier:(id)arg1 dateValue:(id)arg2;
- (id)initWithElementIdentifier:(id)arg1 dictionaryValue:(id)arg2;
- (id)initWithElementIdentifier:(id)arg1 numberValue:(id)arg2;
- (id)initWithElementIdentifier:(id)arg1 stringValue:(id)arg2;
- (id)initWithElementIdentifier:(id)arg1 stringValue:(id)arg2 dataValue:(id)arg3 dateValue:(id)arg4 numberValue:(id)arg5 arrayValue:(id)arg6 dictionaryValue:(id)arg7;
- (id)numberValue;
- (void)setArrayValue:(id)arg1;
- (void)setDataValue:(id)arg1;
- (void)setDateValue:(id)arg1;
- (void)setDictionaryValue:(id)arg1;
- (void)setElementIdentifier:(id)arg1;
- (void)setNumberValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end
