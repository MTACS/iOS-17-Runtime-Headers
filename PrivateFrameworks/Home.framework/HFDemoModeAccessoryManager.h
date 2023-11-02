
@interface HFDemoModeAccessoryManager : NSObject {
    NSArray * _demoAccessories;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, retain) NSArray *demoAccessories;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

+ (id)_clipStartDateFromComponents:(id)arg1 today:(id)arg2;
+ (id)_demoClipWithURL:(id)arg1 duration:(double)arg2 cameraProfile:(id)arg3;
+ (id)_eventsFromString:(id)arg1 startDate:(id)arg2 cameraProfile:(id)arg3;
+ (id)accessoryProfileName:(id)arg1;
+ (id)accessoryWithContentsOfDictionary:(id)arg1 forHome:(id)arg2;
+ (id)clipsForCameraProfile:(id)arg1;
+ (id)configurationProfileFromAccessoryType:(id)arg1;
+ (id)demoLiveStreamURLForCameraName:(id)arg1;
+ (id)demoModeDirectoryURL;
+ (id)demoSnapshotURLForCameraName:(id)arg1;
+ (id)demoURLWithCameraName:(id)arg1 fileName:(id)arg2 extension:(id)arg3;
+ (id)imageIconDescriptorFromDictionary:(id)arg1;
+ (bool)isInternalAccessoryType:(id)arg1;
+ (bool)isPressDemoModeEnabled;
+ (bool)isValidExternalType:(id)arg1;
+ (id)profileURLForDemoModeAccessoryName:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)accessories;
- (id)demoAccessories;
- (void)dispatchUpdateMessageForAccessory:(id)arg1;
- (id)initWithNullValueSource:(id)arg1;
- (void)saveAccessories;
- (void)setDemoAccessories:(id)arg1;
- (id)valueSource;

@end
