
@interface OADCustomShapeGeometry : OADShapeGeometry {
    NSMutableArray * mFormulas;
    void * mGeometryCoordSpace;
    void * mLimo;
    NSMutableArray * mPaths;
    NSMutableArray * mTextBodyRects;
}

- (void).cxx_destruct;
- (void)addFormula:(id)arg1;
- (void)addPath:(id)arg1;
- (void)addTextBodyRect:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)equivalentCustomGeometry;
- (id)formulaAtIndex:(unsigned long long)arg1;
- (unsigned long long)formulaCount;
- (struct CsRect<int> { int x1[4]; })geometryCoordSpace;
- (id)init;
- (struct CsPoint<int> { int x1[2]; })limo;
- (id)pathAtIndex:(unsigned long long)arg1;
- (unsigned long long)pathCount;
- (void)setGeometryCoordSpace:(struct CsRect<int> { int x1[4]; })arg1;
- (void)setLimo:(struct CsPoint<int> { int x1[2]; })arg1;
- (id)textBodyRectAtIndex:(unsigned long long)arg1;
- (unsigned long long)textBodyRectCount;
- (int)type;

@end
