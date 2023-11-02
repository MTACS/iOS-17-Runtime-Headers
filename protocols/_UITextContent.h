
@protocol _UITextContent <NSObject>

@required

- (NSTextContainer *)textContainer;
- (_UITextLayoutControllerBase<_UITextLayoutController> *)textLayoutController;
- (NSTextStorage *)textStorage;

@end
