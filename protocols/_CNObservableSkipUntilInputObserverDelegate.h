
@protocol _CNObservableSkipUntilInputObserverDelegate <NSObject>

@required

- (void)inputDidTerminate;
- (bool)shouldMirrorEvents;

@end
