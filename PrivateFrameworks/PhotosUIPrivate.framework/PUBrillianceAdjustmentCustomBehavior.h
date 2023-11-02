
@interface PUBrillianceAdjustmentCustomBehavior : NSObject <PUAdjustmentCustomBehavior> {
    bool  _calculatingStatistics;
}

@property bool calculatingStatistics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)calculatingStatistics;
- (void)dataSource:(id)arg1 adjustmentInfo:(id)arg2 modifyValue:(double)arg3;
- (void)dataSource:(id)arg1 adjustmentInfo:(id)arg2 setEnabled:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)populateSmartToneStatisticsForDataSource:(id)arg1 adjustmentInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setCalculatingStatistics:(bool)arg1;

@end
