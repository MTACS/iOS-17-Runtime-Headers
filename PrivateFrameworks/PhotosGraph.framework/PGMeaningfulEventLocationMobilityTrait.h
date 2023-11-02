
@interface PGMeaningfulEventLocationMobilityTrait : PGMeaningfulEventTrait {
    unsigned long long  _value;
}

@property (nonatomic, readonly) unsigned long long value;

- (id)debugDescriptionWithMomentNode:(id)arg1;
- (id)initWithMobility:(unsigned long long)arg1;
- (bool)isActive;
- (unsigned long long)value;

@end
