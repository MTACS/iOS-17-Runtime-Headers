
@interface CRTableCellOutputRegion : CROutputRegion <CROutputRegionLayoutContributing> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _colRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rowRange;
}

@property struct _NSRange { unsigned long long x1; unsigned long long x2; } colRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } rowRange;
@property (readonly) Class superclass;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })colRange;
- (bool)contributesToDocumentHierarchy;
- (id)copyWithZone:(struct _NSZone { }*)arg1 copyChildren:(bool)arg2 copyCandidates:(bool)arg3 deepCopy:(bool)arg4;
- (id)crCodableDataRepresentation;
- (id)initWithBlock:(id)arg1 quad:(id)arg2 rowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 colRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)initWithCRCodableDataRepresentation:(id)arg1 version:(long long)arg2 offset:(unsigned long long*)arg3;
- (id)layoutComponents;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rowRange;
- (void)setColRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)shouldAlwaysAddDelimiter;
- (unsigned long long)type;

@end
