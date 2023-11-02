
@interface SBMutableContinuousExposeAutoLayoutItem : SBContinuousExposeAutoLayoutItem

@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPosition;
@property (nonatomic) struct CGPoint { double x1; double x2; } compactedPosition;
@property (getter=isFullyOccluded, nonatomic) bool fullyOccluded;
@property (getter=isInDefaultPosition, nonatomic) bool inDefaultPosition;
@property (getter=isOverlapped, nonatomic) bool overlapped;
@property (getter=isPartiallyCoveredByPeekingItem, nonatomic) bool partiallyCoveredByPeekingItem;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) struct CGPoint { double x1; double x2; } unoccludedPeekingPosition;

@end
