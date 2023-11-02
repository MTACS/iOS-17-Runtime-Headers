
@interface _UIContinuousFeedback : _UIFeedback <_UIFeedbackContinuousPlayable> {
    double  _duration;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

+ (id)continuousFeedbackForType:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)type;

- (id)_debugDictionary;
- (double)_effectiveDuration;
- (unsigned long long)_effectiveEventType;
- (id)_playableProtocol;
- (void)_playedAtTime:(double)arg1 engine:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (double)duration;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
