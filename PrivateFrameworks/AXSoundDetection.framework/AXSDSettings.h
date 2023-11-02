
@interface AXSDSettings : HCSettings

@property (nonatomic, readonly) NSArray *enabledKShotDetectorIdentifiers;
@property (nonatomic, retain) NSArray *enabledSoundDetectionTypes;
@property (nonatomic) bool isActivelyTrainingAKShotModel;
@property (nonatomic, readonly) NSData *kShotDetectors;
@property (nonatomic) bool kShotShouldSaveCurrentSound;
@property (nonatomic, readonly) NSMutableDictionary *kShotSoundRecordings;
@property (nonatomic) bool micDisabled;
@property (nonatomic, readonly) NSString *pipedInFile;
@property (nonatomic, readonly) NSString *retrainModelIdentifier;
@property (nonatomic, readonly) bool soundDetectionEnabled;
@property (nonatomic) long long soundDetectionKShotListeningState;
@property (nonatomic, retain) NSMutableDictionary *soundDetectionSnoozeDictionary;
@property (nonatomic) long long soundDetectionState;
@property (nonatomic, readonly) NSArray *supportedSoundDetectionTypes;
@property (nonatomic) bool ultronIsRunning;
@property (nonatomic) bool ultronSupportEnabled;

// Image: /System/Library/PrivateFrameworks/AXSoundDetection.framework/AXSoundDetection

+ (void)initialize;
+ (id)sharedInstance;
+ (id)stringForSoundDetectionState:(long long)arg1;

- (void)addSnoozeDateToSnoozeDictionary:(id)arg1 forKey:(id)arg2;
- (void)addSoundDetectionType:(id)arg1;
- (id)enabledKShotDetectorIdentifiers;
- (id)enabledSoundDetectionTypes;
- (bool)hasCustomHapticForDetector:(id)arg1;
- (bool)hasCustomToneForDetector:(id)arg1;
- (bool)isActivelyTrainingAKShotModel;
- (id)kShotDetectors;
- (bool)kShotShouldSaveCurrentSound;
- (id)kShotSoundRecordings;
- (id)keysToSync;
- (id)localizedNameForSoundDetectionType:(id)arg1;
- (void)logMessage:(id)arg1;
- (bool)micDisabled;
- (void)pipeFile:(id)arg1;
- (id)pipedInFile;
- (id)preferenceDomainForPreferenceKey:(id)arg1;
- (id)preferenceKeyForSelector:(SEL)arg1;
- (void)removeAllSoundDetectionTypes;
- (void)removeSoundDetectionType:(id)arg1;
- (id)retrainModelIdentifier;
- (void)retrainModelWithIdentifier:(id)arg1;
- (void)setEnabledKShotDetectorIdentifiers:(id)arg1;
- (void)setEnabledSoundDetectionTypes:(id)arg1;
- (void)setIsActivelyTrainingAKShotModel:(bool)arg1;
- (void)setKShotDetectors:(id)arg1;
- (void)setKShotShouldSaveCurrentSound:(bool)arg1;
- (void)setKShotSoundRecordings:(id)arg1;
- (void)setMicDisabled:(bool)arg1;
- (void)setPipedInFile:(id)arg1;
- (void)setRetrainModelIdentifier:(id)arg1;
- (void)setSoundDetectionKShotListeningState:(long long)arg1;
- (void)setSoundDetectionSnoozeDictionary:(id)arg1;
- (void)setSoundDetectionState:(long long)arg1;
- (void)setSupportedSoundDetectionTypes:(id)arg1;
- (void)setUltronIsRunning:(bool)arg1;
- (void)setUltronSupportEnabled:(bool)arg1;
- (bool)shouldStoreLocally;
- (id)sortedSupportedSoundDetectionTypes;
- (id)soundAlertTopicForSoundDetectionType:(id)arg1;
- (bool)soundDetectionEnabled;
- (long long)soundDetectionKShotListeningState;
- (id)soundDetectionSnoozeDictionary;
- (long long)soundDetectionState;
- (id)supportedSoundDetectionTypes;
- (bool)ultronIsRunning;
- (bool)ultronSupportEnabled;

// Image: /System/Library/PrivateFrameworks/AXSoundDetectionUI.framework/AXSoundDetectionUI

- (void)addKShotDetector:(id)arg1;
- (id)decodeKShotDetectors:(id)arg1;
- (id)decodedKShotDetectors;
- (bool)deleteModelForDetector:(id)arg1;
- (void)deleteRecordingLinksForDetector:(id)arg1;
- (bool)deleteTrainingFilesForDetector:(id)arg1;
- (id)detectorForIdentifier:(id)arg1;
- (void)disableDetector:(id)arg1;
- (void)editKShotDetectorName:(id)arg1 newName:(id)arg2;
- (void)enableDetector:(id)arg1;
- (void)encodeAndSaveKShotDetectors:(id)arg1;
- (id)encodeKShotDetectors:(id)arg1;
- (bool)hasCustomHapticForKshotDetector:(id)arg1;
- (bool)hasCustomToneForKshotDetector:(id)arg1;
- (id)kShotCategoryForDetectionType:(id)arg1;
- (id)kShotSoundRecordingsForDetector:(id)arg1;
- (void)removeAllKShotDetectors;
- (void)removeKShotDetector:(id)arg1;
- (void)setDetectorIsEnabled:(id)arg1 isEnabled:(bool)arg2;
- (void)setKShotDetectorIsEnabled:(id)arg1 isEnabled:(bool)arg2;
- (void)setKShotDetectorModelFailed:(id)arg1 modelFailed:(bool)arg2;

@end
