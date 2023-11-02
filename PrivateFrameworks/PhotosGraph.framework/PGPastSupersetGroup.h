
@interface PGPastSupersetGroup : NSObject {
    NSDateInterval * _dateInterval;
    PGGraphLocationNodeCollection * _densestCloseLocationNodes;
    PGGraphMomentNodeCollection * _momentNodes;
    PGGraphLocationStateNodeCollection * _stateNodeAsCollection;
    PGGraphLocationCityNodeCollection * _supersetCityNodes;
}

@property (retain) NSDateInterval *dateInterval;
@property (retain) PGGraphLocationNodeCollection *densestCloseLocationNodes;
@property (retain) PGGraphMomentNodeCollection *momentNodes;
@property (retain) PGGraphLocationStateNodeCollection *stateNodeAsCollection;
@property (retain) PGGraphLocationCityNodeCollection *supersetCityNodes;

+ (id)pastSupersetGroupWithMomentNodes:(id)arg1 dateInterval:(id)arg2 supersetCityNodeAsCollection:(id)arg3 densestCloseLocationNodeAsCollection:(id)arg4 locationHelper:(id)arg5;

- (void).cxx_destruct;
- (id)dateInterval;
- (id)densestCloseLocationNodes;
- (id)momentNodes;
- (void)setDateInterval:(id)arg1;
- (void)setDensestCloseLocationNodes:(id)arg1;
- (void)setMomentNodes:(id)arg1;
- (void)setStateNodeAsCollection:(id)arg1;
- (void)setSupersetCityNodes:(id)arg1;
- (id)stateNodeAsCollection;
- (id)supersetCityNodes;

@end
