
@interface PKStrokeCoherenceBase : PKStroke {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identity;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  strokeNode;
}

- (void).cxx_destruct;
- (id)_newStrokeWithSubstrokes:(id)arg1 inDrawing:(id)arg2;
- (id)init;
- (id)initWithData:(id)arg1 id:(id)arg2 flags:(struct { union { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 32; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; } x_1_1_1; unsigned long long x_1_1_2; } x1; })arg3 ink:(id)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 substrokes:(id)arg6;
- (id)initWithInk:(id)arg1 strokePath:(id)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 mask:(id)arg4;
- (id)initWithInk:(id)arg1 strokePath:(id)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 mask:(id)arg4 randomSeed:(unsigned int)arg5;

@end
