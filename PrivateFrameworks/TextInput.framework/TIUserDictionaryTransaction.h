
@interface TIUserDictionaryTransaction : NSObject <NSSecureCoding> {
    TIUserDictionaryEntryValue * _valueToDelete;
    TIUserDictionaryEntryValue * _valueToInsert;
}

@property (nonatomic, retain) TIUserDictionaryEntryValue *valueToDelete;
@property (nonatomic, retain) TIUserDictionaryEntryValue *valueToInsert;

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
