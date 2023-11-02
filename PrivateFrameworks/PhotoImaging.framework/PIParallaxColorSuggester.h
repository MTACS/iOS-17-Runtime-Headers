
@interface PIParallaxColorSuggester : NSObject {
    NURuleSystem * _system;
}

@property (nonatomic, readonly) NURuleSystem *system;

- (void).cxx_destruct;
- (void)addRuleWithHueMin:(double)arg1 hueMax:(double)arg2 suggestion:(id /* block */)arg3;
- (id)init;
- (id)initWithColorAnalysis:(id)arg1;
- (id)suggestedColorForColor:(id)arg1;
- (id)suggestedColorsForColors:(id)arg1 fromColorPalette:(id)arg2;
- (id)system;

@end
