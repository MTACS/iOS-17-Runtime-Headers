
@protocol SXTextSelecting <NSObject>

@required

- (void)endSelection;
- (NSString *)selectedText;

@end
