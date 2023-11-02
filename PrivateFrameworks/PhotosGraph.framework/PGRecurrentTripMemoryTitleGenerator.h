
@interface PGRecurrentTripMemoryTitleGenerator : PGTitleGenerator {
    NSSet * _locationNodes;
}

@property (nonatomic, retain) NSSet *locationNodes;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (id)_locationTitle;
- (id)_timeTitle;
- (id)initWithLocationNodes:(id)arg1 titleGenerationContext:(id)arg2;
- (id)locationNodes;
- (void)setLocationNodes:(id)arg1;

@end
