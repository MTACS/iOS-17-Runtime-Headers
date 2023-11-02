
@protocol UITextDragDropSupport <NSObject>

@required

- (bool)accessibilityCanDrag;
- (UIDragInteraction *)dragInteraction;
- (UIDropInteraction *)dropInteraction;
- (void)invalidateDropCaret;
- (bool)isDragActive;
- (bool)isDropActive;
- (void)notifyTextInteraction;

@end
