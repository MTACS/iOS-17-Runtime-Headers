
@interface HUMediaSourceItem : HFItem <MPMediaPickerControllerDelegatePrivate, SSUSoundscapesPickerControllerDelegate> {
    NSString * _bundleIdentifier;
    bool  _continuousPicker;
    <HUMediaPickerDelegate> * _delegate;
    NAFuture * _iconFuture;
    UIImage * _iconImage;
    NSSet * _mediaProfileContainers;
    NSString * _name;
    NSDictionary * _resolveError;
    NAFuture * _resolveFuture;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) bool continuousPicker;
@property (readonly, copy) NSString *debugDescription;
@property <HUMediaPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool failed;
@property (readonly) unsigned long long hash;
@property (readonly) NAFuture *iconFuture;
@property (nonatomic, readonly) UIImage *iconImage;
@property (readonly) NSSet *mediaProfileContainers;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSDictionary *resolveError;
@property (readonly) NAFuture *resolveFuture;
@property (nonatomic, readonly) bool success;
@property (readonly) Class superclass;

+ (id)_musicAppUninstallResolveError;
+ (id)_musicCatalogPlaybackDisabledResolveErrorFor:(unsigned long long)arg1;
+ (id)_storeKitErrorResolveErrorFor:(id)arg1;
+ (id)appleMusicSource;
+ (id)soundScapesSource;

- (void).cxx_destruct;
- (id)_appIconFuture;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (id)_setupAppleMusicPicker;
- (id)_setupSoundScapesPicker;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)_updateAppleMusicSubscriptionStatusForMediaProfiles:(id)arg1 forTarget:(unsigned long long)arg2;
- (id)bundleIdentifier;
- (bool)continuousPicker;
- (id)delegate;
- (id)description;
- (bool)failed;
- (id)iconFuture;
- (id)iconImage;
- (id)initWithBundleIdentifier:(id)arg1 forServiceName:(id)arg2;
- (void)mediaPicker:(id)arg1 didPickPlaybackArchive:(id)arg2;
- (void)mediaPickerCancelled;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)mediaPickerDidSelectPlaybackArchive:(id)arg1 withError:(id)arg2;
- (id)mediaProfileContainers;
- (id)name;
- (id)pickerViewController;
- (id)resolveError;
- (id)resolveForMediaProfiles:(id)arg1 forTarget:(unsigned long long)arg2;
- (id)resolveFuture;
- (void)setBundleIdentifier:(id)arg1;
- (void)setContinuousPicker:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setResolveError:(id)arg1;
- (bool)success;

@end
