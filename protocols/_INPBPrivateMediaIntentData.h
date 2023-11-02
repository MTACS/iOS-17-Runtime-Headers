
@protocol _INPBPrivateMediaIntentData <NSObject>

@required

- (int)StringAsAsrConfidenceLevel:(NSString *)arg1;
- (int)StringAsNlConfidenceLevel:(NSString *)arg1;
- (int)asrConfidenceLevel;
- (NSString *)asrConfidenceLevelAsString:(int)arg1;
- (float)asrConfidenceScore;
- (_INPBString *)fallbackUsername;
- (bool)hasAsrConfidenceLevel;
- (bool)hasAsrConfidenceScore;
- (bool)hasFallbackUsername;
- (bool)hasHomeAutomationEntityProvider;
- (bool)hasIsAppAttributionRequired;
- (bool)hasIsAppCorrection;
- (bool)hasNlConfidenceLevel;
- (bool)hasNlConfidenceScore;
- (bool)hasProxiedThirdPartyAppInfo;
- (bool)hasResolvedSharedUserID;
- (bool)hasSpeakerIDInfo;
- (bool)hasUseDialogMemoryForAttribution;
- (bool)hasWholeHouseAudioMetadata;
- (_INPBHomeAutomationEntityProvider *)homeAutomationEntityProvider;
- (bool)isAppAttributionRequired;
- (bool)isAppCorrection;
- (int)nlConfidenceLevel;
- (NSString *)nlConfidenceLevelAsString:(int)arg1;
- (float)nlConfidenceScore;
- (_INPBAppIdentifier *)proxiedThirdPartyAppInfo;
- (_INPBString *)resolvedSharedUserID;
- (void)setAsrConfidenceLevel:(int)arg1;
- (void)setAsrConfidenceScore:(float)arg1;
- (void)setFallbackUsername:(_INPBString *)arg1;
- (void)setHasAsrConfidenceLevel:(bool)arg1;
- (void)setHasAsrConfidenceScore:(bool)arg1;
- (void)setHasIsAppAttributionRequired:(bool)arg1;
- (void)setHasIsAppCorrection:(bool)arg1;
- (void)setHasNlConfidenceLevel:(bool)arg1;
- (void)setHasNlConfidenceScore:(bool)arg1;
- (void)setHasUseDialogMemoryForAttribution:(bool)arg1;
- (void)setHomeAutomationEntityProvider:(_INPBHomeAutomationEntityProvider *)arg1;
- (void)setIsAppAttributionRequired:(bool)arg1;
- (void)setIsAppCorrection:(bool)arg1;
- (void)setNlConfidenceLevel:(int)arg1;
- (void)setNlConfidenceScore:(float)arg1;
- (void)setProxiedThirdPartyAppInfo:(_INPBAppIdentifier *)arg1;
- (void)setResolvedSharedUserID:(_INPBString *)arg1;
- (void)setSpeakerIDInfo:(_INPBSpeakerIDInfo *)arg1;
- (void)setUseDialogMemoryForAttribution:(bool)arg1;
- (void)setWholeHouseAudioMetadata:(_INPBWholeHouseAudioMetadata *)arg1;
- (_INPBSpeakerIDInfo *)speakerIDInfo;
- (bool)useDialogMemoryForAttribution;
- (_INPBWholeHouseAudioMetadata *)wholeHouseAudioMetadata;

@end
