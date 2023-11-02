
@interface CHRemoveSpacesFromEnglishAndKoreanParticlesStep : CHPostprocessingStepModifyingOriginalTokens {
    NSCharacterSet * _koreanParticlesCharSet;
}

- (void).cxx_destruct;
- (id)init;
- (id)process:(id)arg1 options:(id)arg2;

@end
