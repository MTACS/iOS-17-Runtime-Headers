
@protocol NCExpandedPlatterObserving <NSObject>

@optional

- (void)expandedPlatter:(id <NCExpandedPlatterObservable>)arg1 didDismissWithReason:(NSString *)arg2;
- (void)expandedPlatter:(id <NCExpandedPlatterObservable>)arg1 willDismissWithReason:(NSString *)arg2;
- (void)expandedPlatterDidPresent:(id <NCExpandedPlatterObservable>)arg1;
- (void)expandedPlatterWillPresent:(id <NCExpandedPlatterObservable>)arg1;
- (void)userInteractionDidEndForExpandedPlatter:(id <NCExpandedPlatterObservable>)arg1;
- (void)userInteractionWillBeginForExpandedPlatter:(id <NCExpandedPlatterObservable>)arg1;

@end
