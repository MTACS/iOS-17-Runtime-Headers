
@interface PGSpecialPOIResolver : NSObject {
    NSMutableDictionary * _countBySpecialPOI;
    NSArray * _momentNodes;
}

@property (nonatomic, retain) NSMutableDictionary *countBySpecialPOI;
@property (nonatomic, readonly) NSArray *momentNodes;

+ (id)_nameBySpecialPOI;
+ (id)_regionsBySpecialPOI;
+ (bool)specialPOIContainsCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
+ (bool)specialPOINameIsInString:(id)arg1;
+ (unsigned long long)specialPOIsContainingCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
+ (unsigned long long)specialPOIsWithNameInString:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_numberOfMomentsInRegions:(id)arg1 containingAOIName:(id)arg2;
- (unsigned long long)_numberOfMomentsMatchingSpecialPOI:(unsigned long long)arg1;
- (bool)anyMomentContainsSpecialPOI:(unsigned long long)arg1;
- (bool)anyMomentHasPOIAmusementPark;
- (id)countBySpecialPOI;
- (id)initWithMomentNodes:(id)arg1;
- (id)momentNodes;
- (bool)momentsContainSpecialPOI:(unsigned long long)arg1 withMomentRatio:(double)arg2;
- (void)setCountBySpecialPOI:(id)arg1;
- (unsigned long long)specialPOIsInAnyMoment;
- (unsigned long long)specialPOIsWithMomentRatio:(double)arg1;

@end
