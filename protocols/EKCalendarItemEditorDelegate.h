
@protocol EKCalendarItemEditorDelegate <NSObject, EKUIAppReviewPrompter>

@required

- (<CUIKEditor> *)editorForCalendarItemEditor:(EKCalendarItemEditor *)arg1;
- (CUIKPasteboardManager *)pasteboardManagerForCalendarItemEditor:(EKCalendarItemEditor *)arg1;

@optional

- (void)editor:(EKCalendarItemEditor *)arg1 didChangeHeightAnimated:(bool)arg2;
- (void)editor:(EKCalendarItemEditor *)arg1 didCompleteWithAction:(long long)arg2;
- (void)editor:(EKCalendarItemEditor *)arg1 prepareCalendarItemForEdit:(EKCalendarItem *)arg2;
- (bool)editor:(EKCalendarItemEditor *)arg1 shouldCompleteWithAction:(long long)arg2;

@end
