
@interface PGCurationPartOfDayTrait : PGCurationTrait {
    unsigned long long  _value;
}

@property (nonatomic, readonly) unsigned long long value;

- (id)debugDescription;
- (id)initWithPartOfDay:(unsigned long long)arg1;
- (bool)isActive;
- (id)niceDescription;
- (unsigned long long)value;

@end
