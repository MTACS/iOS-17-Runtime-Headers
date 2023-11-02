
@interface SKEUserSpecificInfo : NSObject <NSSecureCoding> {
    void $__lazy_storage_$_isGroundingConditionallyNeeded;
    void censorSpeech;
    void companionAssistantId;
    void countryCode;
    void didSpeakerChange;
    void explicitContentAllowed;
    void isFirstInteractionForUser;
    void isOnlyUserInHome;
    void lowScoreThreshold;
    void meCard;
    void preferredLanguage;
    void rawVoiceIDScore;
    void temperatureUnit;
    void twentyFourHourTimeDisplay;
    void userAttribute;
    void userId;
    void userIdentityClassification;
    void voiceProfilesInFlight;
    void wasSpeechProfileUsedByASR;
}

@property (nonatomic, readonly) NSString *debugDescription;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
