
@interface SAUIPlayAudio : SABaseClientBoundCommand

@property (nonatomic, copy) NSNumber *fadeInDuration;
@property (nonatomic, copy) NSNumber *fadeOutDuration;
@property (nonatomic, copy) NSString *hapticLibraryKey;
@property (nonatomic, retain) SAUIAudioData *itemData;
@property (nonatomic, copy) NSString *itemURL;
@property (nonatomic, copy) NSNumber *numberOfLoops;
@property (nonatomic, copy) NSNumber *toneLibraryAlertType;
@property (nonatomic, copy) NSNumber *volume;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

- (id)encodedClassName;
- (id)fadeInDuration;
- (id)fadeOutDuration;
- (id)groupIdentifier;
- (id)hapticLibraryKey;
- (id)itemData;
- (id)itemURL;
- (id)numberOfLoops;
- (bool)requiresResponse;
- (void)setFadeInDuration:(id)arg1;
- (void)setFadeOutDuration:(id)arg1;
- (void)setHapticLibraryKey:(id)arg1;
- (void)setItemData:(id)arg1;
- (void)setItemURL:(id)arg1;
- (void)setNumberOfLoops:(id)arg1;
- (void)setToneLibraryAlertType:(id)arg1;
- (void)setVolume:(id)arg1;
- (id)toneLibraryAlertType;
- (id)volume;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (long long)sruif_usefulUserResultType;

@end
