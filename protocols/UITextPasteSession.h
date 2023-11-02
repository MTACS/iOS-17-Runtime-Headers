
@protocol UITextPasteSession <NSObject>

@required

- (void)animationCompleted;
- (void)animationStarted;
- (<UITextPasteSessionDelegate> *)delegate;
- (NSArray *)originalItems;
- (NSAttributedString *)pasteResult;
- (_UIPositionedAttributedString *)positionedPasteResult;
- (UITextRange *)range;
- (void)setDelegate:(id <UITextPasteSessionDelegate>)arg1;
- (void)setOriginalItems:(NSArray *)arg1;

@end
