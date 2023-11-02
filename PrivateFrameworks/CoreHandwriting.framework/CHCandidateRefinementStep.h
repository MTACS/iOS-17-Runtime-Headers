
@interface CHCandidateRefinementStep : CHPostprocessingStepModifyingOriginalTokens {
    bool  _shouldKeepAlternativeLengths;
    bool  _shouldKeepDuplicateTokenIDs;
    bool  _shouldKeepOriginalSpelling;
    bool  _shouldKeepOutOfLexiconAlternatives;
    bool  _shouldKeepOutOfPatternCandidates;
    bool  _shouldKeepSubstrings;
}

- (id)initWithShouldKeepOutOfPatternCandidates:(bool)arg1 shouldKeepDuplicateTokenIDs:(bool)arg2 shouldKeepOutOfLexiconAlternatives:(bool)arg3 shouldKeepAlternativeLengths:(bool)arg4 shouldKeepSubstrings:(bool)arg5 shouldKeepOriginalSpelling:(bool)arg6;
- (id)process:(id)arg1 options:(id)arg2;

@end
