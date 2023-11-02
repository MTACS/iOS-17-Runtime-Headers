
@protocol CRCTLDDelegate <NSObject>

@required

- (long long)groupingConstraintForRegion1:(id <CRDirectionalRegion>)arg1 region2:(id <CRDirectionalRegion>)arg2;

@optional

- (CRGroupRegion *)groupWithQuad:(CRNormalizedQuad *)arg1 layoutDirection:(unsigned long long)arg2 subregions:(NSArray *)arg3;

@end
