
@interface HFMediaPlaybackActionBuilder : HFActionBuilder {
    NSSet * _accessories;
    NSSet * _mediaProfiles;
    HFPlaybackArchive * _playbackArchive;
    long long  _targetPlayState;
    NSNumber * _targetVolume;
}

@property (nonatomic, copy) NSSet *accessories;
@property (nonatomic, readonly) HMMediaPlaybackAction *action;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSSet *mediaProfiles;
@property (nonatomic, retain) HFPlaybackArchive *playbackArchive;
@property (nonatomic) long long targetPlayState;
@property (nonatomic, retain) NSNumber *targetVolume;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (void)_ensureConsistency;
- (id)accessories;
- (bool)canUpdateWithActionBuilder:(id)arg1;
- (id)commitItem;
- (id)compareToObject:(id)arg1;
- (id)containedAccessoryRepresentables;
- (id)copyForCreatingNewAction;
- (id)createNewAction;
- (void)defaultActionIfMediaActionInvalid;
- (id)description;
- (bool)hasSameTargetAsAction:(id)arg1;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (bool)isAffectedByEndEvents;
- (bool)isMediaActionValid:(id*)arg1;
- (id)localizedDescription;
- (id)mediaProfileContainersForAccessories:(id)arg1 home:(id)arg2;
- (id)mediaProfiles;
- (id)performValidation;
- (id)playbackArchive;
- (bool)requiresDeviceUnlock;
- (void)setAccessories:(id)arg1;
- (void)setMediaProfiles:(id)arg1;
- (void)setPlaybackArchive:(id)arg1;
- (void)setTargetPlayState:(long long)arg1;
- (void)setTargetVolume:(id)arg1;
- (long long)targetPlayState;
- (id)targetVolume;
- (bool)updateWithActionBuilder:(id)arg1;
- (id)validationError;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)filteredToAccessoriesShownInStatus;

@end
