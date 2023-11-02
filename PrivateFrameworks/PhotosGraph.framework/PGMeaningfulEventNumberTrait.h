
@interface PGMeaningfulEventNumberTrait : PGMeaningfulEventTrait {
    double  _value;
}

@property (nonatomic, readonly) double value;

- (id)debugDescriptionWithMomentNode:(id)arg1;
- (id)initWithNumberValue:(double)arg1;
- (bool)isActive;
- (double)value;

@end
