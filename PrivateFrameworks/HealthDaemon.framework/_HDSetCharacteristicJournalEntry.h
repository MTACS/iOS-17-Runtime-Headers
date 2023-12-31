
@interface _HDSetCharacteristicJournalEntry : HDJournalEntry {
    HKCharacteristicType * _dataType;
    id  _value;
}

@property (nonatomic, readonly) HKCharacteristicType *dataType;
@property (nonatomic, readonly) id value;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dataType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)value;

@end
