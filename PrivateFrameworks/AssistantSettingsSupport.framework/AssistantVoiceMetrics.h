
@interface AssistantVoiceMetrics : NSObject <NSSecureCoding> {
    bool  _downloadError;
    long long  _downloadObservationBeginTimestamp;
    long long  _downloadObservationEndTimestamp;
    float  _downloadObservationProgress;
    bool  _isCellularAllowed;
    NSString * _lastVoicePreviewedKey;
    NSMutableSet * _mutableUniqueVoicesPreviewed;
    bool  _previewedSuccessfully;
    bool  _sentOnce;
    NSString * _voiceDownloadKey;
    unsigned long long  _voicesPreviewed;
}

@property bool downloadError;
@property (readonly) long long downloadObservationBeginTimestamp;
@property (readonly) long long downloadObservationEndTimestamp;
@property float downloadObservationProgress;
@property bool isCellularAllowed;
@property (readonly) NSString *lastVoicePreviewedKey;
@property (retain) NSMutableSet *mutableUniqueVoicesPreviewed;
@property bool previewedSuccessfully;
@property (nonatomic) bool sentOnce;
@property (readonly) unsigned long long uniqueVoicesPreviewed;
@property (readonly) NSString *voiceDownloadKey;
@property (readonly) unsigned long long voicesPreviewed;

+ (id)keyForLanguage:(id)arg1 gender:(long long)arg2;
+ (id)keyForLanguage:(id)arg1 name:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_clockFactor;
- (void)beginDownloadObservation;
- (id)description;
- (id)dictionaryMetrics;
- (bool)downloadError;
- (long long)downloadObservationBeginTimestamp;
- (double)downloadObservationDuration;
- (long long)downloadObservationEndTimestamp;
- (float)downloadObservationProgress;
- (void)encodeWithCoder:(id)arg1;
- (void)endDownloadObservation;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCellularAllowed;
- (id)lastVoicePreviewedKey;
- (id)mutableUniqueVoicesPreviewed;
- (bool)previewedSuccessfully;
- (void)sendAnalyticsEvent;
- (bool)sentOnce;
- (void)setDownloadError:(bool)arg1;
- (void)setDownloadObservationProgress:(float)arg1;
- (void)setIsCellularAllowed:(bool)arg1;
- (void)setMutableUniqueVoicesPreviewed:(id)arg1;
- (void)setPreviewedSuccessfully:(bool)arg1;
- (void)setSentOnce:(bool)arg1;
- (void)setVoiceDownloadForLanguageCode:(id)arg1 gender:(long long)arg2;
- (void)setVoiceDownloadForLanguageCode:(id)arg1 name:(id)arg2;
- (void)setVoicePreviewedForLanguageCode:(id)arg1 gender:(long long)arg2;
- (void)setVoicePreviewedForLanguageCode:(id)arg1 name:(id)arg2;
- (unsigned long long)uniqueVoicesPreviewed;
- (id)voiceDownloadKey;
- (unsigned long long)voicesPreviewed;

@end
