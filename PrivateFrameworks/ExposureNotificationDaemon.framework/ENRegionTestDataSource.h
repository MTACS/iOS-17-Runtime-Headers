
@interface ENRegionTestDataSource : NSObject <ENRegionMonitorDataSource> {
    NSObject<ENRegionMonitorSourceDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<ENRegionMonitorSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentRegionVisit;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithDelegate:(id)arg1;
- (void)regionChanged;
- (void)setDelegate:(id)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;

@end
