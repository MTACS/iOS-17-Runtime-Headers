
@interface SBHFakeApplicationPlaceholder : NSObject <SBHApplicationPlaceholder> {
    NSString * _applicationBundleIdentifier;
    NSString * _applicationDisplayName;
    double  _progress;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (getter=isAppClip, nonatomic, readonly) bool appClip;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, copy) NSString *applicationDisplayName;
@property (getter=isCancelable, nonatomic, readonly) bool cancelable;
@property (getter=isCloudDemoted, nonatomic, readonly) bool cloudDemoted;
@property (nonatomic, readonly, copy) NSString *configurationStorageIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDownloading, nonatomic, readonly) bool downloading;
@property (getter=isFailed, nonatomic, readonly) bool failed;
@property (readonly) unsigned long long hash;
@property (getter=isInstalling, nonatomic, readonly) bool installing;
@property (getter=isNewAppInstallFromStore, nonatomic, readonly) bool newAppInstallFromStore;
@property (getter=isPausable, nonatomic, readonly) bool pausable;
@property (getter=isPaused, nonatomic, readonly) bool paused;
@property (getter=isPrioritizable, nonatomic, readonly) bool prioritizable;
@property (nonatomic) double progress;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;
@property (getter=isWaiting, nonatomic, readonly) bool waiting;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)applicationDisplayName;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (id)icon:(id)arg1 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (unsigned long long)priorityForIcon:(id)arg1;
- (double)progress;
- (double)progressPercentForIcon:(id)arg1;
- (long long)progressStateForIcon:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setApplicationDisplayName:(id)arg1;
- (void)setProgress:(double)arg1;
- (id)uniqueIdentifier;

@end
