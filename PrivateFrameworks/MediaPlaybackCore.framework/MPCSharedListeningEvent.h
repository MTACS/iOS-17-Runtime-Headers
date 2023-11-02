
@interface MPCSharedListeningEvent : NSObject {
    MPCSharedListeningCustomEvent * _customEvent;
    MPCSharedListeningEventParticipant * _participant;
    MPCSharedListeningPlaybackEvent * _playbackEvent;
    MPCSharedListeningQueueEvent * _queueEvent;
    MPCSharedListeningReactionEvent * _reactionEvent;
    MPCSharedListeningSessionEvent * _sessionEvent;
    long long  _type;
}

@property (nonatomic, readonly) MPCSharedListeningCustomEvent *customEvent;
@property (nonatomic, readonly) MPCSharedListeningEventParticipant *participant;
@property (nonatomic, readonly) MPCSharedListeningPlaybackEvent *playbackEvent;
@property (nonatomic, readonly) MPCSharedListeningQueueEvent *queueEvent;
@property (nonatomic, readonly) MPCSharedListeningReactionEvent *reactionEvent;
@property (nonatomic, readonly) MPCSharedListeningSessionEvent *sessionEvent;
@property (nonatomic, readonly) long long type;

+ (id)eventWithCustomEvent:(id)arg1 participant:(id)arg2;
+ (id)eventWithPlaybackEvent:(id)arg1 participant:(id)arg2;
+ (id)eventWithQueueEvent:(id)arg1 participant:(id)arg2;
+ (id)eventWithReactionEvent:(id)arg1 participant:(id)arg2;
+ (id)eventWithSessionEvent:(id)arg1 participant:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithType:(long long)arg1 participant:(id)arg2;
- (id)customEvent;
- (id)description;
- (id)participant;
- (id)playbackEvent;
- (id)queueEvent;
- (id)reactionEvent;
- (id)sessionEvent;
- (long long)type;

@end
