
@interface HULocationDeviceManager : NSObject <FMFSessionDelegate> {
    NAFuture * _activeFMFDeviceFuture;
    NAFuture * _availableFMFDevicesFuture;
    FMFSession * _fmfSession;
    NSHashTable * _observers;
}

@property (nonatomic, retain) NAFuture *activeFMFDeviceFuture;
@property (nonatomic, readonly) NAFuture *activeLocationDeviceFuture;
@property (nonatomic, retain) NAFuture *availableFMFDevicesFuture;
@property (nonatomic, readonly) NAFuture *availableLocationDevicesFuture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FMFSession *fmfSession;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_updateActiveFMFDevice:(id)arg1;
- (id)activeFMFDeviceFuture;
- (id)activeLocationDeviceFuture;
- (void)addObserver:(id)arg1;
- (id)availableFMFDevicesFuture;
- (id)availableLocationDevicesFuture;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didUpdateActiveDeviceList:(id)arg1;
- (id)fmfSession;
- (id)init;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setActiveFMFDeviceFuture:(id)arg1;
- (void)setAvailableFMFDevicesFuture:(id)arg1;
- (id)updateActiveLocationDevice:(id)arg1;

@end
