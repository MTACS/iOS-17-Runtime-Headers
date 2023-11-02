
@interface HMDCoreAnalyticsLogEventObserverDelegate : NSObject <HMMCoreAnalyticsLogEventObserverDelegate> {
    NSDictionary * _aggregatedHomeCategorizationDimensions;
    NSDictionary * _aggregatedHomeDimensions;
    <HMDCoreAnalyticsLogEventObserverDelegateDataSource> * _dataSource;
    NSDictionary * _deviceCapabilitiesAndEnablementsDimensions;
    NSMutableDictionary * _homeDimensions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly) NSDictionary *aggregatedHomeCategorizationDimensions;
@property (nonatomic, readonly) NSDictionary *aggregatedHomeDimensions;
@property (nonatomic, readonly) <HMDCoreAnalyticsLogEventObserverDelegateDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *deviceCapabilitiesAndEnablementsDimensions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *homeDimensions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAggregatedHomeDimensionsToEventDictionary:(id)arg1;
- (void)addCommonDimensionsToEventDictionary:(id)arg1;
- (void)addDimensionsForAccessoryIdentifier:(id)arg1 toEventDictionary:(id)arg2;
- (void)addDimensionsForHome:(id)arg1 toEventDictionary:(id)arg2;
- (id)aggregatedHomeCategorizationDimensions;
- (id)aggregatedHomeDimensions;
- (void)configurationChanged;
- (id)dataSource;
- (id)deviceCapabilitiesAndEnablementsDimensions;
- (id)dimensionsForHome:(id)arg1;
- (id)homeDimensions;
- (id)initWithDataSource:(id)arg1;

@end
