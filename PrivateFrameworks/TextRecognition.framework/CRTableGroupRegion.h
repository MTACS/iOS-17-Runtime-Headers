
@interface CRTableGroupRegion : CRGroupRegion {
    NSArray * _cells;
    NSArray * _columnQuads;
    NSArray * _rowQuads;
}

@property (readonly) NSArray *cells;
@property (readonly) NSArray *columnQuads;
@property (readonly) NSArray *rowQuads;

- (void).cxx_destruct;
- (id)cells;
- (id)columnQuads;
- (id)initWithBoundingQuad:(id)arg1 layoutDirection:(unsigned long long)arg2 cells:(id)arg3 lineRegions:(id)arg4 rowQuads:(id)arg5 columnQuads:(id)arg6;
- (id)rowQuads;

@end
