
@protocol CUIKPasteboardManagerDelegate <NSObject>

@required

- (<CUIKEditor> *)editorForPasteboardManager:(CUIKPasteboardManager *)arg1;
- (void)pasteboardManager:(CUIKPasteboardManager *)arg1 presentAlert:(CUIKAlertController *)arg2;

@end
