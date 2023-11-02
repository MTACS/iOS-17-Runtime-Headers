
@interface PGMeaningfulEventPartOfDayTrait : PGMeaningfulEventTrait {
    unsigned long long  _forbiddenValue;
    unsigned long long  _value;
}

@property (nonatomic, readonly) unsigned long long forbiddenValue;
@property (nonatomic, readonly) unsigned long long value;

- (id)debugDescriptionWithMomentNode:(id)arg1;
- (unsigned long long)forbiddenValue;
- (id)initWithPartOfDay:(unsigned long long)arg1;
- (id)initWithPartOfDay:(unsigned long long)arg1 forbiddenPartOfDay:(unsigned long long)arg2;
- (bool)isActive;
- (unsigned long long)value;

@end
