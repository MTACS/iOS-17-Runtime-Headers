
@interface PGPastSupersetMemoryTitleGenerator : PGTitleGenerator {
    NSDateInterval * _supersetDateInterval;
    PGGraphLocationNode * _supersetLocationNode;
}

@property (readonly) NSDateInterval *supersetDateInterval;
@property (readonly) PGGraphLocationNode *supersetLocationNode;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (id)_locationTitle;
- (id)_timeTitle;
- (id)initWithMomentNodes:(id)arg1 supersetLocationNode:(id)arg2 supersetDateInterval:(id)arg3 titleGenerationContext:(id)arg4;
- (id)supersetDateInterval;
- (id)supersetLocationNode;

@end
