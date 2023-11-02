
@interface NUKeyframeSequenceDouble2 : NUKeyframeSequence {
    void _bias;
    void _scale;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _values;
}

- (void)_compressAndStoreValues:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)initWithInterpolation:(long long)arg1 count:(unsigned long long)arg2 times:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3 values:(/* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg4;
- (id)initWithKeyframeSequence:(id)arg1 values:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2;
- (void)sampleAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)sparseSequence;
- (void)tangentOfKeyframeAtIndex:(long long)arg1;
- (void)valueOfKeyframeAtIndex:(long long)arg1;

@end
