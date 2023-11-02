
@interface CMOdometerSuitabilityManager : NSObject {
    CMOdometerSuitabilityManagerProxy * _odometerSuitabilityManagerProxy;
}

@property (nonatomic, readonly) CMOdometerSuitabilityManagerProxy *odometerSuitabilityManagerProxy;

- (void)dealloc;
- (id)init;
- (id)odometerSuitabilityManagerProxy;
- (void)startOdometerSuitabilityUpdatesWithHandler:(id /* block */)arg1;
- (void)stopOdometerSuitabilityUpdates;

@end
