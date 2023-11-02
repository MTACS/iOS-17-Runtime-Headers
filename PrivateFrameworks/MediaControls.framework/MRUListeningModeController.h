
@interface MRUListeningModeController : NSObject <MRUSystemOutputDeviceRouteControllerObserver> {
    NSArray * _availablePrimaryListeningModes;
    NSArray * _availableSecondaryListeningModes;
    <MRUListeningModeControllerDelegate> * _delegate;
    MRUSystemOutputDeviceRouteController * _outputDeviceRouteController;
    NSString * _primaryListeningMode;
    NSString * _secondaryListeningMode;
}

@property (nonatomic, readonly) NSArray *availablePrimaryListeningModes;
@property (nonatomic, readonly) NSArray *availableSecondaryListeningModes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUListeningModeControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (nonatomic, readonly) NSString *primaryListeningMode;
@property (nonatomic, readonly) NSString *secondaryListeningMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)availablePrimaryListeningModes;
- (id)availableSecondaryListeningModes;
- (id)delegate;
- (id)initWithOutputDeviceRouteController:(id)arg1;
- (id)listeningModeErrorMessageForOutputDevice:(id)arg1;
- (id)outputDeviceRouteController;
- (id)primaryListeningMode;
- (id)secondaryListeningMode;
- (void)setDelegate:(id)arg1;
- (void)setListeningMode:(id)arg1 forOutputDeviceRoute:(id)arg2 previousListeningMode:(id)arg3 completion:(id /* block */)arg4;
- (void)setPrimaryListeningMode:(id)arg1 completion:(id /* block */)arg2;
- (void)setSecondaryListeningMode:(id)arg1 completion:(id /* block */)arg2;
- (id)sortedListeningModes:(id)arg1;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)arg1;
- (void)updatePrimaryListeningMode;
- (void)updateSecondaryListeningMode;

@end
