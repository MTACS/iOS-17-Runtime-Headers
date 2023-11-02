
@interface FBSceneEventQueue : BSEventQueue {
    <FBSceneEventQueueDelegate> * _delegate;
}

@property (nonatomic) <FBSceneEventQueueDelegate> *delegate;

- (void).cxx_destruct;
- (void)_noteQueueDidDrain;
- (void)_noteQueueDidUnlock;
- (void)_noteWillExecuteEvent:(id)arg1;
- (void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
