
@protocol SHSheetUserDefaultActivityProxy <SHSheetActivityProxy>

@required

- (bool)canEdit;
- (bool)canHide;
- (bool)canMove;
- (bool)isHidden;

@end
