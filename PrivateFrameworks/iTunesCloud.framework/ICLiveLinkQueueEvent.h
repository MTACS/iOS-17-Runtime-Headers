
@interface ICLiveLinkQueueEvent : NSObject {
    ICLiveLinkQueueEventContentAdded * _contentAdded;
    ICLiveLinkQueueEventContentPlayedNow * _contentPlayedNow;
    ICLiveLinkQueueEventContentRemoved * _contentRemoved;
    ICLiveLinkQueueEventContentReordered * _contentReordered;
    ICLiveLinkQueueEventContentReplaced * _contentReplaced;
    ICLiveLinkQueueEventContentUpdatedMessage * _contentUpdatedMessage;
    long long  _kind;
    ICLiveLinkQueueEventPlaybackModeChanged * _playbackModeChanged;
}

@property (nonatomic, readonly) ICLiveLinkQueueEventContentAdded *contentAdded;
@property (nonatomic, readonly) ICLiveLinkQueueEventContentPlayedNow *contentPlayedNow;
@property (nonatomic, readonly) ICLiveLinkQueueEventContentRemoved *contentRemoved;
@property (nonatomic, readonly) ICLiveLinkQueueEventContentReordered *contentReordered;
@property (nonatomic, readonly) ICLiveLinkQueueEventContentReplaced *contentReplaced;
@property (nonatomic, readonly) ICLiveLinkQueueEventContentUpdatedMessage *contentUpdatedMessage;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) ICLiveLinkQueueEventPlaybackModeChanged *playbackModeChanged;

+ (id)queueEventWithContentAdded:(id)arg1;
+ (id)queueEventWithContentPlayedNow:(id)arg1;
+ (id)queueEventWithContentRemoved:(id)arg1;
+ (id)queueEventWithContentReordered:(id)arg1;
+ (id)queueEventWithContentReplaced:(id)arg1;
+ (id)queueEventWithContentUpdatedMessage:(id)arg1;
+ (id)queueEventWithPlaybackModeChanged:(id)arg1;

- (void).cxx_destruct;
- (id)contentAdded;
- (id)contentPlayedNow;
- (id)contentRemoved;
- (id)contentReordered;
- (id)contentReplaced;
- (id)contentUpdatedMessage;
- (id)description;
- (long long)kind;
- (id)playbackModeChanged;

@end
