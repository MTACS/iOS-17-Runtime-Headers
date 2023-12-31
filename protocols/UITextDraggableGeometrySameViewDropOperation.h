
@protocol UITextDraggableGeometrySameViewDropOperation <NSObject>

@required

- (unsigned long long)operation;
- (NSArray *)sourceRanges;
- (UITextRange *)targetRange;
- (NSAttributedString *)text;

@end
