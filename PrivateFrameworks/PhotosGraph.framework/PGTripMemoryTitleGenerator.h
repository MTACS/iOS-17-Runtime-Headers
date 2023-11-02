
@interface PGTripMemoryTitleGenerator : PGTitleGenerator {
    PGGraphAreaNodeCollection * _areaNodes;
    PGGraphHighlightGroupNodeCollection * _highlightGroupNodeAsCollection;
    PGGraphLocationNodeCollection * _locationNodes;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (id)_locationTitle;
- (id)_timeTitleForTrip;
- (id)_timeTitleForTripAndWeekend;
- (id)_timeTitleForWeekend;
- (bool)_triggerDefaultTitleGenerationIfNil;
- (id)_typeString;
- (id)initForTestingWithHighlightGroupNodeAsCollection:(id)arg1 type:(unsigned long long)arg2 titleGenerationContext:(id)arg3;
- (id)initWithHighlightGroupNodeAsCollection:(id)arg1 type:(unsigned long long)arg2 titleGenerationContext:(id)arg3;
- (id)initWithHighlightNode:(id)arg1 titleGenerationContext:(id)arg2;
- (id)initWithMomentNodes:(id)arg1 locationNodes:(id)arg2 areaNodes:(id)arg3 type:(unsigned long long)arg4 titleGenerationContext:(id)arg5;
- (id)initWithMomentNodes:(id)arg1 locationNodes:(id)arg2 type:(unsigned long long)arg3 titleGenerationContext:(id)arg4;
- (id)initWithMomentNodes:(id)arg1 type:(unsigned long long)arg2 titleGenerationContext:(id)arg3;
- (unsigned long long)type;

@end
