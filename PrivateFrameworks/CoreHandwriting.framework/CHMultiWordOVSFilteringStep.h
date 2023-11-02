
@interface CHMultiWordOVSFilteringStep : CHPostprocessingStep {
    CHStringOVSChecker * _ovsStringChecker;
}

- (void).cxx_destruct;
- (id)initWithOVSStringChecker:(id)arg1;
- (id)process:(id)arg1 options:(id)arg2;

@end
