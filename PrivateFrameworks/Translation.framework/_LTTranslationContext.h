
@interface _LTTranslationContext : NSObject <NSSecureCoding> {
    NSString * _appIdentifier;
    long long  _asrConfidenceThreshold;
    NSArray * _asrModelURLs;
    unsigned int  _audioSessionID;
    bool  _autoEndpoint;
    bool  _autodetectLanguage;
    bool  _censorSpeech;
    long long  _dataSharingOptInStatus;
    bool  _enableVAD;
    bool  _forceSourceLocale;
    bool  _isFinal;
    long long  _lidThreshold;
    _LTLocalePair * _localePair;
    NSUUID * _logIdentifier;
    NSURL * _mtModelURL;
    NSURL * _outputFileURL;
    bool  _overrideOngoingSessionIfNeeded;
    long long  _route;
    NSString * _sessionID;
    long long  _sourceOrigin;
    NSURL * _sourceURL;
    bool  _supportsGenderDisambiguation;
    long long  _taskHint;
    NSString * _trustedClientIdentifier;
    double  _ttsPlaybackRate;
    NSString * _uniqueID;
    NSString * _untrustedClientIdentifier;
}

@property (nonatomic, copy) NSString *appIdentifier;
@property (nonatomic) long long asrConfidenceThreshold;
@property (nonatomic, copy) NSArray *asrModelURLs;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) bool autoEndpoint;
@property (nonatomic) bool autodetectLanguage;
@property (nonatomic) bool censorSpeech;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic) long long dataSharingOptInStatus;
@property (nonatomic) bool enableVAD;
@property (nonatomic) bool forceSourceLocale;
@property (nonatomic) bool isFinal;
@property (nonatomic) long long lidThreshold;
@property (nonatomic, copy) _LTLocalePair *localePair;
@property (nonatomic, copy) NSUUID *logIdentifier;
@property (nonatomic, copy) NSURL *mtModelURL;
@property (nonatomic, copy) NSURL *outputFileURL;
@property (nonatomic) bool overrideOngoingSessionIfNeeded;
@property (nonatomic) long long route;
@property (nonatomic, copy) NSString *sessionID;
@property (nonatomic) long long sourceOrigin;
@property (nonatomic, copy) NSURL *sourceURL;
@property (nonatomic) bool supportsGenderDisambiguation;
@property (nonatomic) long long taskHint;
@property (nonatomic, copy) NSString *trustedClientIdentifier;
@property (nonatomic) double ttsPlaybackRate;
@property (nonatomic, copy) NSString *uniqueID;
@property (nonatomic, copy) NSString *untrustedClientIdentifier;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appIdentifier;
- (long long)asrConfidenceThreshold;
- (id)asrModelURLs;
- (unsigned int)audioSessionID;
- (bool)autoEndpoint;
- (bool)autodetectLanguage;
- (bool)censorSpeech;
- (id)clientIdentifier;
- (long long)dataSharingOptInStatus;
- (bool)enableVAD;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceSourceLocale;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isFinal;
- (long long)lidThreshold;
- (id)localePair;
- (id)logIdentifier;
- (id)mtModelURL;
- (id)outputFileURL;
- (bool)overrideOngoingSessionIfNeeded;
- (long long)route;
- (id)sanitizedCopyForUntrustedTextTranslation;
- (id)sessionID;
- (void)setAppIdentifier:(id)arg1;
- (void)setAsrConfidenceThreshold:(long long)arg1;
- (void)setAsrModelURLs:(id)arg1;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setAutoEndpoint:(bool)arg1;
- (void)setAutodetectLanguage:(bool)arg1;
- (void)setCensorSpeech:(bool)arg1;
- (void)setDataSharingOptInStatus:(long long)arg1;
- (void)setEnableVAD:(bool)arg1;
- (void)setForceSourceLocale:(bool)arg1;
- (void)setIsFinal:(bool)arg1;
- (void)setLidThreshold:(long long)arg1;
- (void)setLocalePair:(id)arg1;
- (void)setLogIdentifier:(id)arg1;
- (void)setMtModelURL:(id)arg1;
- (void)setOutputFileURL:(id)arg1;
- (void)setOverrideOngoingSessionIfNeeded:(bool)arg1;
- (void)setRoute:(long long)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSourceOrigin:(long long)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setSupportsGenderDisambiguation:(bool)arg1;
- (void)setTaskHint:(long long)arg1;
- (void)setTrustedClientIdentifier:(id)arg1;
- (void)setTtsPlaybackRate:(double)arg1;
- (void)setUniqueID:(id)arg1;
- (void)setUntrustedClientIdentifier:(id)arg1;
- (long long)sourceOrigin;
- (id)sourceURL;
- (bool)supportsGenderDisambiguation;
- (long long)taskHint;
- (id)trustedClientIdentifier;
- (double)ttsPlaybackRate;
- (id)uniqueID;
- (id)untrustedClientIdentifier;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

- (long long)_ospreyDataSharingStatus;
- (id)_ospreySpeechTranslationRequestWithHybridEndpointer:(bool)arg1;
- (id)_ospreyTTSRequestWithText:(id)arg1;
- (id)_ospreyTextToSpeechTranslationRequestWithText:(id)arg1;
- (id)_ttsVoiceStringWithLocale:(id)arg1;
- (id)redactIfNeeded:(id)arg1;
- (id)sequoiaClientHeaderValue;

@end
