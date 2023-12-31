
@interface FBWorkspaceEventQueue : BSEventQueue

+ (id)sharedInstance;

- (void)_noteQueueDidLock;
- (void)_noteQueueDidUnlock;
- (void)_noteWillCancelEventsWithName:(id)arg1 count:(unsigned long long)arg2;
- (void)_noteWillExecuteEvent:(id)arg1;
- (void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2;
- (bool)_shouldProcessEvent:(id)arg1 enqueuedDuringExecutionOfEvent:(id)arg2;
- (void)executeOrAppendEvent:(id)arg1;
- (void)executeOrPrependEvent:(id)arg1;
- (void)executeOrPrependEvents:(id)arg1;

@end
