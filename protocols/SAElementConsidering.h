
@protocol SAElementConsidering <NSObject>

@required

- (NSArray *)elementsOrderedByPromotionFromTemporallyOrderedElements:(NSArray *)arg1 withPreviousOrdering:(NSArray *)arg2;

@optional

- (bool)elementRequiresBeingDisplayedAlone:(id <SAElement>)arg1;

@end
