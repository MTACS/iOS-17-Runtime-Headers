
@interface DYReplayController : NSObject {
    NSObject<OS_dispatch_queue> * _messageLock;
    NSObject<OS_dispatch_queue> * _messageProcessingQueue;
    NSMutableArray * _messageQueue;
    DYReplayControllerQueue * _profileBlockBackgroundQueue;
    DYReplayControllerQueue * _profileBlockQueue;
    DYCaptureArchiveStack * archiveStack;
    NSMutableArray * experiments;
    id /* block */  origSourceMessageHandler;
    DYPlaybackEngine * playbackEngine;
    NSMutableDictionary * profileInfo;
    NSObject<OS_dispatch_queue> * queue;
    <DYReplayControllerSupport> * replayControllerSupport;
    DYTransportMessage * replayMessage;
    DYTransportSource * source;
    DYTransport * transport;
}

@property (nonatomic, retain) DYCaptureArchiveStack *archiveStack;
@property (nonatomic, retain) NSMutableArray *experiments;
@property (nonatomic, copy) id /* block */ origSourceMessageHandler;
@property (nonatomic, retain) DYPlaybackEngine *playbackEngine;
@property (nonatomic, retain) NSMutableDictionary *profileInfo;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) <DYReplayControllerSupport> *replayControllerSupport;
@property (nonatomic, retain) DYTransportMessage *replayMessage;
@property (nonatomic, retain) DYTransportSource *source;
@property (nonatomic, retain) DYTransport *transport;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)_archiveDirectory;
- (void)_beginDebugArchive;
- (void)_deleteAllArchives;
- (void)_displayPlaybackEngine;
- (void)_endPlayback;
- (bool)_handleArchiveLoadingForPlaybackRequest:(id)arg1 replyKind:(int)arg2;
- (bool)_loadArchives:(id)arg1 error:(id*)arg2;
- (void)_messageLoop;
- (void)_playbackArchiveWithExperiment:(id)arg1 passingFuture:(id)arg2 resolvingFuture:(bool)arg3;
- (id)_playbackCurrentArchiveAndExperiments;
- (id)_popMessage;
- (void)_processMessage:(id)arg1;
- (void)_pushMessage:(id)arg1;
- (void)_recursivePlaybackWithFuture:(id)arg1 usingExperiment:(id)arg2 withToplevelFuture:(id)arg3;
- (id)_replayerControllerSupportForCaptureStore:(id)arg1;
- (id)archiveStack;
- (void)dealloc;
- (id)experiments;
- (bool)informReady;
- (id)init;
- (bool)initializeTransportWith:(id)arg1;
- (id /* block */)origSourceMessageHandler;
- (bool)playbackArchive:(id)arg1;
- (id)playbackEngine;
- (id)profileBlockBackgroundQueue;
- (id)profileBlockQueue;
- (id)profileInfo;
- (id)queue;
- (id)replayControllerSupport;
- (id)replayMessage;
- (void)setArchiveStack:(id)arg1;
- (void)setExperiments:(id)arg1;
- (void)setOrigSourceMessageHandler:(id /* block */)arg1;
- (void)setPlaybackEngine:(id)arg1;
- (void)setProfileInfo:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setReplayControllerSupport:(id)arg1;
- (void)setReplayMessage:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setTransport:(id)arg1;
- (id)source;
- (id)transport;

@end
