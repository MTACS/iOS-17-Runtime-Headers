
@interface PGSeasonMemoryTitleGenerator : PGTitleGenerator {
    NSString * _season;
}

@property (nonatomic, retain) NSString *season;

+ (id)seasonSubtitleWithMomentNodes:(id)arg1 seasonName:(id)arg2;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (id)initWithMomentNodes:(id)arg1 seasonName:(id)arg2 titleGenerationContext:(id)arg3;
- (id)season;
- (void)setSeason:(id)arg1;

@end
