
@interface BWFigCaptureDeviceVendorDeviceState : NSObject {
    NSMutableDictionary * _afDriverShortStatisticsByPortType;
    NSMutableArray * _controlledStreams;
    BWFigCaptureDevice * _device;
    NSObject<OS_dispatch_source> * _deviceCloseTimer;
    int  _deviceUsageCount;
    bool  _inUseForPublishing;
    NSMutableArray * _portTypesAllowingStreamControlLoss;
    NSMutableSet * _portTypesToCheckForAFDriverShortStatistics;
    NSMutableSet * _portTypesToCheckForToFAFEstimator;
    bool  _shutDownDueToSystemPressure;
    NSMutableArray * _streamsControlledByOtherClients;
    NSMutableArray * _streamsInUse;
    NSMutableArray * _streamsToKeepControlled;
    NSMutableDictionary * _tofAFEstimatorClientApplicationIDByPortType;
    NSMutableDictionary * _tofAFEstimatorResultsByPortType;
}

@property (nonatomic, readonly) NSMutableDictionary *afDriverShortStatisticsByPortType;
@property (nonatomic, readonly) NSMutableArray *controlledStreams;
@property (nonatomic, readonly) BWFigCaptureDevice *device;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *deviceCloseTimer;
@property (nonatomic) int deviceUsageCount;
@property (nonatomic) bool inUseForPublishing;
@property (nonatomic, retain) NSMutableArray *portTypesAllowingStreamControlLoss;
@property (nonatomic, readonly) NSMutableSet *portTypesToCheckForAFDriverShortStatistics;
@property (nonatomic, readonly) NSMutableSet *portTypesToCheckForToFAFEstimator;
@property (nonatomic) bool shutDownDueToSystemPressure;
@property (nonatomic, readonly) NSMutableArray *streamsControlledByOtherClients;
@property (nonatomic, readonly) NSMutableArray *streamsInUse;
@property (nonatomic, readonly) NSArray *streamsRequiringControlControlledByOtherClients;
@property (nonatomic, readonly) NSMutableArray *streamsToKeepControlled;
@property (nonatomic, readonly) NSMutableDictionary *tofAFEstimatorClientApplicationIDByPortType;
@property (nonatomic, readonly) NSMutableDictionary *tofAFEstimatorResultsByPortType;

- (id)afDriverShortStatisticsByPortType;
- (id)controlledStreams;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)device;
- (id)deviceCloseTimer;
- (int)deviceUsageCount;
- (bool)inUseForPublishing;
- (id)initWithDevice:(id)arg1;
- (id)portTypesAllowingStreamControlLoss;
- (id)portTypesToCheckForAFDriverShortStatistics;
- (id)portTypesToCheckForToFAFEstimator;
- (void)setDeviceCloseTimer:(id)arg1;
- (void)setDeviceUsageCount:(int)arg1;
- (void)setInUseForPublishing:(bool)arg1;
- (void)setPortTypesAllowingStreamControlLoss:(id)arg1;
- (void)setShutDownDueToSystemPressure:(bool)arg1;
- (bool)shutDownDueToSystemPressure;
- (id)streamsControlledByOtherClients;
- (id)streamsInUse;
- (id)streamsRequiringControlControlledByOtherClients;
- (id)streamsToKeepControlled;
- (id)tofAFEstimatorClientApplicationIDByPortType;
- (id)tofAFEstimatorResultsByPortType;

@end
