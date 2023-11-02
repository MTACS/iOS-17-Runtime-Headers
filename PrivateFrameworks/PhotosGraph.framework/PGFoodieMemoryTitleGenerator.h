
@interface PGFoodieMemoryTitleGenerator : PGTitleGenerator {
    PGGraphAddressNode * _addressNode;
    PGGraphBusinessNode * _businessNode;
    PGGraphLocationCityNode * _cityNode;
    PGGraphPersonNode * _personNode;
    PGGraphNode<PGGraphLocationOrArea> * _tripLocationNode;
    unsigned long long  _tripTitleLocationType;
    long long  _type;
}

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (id)_timeTitleForTripAndWeekend;
- (id)_typeString;
- (id)initWithMomentNodes:(id)arg1 addressNode:(id)arg2 titleGenerationContext:(id)arg3;
- (id)initWithMomentNodes:(id)arg1 businessNode:(id)arg2 titleGenerationContext:(id)arg3;
- (id)initWithMomentNodes:(id)arg1 cityNode:(id)arg2 titleGenerationContext:(id)arg3;
- (id)initWithMomentNodes:(id)arg1 personNode:(id)arg2 titleGenerationContext:(id)arg3;
- (id)initWithMomentNodes:(id)arg1 tripLocationNode:(id)arg2 tripTitleLocationType:(unsigned long long)arg3 titleGenerationContext:(id)arg4;

@end
