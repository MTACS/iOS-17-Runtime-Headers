
@interface PGChildOutdoorMemoryTitleGenerator : PGTitleGenerator {
    PGGraphPersonNode * _personNode;
}

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (id)initWithMomentNodes:(id)arg1 personNode:(id)arg2 type:(long long)arg3 titleGenerationContext:(id)arg4;

@end
