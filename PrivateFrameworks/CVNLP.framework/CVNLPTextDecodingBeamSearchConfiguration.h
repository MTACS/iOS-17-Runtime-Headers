
@interface CVNLPTextDecodingBeamSearchConfiguration : CVNLPTextDecodingConfiguration {
    unsigned long long  _beamWidth;
    unsigned long long  _pathCount;
    bool  _pruneProblematicMixedScriptWordPaths;
    id /* block */  _scoringFunction;
    bool  _shouldApplyWordLMToLastWord;
    bool  _shouldOptimizeAlignment;
}

@property (nonatomic) unsigned long long beamWidth;
@property (nonatomic) unsigned long long pathCount;
@property (nonatomic) bool pruneProblematicMixedScriptWordPaths;
@property (nonatomic, readonly) id /* block */ scoringFunction;
@property (nonatomic) bool shouldApplyWordLMToLastWord;
@property (nonatomic) bool shouldOptimizeAlignment;

- (unsigned long long)beamWidth;
- (id)initWithCommitActionBehavior:(id /* block */)arg1 beamWidth:(unsigned long long)arg2 pathCount:(unsigned long long)arg3 shouldOptimizeAlignment:(bool)arg4;
- (id)initWithCommitActionBehavior:(id /* block */)arg1 beamWidth:(unsigned long long)arg2 pathCount:(unsigned long long)arg3 shouldOptimizeAlignment:(bool)arg4 pruneProblematicMixedScriptWordPaths:(bool)arg5;
- (id)initWithCommitActionBehavior:(id /* block */)arg1 scoringFunction:(id /* block */)arg2 beamWidth:(unsigned long long)arg3 pathCount:(unsigned long long)arg4;
- (id)initWithCommitActionBehavior:(id /* block */)arg1 scoringFunction:(id /* block */)arg2 beamWidth:(unsigned long long)arg3 pathCount:(unsigned long long)arg4 shouldOptimizeAlignment:(bool)arg5;
- (id)initWithCommitActionBehavior:(id /* block */)arg1 scoringFunction:(id /* block */)arg2 beamWidth:(unsigned long long)arg3 pathCount:(unsigned long long)arg4 shouldOptimizeAlignment:(bool)arg5 pruneProblematicMixedScriptWordPaths:(bool)arg6;
- (id)initWithCommitActionBehavior:(id /* block */)arg1 scoringFunction:(id /* block */)arg2 beamWidth:(unsigned long long)arg3 pathCount:(unsigned long long)arg4 shouldOptimizeAlignment:(bool)arg5 pruneProblematicMixedScriptWordPaths:(bool)arg6 shouldApplyWordLMToLastWord:(bool)arg7;
- (unsigned long long)pathCount;
- (bool)pruneProblematicMixedScriptWordPaths;
- (id /* block */)scoringFunction;
- (void)setBeamWidth:(unsigned long long)arg1;
- (void)setPathCount:(unsigned long long)arg1;
- (void)setPruneProblematicMixedScriptWordPaths:(bool)arg1;
- (void)setShouldApplyWordLMToLastWord:(bool)arg1;
- (void)setShouldOptimizeAlignment:(bool)arg1;
- (bool)shouldApplyWordLMToLastWord;
- (bool)shouldOptimizeAlignment;

@end
