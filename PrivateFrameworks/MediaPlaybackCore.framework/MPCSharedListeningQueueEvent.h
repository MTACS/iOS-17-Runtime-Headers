
@interface MPCSharedListeningQueueEvent : NSObject {
    MPCSharedListeningQueueEventContentAdded * _addedContent;
    MPCSharedListeningQueueEventContentUpdatedMessage * _contentUpdatedMessage;
    long long  _kind;
    MPCSharedListeningQueueEventPlaybackModeChanged * _playbackMode;
    MPCSharedListeningQueueEventContentPlayedNow * _playedNowContent;
    MPCSharedListeningQueueEventContentRemoved * _removedContent;
    MPCSharedListeningQueueEventContentReordered * _reorderedContent;
    MPCSharedListeningQueueEventContentReplaced * _replacedContent;
}

@property (nonatomic, readonly) MPCSharedListeningQueueEventContentAdded *addedContent;
@property (nonatomic, readonly) MPCSharedListeningQueueEventContentUpdatedMessage *contentUpdatedMessage;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) MPCSharedListeningQueueEventPlaybackModeChanged *playbackMode;
@property (nonatomic, readonly) MPCSharedListeningQueueEventContentPlayedNow *playedNowContent;
@property (nonatomic, readonly) MPCSharedListeningQueueEventContentRemoved *removedContent;
@property (nonatomic, readonly) MPCSharedListeningQueueEventContentReordered *reorderedContent;
@property (nonatomic, readonly) MPCSharedListeningQueueEventContentReplaced *replacedContent;

+ (id)queueEventWithAddedContent:(id)arg1;
+ (id)queueEventWithContentUpdatedMessage:(id)arg1;
+ (id)queueEventWithPlaybackModeChanged:(id)arg1;
+ (id)queueEventWithPlayedNowContent:(id)arg1;
+ (id)queueEventWithRemovedContent:(id)arg1;
+ (id)queueEventWithReorderedContent:(id)arg1;
+ (id)queueEventWithReplacedContent:(id)arg1;

- (void).cxx_destruct;
- (id)addedContent;
- (id)contentUpdatedMessage;
- (id)description;
- (long long)kind;
- (id)playbackMode;
- (id)playedNowContent;
- (id)removedContent;
- (id)reorderedContent;
- (id)replacedContent;

@end
