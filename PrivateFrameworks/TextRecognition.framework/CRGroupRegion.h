
@interface CRGroupRegion : NSObject <CRDirectionalRegion, CRGrouping> {
    CRNormalizedQuad * _boundingQuad;
    unsigned long long  _layoutDirection;
    NSArray * _subregions;
}

@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long layoutDirection;
@property (retain) NSArray *subregions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)boundingQuad;
- (id)initWithBoundingQuad:(id)arg1 layoutDirection:(unsigned long long)arg2 subregions:(id)arg3;
- (unsigned long long)layoutDirection;
- (void)setSubregions:(id)arg1;
- (id)subregions;

@end
