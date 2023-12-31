
@protocol UITextDragRequest <NSObject>

@required

- (UITextRange *)dragRange;
- (<UIDragSession> *)dragSession;
- (NSArray *)existingItems;
- (bool)isSelected;
- (NSArray *)suggestedItems;

@end
