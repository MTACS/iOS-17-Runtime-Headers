
@protocol PHAStorytellingOnDemandTaskHandlerDelegate <NSObject>

@required

- (void)onDemandTaskHandlerDidFinishOperation:(PHAStorytellingOnDemandTaskHandler *)arg1;
- (void)onDemandTaskHandlerStartingOperation:(PHAStorytellingOnDemandTaskHandler *)arg1;

@end
