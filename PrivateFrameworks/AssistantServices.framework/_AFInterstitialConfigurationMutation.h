
@interface _AFInterstitialConfigurationMutation : NSObject <AFInterstitialConfigurationMutating> {
    AFInterstitialConfiguration * _base;
    long long  _gender;
    bool  _isDucking;
    bool  _isTwoShot;
    bool  _isVoiceTrigger;
    NSString * _languageCode;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasStyle : 1; 
        unsigned int hasLanguageCode : 1; 
        unsigned int hasGender : 1; 
        unsigned int hasRecordRoute : 1; 
        unsigned int hasIsVoiceTrigger : 1; 
        unsigned int hasIsDucking : 1; 
        unsigned int hasIsTwoShot : 1; 
        unsigned int hasSpeechEndHostTime : 1; 
    }  _mutationFlags;
    NSString * _recordRoute;
    unsigned long long  _speechEndHostTime;
    long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)getGender;
- (bool)getIsDucking;
- (bool)getIsTwoShot;
- (bool)getIsVoiceTrigger;
- (id)getLanguageCode;
- (id)getRecordRoute;
- (unsigned long long)getSpeechEndHostTime;
- (long long)getStyle;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setGender:(long long)arg1;
- (void)setIsDucking:(bool)arg1;
- (void)setIsTwoShot:(bool)arg1;
- (void)setIsVoiceTrigger:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setRecordRoute:(id)arg1;
- (void)setSpeechEndHostTime:(unsigned long long)arg1;
- (void)setStyle:(long long)arg1;

@end
