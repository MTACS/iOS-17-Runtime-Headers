
@interface PGPlaceMemoryTitleGenerator : PGTitleGenerator {
    PGGraphNode * _placeNode;
}

@property (nonatomic, retain) PGGraphNode *placeNode;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (id)_placeTitle;
- (id)initWithMomentNodes:(id)arg1 placeNode:(id)arg2 titleGenerationContext:(id)arg3;
- (id)placeNode;
- (void)setPlaceNode:(id)arg1;

@end
