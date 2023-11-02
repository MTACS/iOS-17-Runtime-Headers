
@interface INPrivateMediaIntentData : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    long long  _asrConfidenceLevel;
    NSNumber * _asrConfidenceScore;
    NSString * _fallbackUsername;
    INHomeAutomationEntityProvider * _homeAutomationEntityProvider;
    NSNumber * _isAppAttributionRequired;
    NSNumber * _isAppCorrection;
    long long  _nlConfidenceLevel;
    NSNumber * _nlConfidenceScore;
    INAppIdentifier * _proxiedThirdPartyAppInfo;
    NSString * _resolvedSharedUserID;
    INSpeakerIDInfo * _speakerIDInfo;
    NSNumber * _useDialogMemoryForAttribution;
    INWholeHouseAudioMetadata * _wholeHouseAudioMetadata;
}

@property (nonatomic, readonly) long long asrConfidenceLevel;
@property (nonatomic, readonly, copy) NSNumber *asrConfidenceScore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fallbackUsername;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INHomeAutomationEntityProvider *homeAutomationEntityProvider;
@property (nonatomic, copy) NSNumber *isAppAttributionRequired;
@property (nonatomic, readonly, copy) NSNumber *isAppCorrection;
@property (nonatomic, readonly) long long nlConfidenceLevel;
@property (nonatomic, readonly, copy) NSNumber *nlConfidenceScore;
@property (nonatomic, copy) INAppIdentifier *proxiedThirdPartyAppInfo;
@property (nonatomic, copy) NSString *resolvedSharedUserID;
@property (nonatomic, copy) INSpeakerIDInfo *speakerIDInfo;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *useDialogMemoryForAttribution;
@property (nonatomic, readonly, copy) INWholeHouseAudioMetadata *wholeHouseAudioMetadata;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (long long)asrConfidenceLevel;
- (id)asrConfidenceScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackUsername;
- (unsigned long long)hash;
- (id)homeAutomationEntityProvider;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpeakerIDInfo:(id)arg1 proxiedThirdPartyAppInfo:(id)arg2 isAppAttributionRequired:(id)arg3 useDialogMemoryForAttribution:(id)arg4 isAppCorrection:(id)arg5 fallbackUsername:(id)arg6 wholeHouseAudioMetadata:(id)arg7 nlConfidenceScore:(id)arg8 nlConfidenceLevel:(long long)arg9 asrConfidenceScore:(id)arg10 asrConfidenceLevel:(long long)arg11;
- (id)initWithSpeakerIDInfo:(id)arg1 proxiedThirdPartyAppInfo:(id)arg2 isAppAttributionRequired:(id)arg3 useDialogMemoryForAttribution:(id)arg4 isAppCorrection:(id)arg5 fallbackUsername:(id)arg6 wholeHouseAudioMetadata:(id)arg7 nlConfidenceScore:(id)arg8 nlConfidenceLevel:(long long)arg9 asrConfidenceScore:(id)arg10 asrConfidenceLevel:(long long)arg11 resolvedSharedUserID:(id)arg12;
- (id)initWithSpeakerIDInfo:(id)arg1 proxiedThirdPartyAppInfo:(id)arg2 isAppAttributionRequired:(id)arg3 useDialogMemoryForAttribution:(id)arg4 isAppCorrection:(id)arg5 fallbackUsername:(id)arg6 wholeHouseAudioMetadata:(id)arg7 nlConfidenceScore:(id)arg8 nlConfidenceLevel:(long long)arg9 asrConfidenceScore:(id)arg10 asrConfidenceLevel:(long long)arg11 resolvedSharedUserID:(id)arg12 homeAutomationEntityProvider:(id)arg13;
- (id)isAppAttributionRequired;
- (id)isAppCorrection;
- (bool)isEqual:(id)arg1;
- (long long)nlConfidenceLevel;
- (id)nlConfidenceScore;
- (id)proxiedThirdPartyAppInfo;
- (id)resolvedSharedUserID;
- (void)setFallbackUsername:(id)arg1;
- (void)setIsAppAttributionRequired:(id)arg1;
- (void)setProxiedThirdPartyAppInfo:(id)arg1;
- (void)setResolvedSharedUserID:(id)arg1;
- (void)setSpeakerIDInfo:(id)arg1;
- (void)setUseDialogMemoryForAttribution:(id)arg1;
- (id)speakerIDInfo;
- (id)useDialogMemoryForAttribution;
- (id)wholeHouseAudioMetadata;

@end
