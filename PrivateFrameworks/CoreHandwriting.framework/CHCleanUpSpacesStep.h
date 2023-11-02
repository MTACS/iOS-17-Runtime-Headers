
@interface CHCleanUpSpacesStep : CHPostprocessingStepModifyingOriginalTokens {
    NSLocale * _locale;
}

- (void).cxx_destruct;
- (id)initWithLocale:(id)arg1;
- (id)process:(id)arg1 options:(id)arg2;

@end
