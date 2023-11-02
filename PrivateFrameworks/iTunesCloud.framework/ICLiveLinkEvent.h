
@interface ICLiveLinkEvent : NSObject {
    ICLiveLinkCustomEvent * _customEvent;
    ICLiveLinkIdentity * _participant;
    ICLiveLinkPlaybackEvent * _playbackEvent;
    ICLiveLinkQueueEvent * _queueEvent;
    ICLiveLinkReactionEvent * _reactionEvent;
    ICLiveLinkSessionEvent * _sessionEvent;
    long long  _type;
}

@property (nonatomic, readonly) ICLiveLinkCustomEvent *customEvent;
@property (nonatomic, readonly) ICLiveLinkIdentity *participant;
@property (nonatomic, readonly) ICLiveLinkPlaybackEvent *playbackEvent;
@property (nonatomic, readonly, copy) NSString *primaryReferencedIdentifier;
@property (nonatomic, readonly) ICLiveLinkQueueEvent *queueEvent;
@property (nonatomic, readonly) ICLiveLinkReactionEvent *reactionEvent;
@property (nonatomic, readonly) ICLiveLinkSessionEvent *sessionEvent;
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
- (id)primaryReferencedIdentifier;
- (id)queueEvent;
- (id)reactionEvent;
- (id)sessionEvent;
- (long long)type;

@end
