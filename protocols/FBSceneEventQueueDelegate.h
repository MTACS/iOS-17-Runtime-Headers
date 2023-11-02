
@protocol FBSceneEventQueueDelegate <NSObject>

@required

- (void)eventQueueDidDrain:(FBSceneEventQueue *)arg1;
- (void)eventQueueDidUnlock:(FBSceneEventQueue *)arg1;

@end
