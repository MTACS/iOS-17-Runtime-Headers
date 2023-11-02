
@interface _HKOxygenSaturationIntegratedContextDelegate : NSObject <HKOverlayRoomViewControllerIntegratedContextDelegate> {
    HKInteractiveChartOverlayNamedDataSource * _cacheDataSource;
    unsigned long long  _context;
    HKDisplayType * _primaryDisplayType;
}

@property (nonatomic, readonly) HKLineSeries *alternateLineSeries;
@property (nonatomic, retain) HKInteractiveChartOverlayNamedDataSource *cacheDataSource;
@property (nonatomic) unsigned long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKDisplayType *primaryDisplayType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_statItemForTimeScope:(long long)arg1;
- (id)alternateLineSeries;
- (id)cacheDataSource;
- (unsigned long long)context;
- (id)formatterForTimescope:(long long)arg1;
- (id)initWithCustomDataSource:(id)arg1 primaryDisplayType:(id)arg2 context:(unsigned long long)arg3;
- (id)primaryDisplayType;
- (void)setCacheDataSource:(id)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setPrimaryDisplayType:(id)arg1;

@end
