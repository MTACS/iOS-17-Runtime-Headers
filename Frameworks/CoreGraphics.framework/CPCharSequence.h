
@interface CPCharSequence : NSObject <CPCopying, CPDisposable, NSCopying> {
    struct CPPDFChar {} ** charArray;
    unsigned int  length;
    unsigned int  previousSize;
    CPMemoryOwner * sharedMemory;
    unsigned int  size;
    bool  wasMerged;
}

- (void)addChar:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; unsigned short x2; unsigned short x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct CPPDFStyle {} *x8; double x9; int x10; long long x11; }*)arg1;
- (void)addChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; unsigned short x2; unsigned short x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct CPPDFStyle {} *x8; double x9; int x10; long long x11; }*)arg1 length:(unsigned int)arg2;
- (void)addChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; unsigned short x2; unsigned short x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct CPPDFStyle {} *x8; double x9; int x10; long long x11; }*)arg1 length:(unsigned int)arg2 ifTrue:(int (*)arg3 passing:(void*)arg4;
- (void)addCharsFromSequence:(id)arg1;
- (double)averageRotation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsFrom:(unsigned int)arg1 length:(unsigned int)arg2;
- (struct CPPDFChar {}**)charArray;
- (struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; unsigned short x2; unsigned short x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct CPPDFStyle {} *x8; double x9; int x10; long long x11; }*)charAtIndex:(unsigned int)arg1;
- (void)copyToSubsequence:(id)arg1 from:(unsigned int)arg2 length:(unsigned int)arg3;
- (void)copyToSubsequence:(id)arg1 ifTrue:(int (*)arg2 passing:(void*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (id)initSuper;
- (id)initWithChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; unsigned short x2; unsigned short x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct CPPDFStyle {} *x8; double x9; int x10; long long x11; }*)arg1 length:(unsigned int)arg2;
- (id)initWithSizeFor:(unsigned int)arg1;
- (unsigned int)length;
- (bool)map:(int (*)arg1 passing:(void*)arg2;
- (bool)map:(int (*)arg1 whereNeighborsWith:(id)arg2 passing:(void*)arg3;
- (bool)mapToPairs:(int (*)arg1 passing:(void*)arg2;
- (bool)mapToPairsWithIndex:(int (*)arg1 passing:(void*)arg2;
- (bool)mapWithIndex:(int (*)arg1 from:(unsigned int)arg2 length:(unsigned int)arg3 passing:(void*)arg4;
- (bool)mapWithIndex:(int (*)arg1 passing:(void*)arg2;
- (void)merge:(id)arg1 by:(int (*)arg2;
- (void)mergeByAnchorXIncreasingYDecreasing:(id)arg1;
- (void)mergeByAnchorYDecreasingXIncreasing:(id)arg1;
- (id)newSubsequenceFrom:(unsigned int)arg1 length:(unsigned int)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedBounds;
- (void)removeAllChars;
- (void)removeChar;
- (void)removeCharAtIndex:(unsigned int)arg1;
- (void)removeFrom:(unsigned int)arg1;
- (bool)removeSubsequences:(id)arg1 whereTrue:(int (*)arg2 passing:(void*)arg3;
- (bool)removeToSubsequence:(id)arg1 ifTrue:(int (*)arg2 passing:(void*)arg3;
- (void)replaceCharAtIndex:(unsigned int)arg1 withChar:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; unsigned short x2; unsigned short x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct CPPDFStyle {} *x8; double x9; int x10; long long x11; }*)arg2;
- (void)resize:(unsigned int)arg1;
- (void)sortBy:(int (*)arg1;
- (void)sortByAnchorXIncreasingYDecreasing;
- (void)sortByAnchorYDecreasingXIncreasing;
- (void)sortByAnchorYDecreasingXIncreasingApprox;
- (void)splitToSubsequences:(id)arg1 whereTrue:(int (*)arg2 passing:(void*)arg3;
- (bool)wasMerged;

@end
