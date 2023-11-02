
@interface CRTableOutputRegion : CROutputRegion <CROutputRegionLayoutContributing> {
    NSArray * _colQuads;
    NSArray * _rowQuads;
}

@property (readonly) NSArray *cells;
@property (nonatomic, retain) NSArray *colQuads;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *rowQuads;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cells;
- (id)colQuads;
- (bool)contributesToDocumentHierarchy;
- (id)copyWithZone:(struct _NSZone { }*)arg1 copyChildren:(bool)arg2 copyCandidates:(bool)arg3 deepCopy:(bool)arg4;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)arg1 version:(long long)arg2 offset:(unsigned long long*)arg3;
- (id)initWithCells:(id)arg1 quad:(id)arg2 rowQuads:(id)arg3 colQuads:(id)arg4;
- (id)layoutComponents;
- (id)rowQuads;
- (void)setColQuads:(id)arg1;
- (void)setRowQuads:(id)arg1;
- (unsigned long long)type;

@end
