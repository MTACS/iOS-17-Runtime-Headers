
@interface CPZoneFilter : NSObject {
    double  minArea;
    CPPage * page;
}

+ (void)filterZonesInPage:(id)arg1;

- (void)filterZonesInZone:(id)arg1;
- (void)findBackgroundGraphicsInZone:(id)arg1;
- (void)findUsedGraphicsInZone:(id)arg1;
- (id)initWithPage:(id)arg1;

@end
