
@interface VCScreenCaptureManager : NSObject <VCScreenCapturePickerDelegate> {
    PAAccessInterval * _accessInterval;
    SCContentFilter * _contentFilter;
    VCScreenCapturePicker * _picker;
    VCScreenShare * _pickerClientScreenShare;
    NSMutableDictionary * _screenShare;
    SCStream * _screenStream;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

@property (nonatomic, readonly) SCContentFilter *contentFilter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VCScreenCapturePicker *picker;
@property (nonatomic, retain) SCStream *screenStream;
@property (readonly) Class superclass;

+ (bool)canScreenSharePrivateContent:(id)arg1;
+ (long long)contentTypeForFilter:(id)arg1;
+ (id)sharedManager;

- (id)attributesForContentFilter:(id)arg1;
- (id)contentFilter;
- (void)createPicker;
- (void)dealloc;
- (void)endPrivacyAccountingInterval:(id)arg1;
- (id)errorForAttributesError:(id)arg1;
- (id)getErrorDictionaryFromError:(id)arg1;
- (id)init;
- (void)invalidatePicker;
- (bool)isPickerClientProcessId:(id)arg1;
- (id)newCaptureSourceID;
- (id)newScreenShareWithConfig:(id)arg1 pid:(id)arg2;
- (id)picker;
- (void)picker:(id)arg1 pickedContentFilter:(id)arg2 forStream:(id)arg3 error:(id)arg4;
- (void)registerBlocksForService;
- (void)removePickerClientScreenShare:(id)arg1;
- (void)screenCaptureStartFor:(id)arg1 didSucceed:(bool)arg2 withError:(id)arg3;
- (void)screenCaptureStopFor:(id)arg1 didSucceed:(bool)arg2 withError:(id)arg3;
- (id)screenShareDictionary:(id)arg1;
- (id)screenStream;
- (void)setScreenStream:(id)arg1;
- (bool)shouldUpdateFilter:(id)arg1;
- (void)startPrivacyAccountingInterval:(id)arg1;
- (id)startScreenShare:(id)arg1;
- (id)stopScreenShare:(id)arg1;
- (id)stopScreenShareAndNotifyDelegate:(id)arg1;
- (id)updateCurrentPickerScreenCapture;
- (id)updateScreenCapture:(id)arg1 withConfig:(id)arg2;

@end
