
@interface PDFKitPopupViewPrivate : NSObject {
    NSString * contents;
    bool  deviceIsiPad;
    bool  deviceIsiPhone;
    PDFPageView * pageView;
    PDFAnnotation * parentAnnotation;
    UIViewController * popupController;
    UITextView * popupTextView;
    NSUndoManager * popupTextViewUndoManager;
    id  savedFirstResponder;
    PDFView * view;
}

- (void).cxx_destruct;

@end
