
@interface _UITransientHapticFeedback : _UIFeedback <_UIFeedbackCoreHapticsPlayerReuse_Internal, _UIFeedbackDiscretePlayable, _UIFeedbackTransientHaptic_Internal> {
    bool  _highPriority;
    float  _intensity;
    float  _sharpness;
}

@property (nonatomic, readonly) bool canReuseCoreHapticsPlayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHighPriority, nonatomic, readonly) bool highPriority;
@property (nonatomic, readonly) float intensity;
@property (nonatomic, readonly) float sharpness;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;
+ (id)transientHapticFeedbackWithIntensity:(float)arg1 sharpness:(float)arg2;
+ (id)type;

- (unsigned long long)_effectivePlayableFeedbackTypes;
- (id)_playableProtocol;
- (bool)canReuseCoreHapticsPlayer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (float)intensity;
- (bool)isEqual:(id)arg1;
- (bool)isHighPriority;
- (float)sharpness;

@end
