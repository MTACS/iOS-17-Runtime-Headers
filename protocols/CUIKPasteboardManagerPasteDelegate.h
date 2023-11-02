
@protocol CUIKPasteboardManagerPasteDelegate <CUIKPasteboardManagerDelegate>

@required

- (void)pasteboardManager:(CUIKPasteboardManager *)arg1 beginEditingEvent:(EKEvent *)arg2;

@optional

- (void)pasteboardManager:(CUIKPasteboardManager *)arg1 didFinishPasteWithResult:(unsigned long long)arg2 willOpenEditor:(bool)arg3;

@end
