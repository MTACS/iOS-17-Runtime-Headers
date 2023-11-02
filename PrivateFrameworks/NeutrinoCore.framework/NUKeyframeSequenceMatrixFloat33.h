
@interface NUKeyframeSequenceMatrixFloat33 : NUKeyframeSequence {
    struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } * _values;
}

- (void)dealloc;
- (id)initWithCount:(unsigned long long)arg1 times:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 values:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })sampleAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })valueOfKeyframeAtIndex:(long long)arg1;

@end
