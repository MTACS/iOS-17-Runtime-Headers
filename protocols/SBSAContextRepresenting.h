
@protocol SBSAContextRepresenting <NSObject, NSCopying>

@required

- (NSArray *)animatedTransitionResults;
- (double)displayScale;
- (NSArray *)elapsedTimerDescriptions;
- (NSArray *)gestureDescriptions;
- (NSArray *)requests;

@end
