
@interface CSVoiceTriggerRTModelRequestOptionsMutable : NSObject <CSVoiceTriggerRTModelRequestOptionsMutablity> {
    CSCoreSpeechServicesAccessoryInfo * _mAccessoryInfo;
    NSNumber * _mAccessoryModelType;
    bool  _mAllowMph;
    NSUUID * _mEndpointId;
    NSNumber * _mEngineMajorVersion;
    NSNumber * _mEngineMinorVersion;
    NSString * _mFallbackPhraseType;
    NSString * _mSiriLocale;
    NSNumber * _mUserSelectedPhrasetype;
}

@property (nonatomic, retain) CSCoreSpeechServicesAccessoryInfo *mAccessoryInfo;
@property (nonatomic, readonly) NSNumber *mAccessoryModelType;
@property (nonatomic) bool mAllowMph;
@property (nonatomic, readonly) NSUUID *mEndpointId;
@property (nonatomic, readonly) NSNumber *mEngineMajorVersion;
@property (nonatomic, readonly) NSNumber *mEngineMinorVersion;
@property (nonatomic, retain) NSString *mFallbackPhraseType;
@property (nonatomic, retain) NSString *mSiriLocale;
@property (nonatomic, retain) NSNumber *mUserSelectedPhrasetype;

- (void).cxx_destruct;
- (id)mAccessoryInfo;
- (id)mAccessoryModelType;
- (bool)mAllowMph;
- (id)mEndpointId;
- (id)mEngineMajorVersion;
- (id)mEngineMinorVersion;
- (id)mFallbackPhraseType;
- (id)mSiriLocale;
- (id)mUserSelectedPhrasetype;
- (void)setAccessoryModelType:(id)arg1;
- (void)setAllowMph:(bool)arg1;
- (void)setCSCoreSpeechServicesAccessoryInfo:(id)arg1;
- (void)setEndpointId:(id)arg1;
- (void)setEngineMajorVersion:(id)arg1;
- (void)setEngineMinorVersion:(id)arg1;
- (void)setMAccessoryInfo:(id)arg1;
- (void)setMAllowMph:(bool)arg1;
- (void)setMFallbackPhraseType:(id)arg1;
- (void)setMSiriLocale:(id)arg1;
- (void)setMUserSelectedPhrasetype:(id)arg1;
- (void)setSiriLocale:(id)arg1;
- (void)setUserSelectedPhraseType:(id)arg1;

@end
