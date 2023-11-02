
@interface PUAvalancheReviewControllerSpec : NSObject

@property (nonatomic, readonly) double interItemSpacing;
@property (nonatomic, readonly) unsigned long long selectionBadgeCorner;
@property (nonatomic, readonly) struct UIOffset { double x1; double x2; } selectionBadgeOffset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } selectionBadgeSize;

- (bool)allowsInterfaceRotation;
- (double)interItemSpacing;
- (unsigned long long)selectionBadgeCorner;
- (struct UIOffset { double x1; double x2; })selectionBadgeOffset;
- (struct CGSize { double x1; double x2; })selectionBadgeSize;

@end
