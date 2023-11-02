
@interface FBSDisplayLayoutMonitorConfiguration : NSObject {
    BSServiceConnectionEndpoint * _endpoint;
    bool  _needsUserInteractivePriority;
    id /* block */  _transitionHandler;
}

@property (nonatomic, readonly, copy) BSServiceConnectionEndpoint *endpoint;
@property (nonatomic) bool needsUserInteractivePriority;
@property (nonatomic, copy) id /* block */ transitionHandler;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (id)configurationForDefaultMainDisplayMonitor;
+ (id)configurationWithEndpoint:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithEndpoint:(id)arg1;
- (id)endpoint;
- (id)init;
- (bool)needsUserInteractivePriority;
- (void)setNeedsUserInteractivePriority:(bool)arg1;
- (void)setTransitionHandler:(id /* block */)arg1;
- (id /* block */)transitionHandler;

// Image: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices

+ (id)configurationForCarDisplayMonitor;
+ (id)configurationForCarInstrumentsDisplayMonitor;
+ (id)crs_endpointForCarDisplayMonitor;
+ (id)crs_endpointForCarInstrumentsDisplayMonitor;
+ (id)crs_endpointForInstance:(id)arg1;

@end
