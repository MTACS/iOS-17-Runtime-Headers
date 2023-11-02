
@interface _UIFeedbackAudioFilePattern : _UIFeedback <_UIFeedbackCoreHapticsCustomAudio_Internal, _UIFeedbackCoreHapticsPlayerReuse_Internal, _UIFeedbackDiscretePlayable, _UIFeedbackFilePlayable_Internal> {
    bool  _canReuseCoreHapticsPlayer;
    bool  _disableEventUseVolumeEnvelope;
    NSURL * _fileURL;
    bool  _highPriority;
}

@property (nonatomic) bool canReuseCoreHapticsPlayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableEventUseVolumeEnvelope;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (getter=isHighPriority, nonatomic, readonly) bool highPriority;
@property (readonly) Class superclass;

+ (id)feedbackPatternFromFile:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)type;

- (void).cxx_destruct;
- (unsigned long long)_effectivePlayableFeedbackTypes;
- (bool)canReuseCoreHapticsPlayer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)disableEventUseVolumeEnvelope;
- (id)fileURL;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHighPriority;
- (void)setCanReuseCoreHapticsPlayer:(bool)arg1;
- (void)setDisableEventUseVolumeEnvelope:(bool)arg1;

@end
