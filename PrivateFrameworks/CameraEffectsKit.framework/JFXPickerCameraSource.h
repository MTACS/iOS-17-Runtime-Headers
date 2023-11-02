
@interface JFXPickerCameraSource : NSObject {
    NSMutableSet * _registeredPickers;
    NSObject<OS_dispatch_queue> * _registeredPickersQueue;
    PVLivePlayerCameraSource * _registeredPickersSource;
}

@property (nonatomic, readonly) bool isPickerPreviewing;
@property (nonatomic, readonly) PVLivePlayerCameraSource *pickerSource;
@property (nonatomic, retain) NSMutableSet *registeredPickers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *registeredPickersQueue;
@property (nonatomic, retain) PVLivePlayerCameraSource *registeredPickersSource;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (bool)isPickerPreviewing;
- (id)pickerSource;
- (void)registerPickerAsPreviewingWithObject:(id)arg1;
- (id)registeredPickers;
- (id)registeredPickersQueue;
- (id)registeredPickersSource;
- (void)setRegisteredPickers:(id)arg1;
- (void)setRegisteredPickersQueue:(id)arg1;
- (void)setRegisteredPickersSource:(id)arg1;
- (void)unregisterPickerAsPreviewingWithObject:(id)arg1;

@end
