
@interface _KSTIUserDictionaryTransaction : NSObject <NSSecureCoding> {
    _KSTIUserDictionaryEntryValue * _valueToDelete;
    _KSTIUserDictionaryEntryValue * _valueToInsert;
}

@property (nonatomic, retain) _KSTIUserDictionaryEntryValue *valueToDelete;
@property (nonatomic, retain) _KSTIUserDictionaryEntryValue *valueToInsert;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setValueToDelete:(id)arg1;
- (void)setValueToInsert:(id)arg1;
- (id)valueToDelete;
- (id)valueToInsert;

@end
