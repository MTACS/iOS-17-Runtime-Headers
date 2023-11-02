
@interface CHVisualToLogicalTransformStep : CHPostprocessingStepModifyingOriginalTokens {
    int  _baseDirection;
    struct UBiDi { } * _icuBiDiTransform;
    int  _mode;
}

- (void)dealloc;
- (id)initWithBaseDirection:(int)arg1 mode:(int)arg2;
- (id)process:(id)arg1 options:(id)arg2;

@end
