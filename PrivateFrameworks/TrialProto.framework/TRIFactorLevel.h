
@interface TRIFactorLevel : TRIPBMessage

@property (nonatomic, retain) TRIFactor *factor;
@property (nonatomic) bool hasFactor;
@property (nonatomic) bool hasLevel;
@property (nonatomic, retain) TRILevel *level;

// Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto

+ (id)descriptor;
+ (id)hashForFactorLevels:(id)arg1;

- (id)uniqueDataRepresentation;

// Image: /System/Library/Frameworks/Speech.framework/Speech

- (id)_cesr_assetId;
- (id)_cesr_language;
- (bool)_cesr_preferOverServer;
- (bool)_cesr_supportsAutoPunctuation;
- (bool)_cesr_supportsContinuousListening;
- (bool)_cesr_supportsEmojiRecognition;
- (bool)_cesr_supportsOnDeviceSearch;
- (bool)_cesr_supportsVoiceCommands;

@end
