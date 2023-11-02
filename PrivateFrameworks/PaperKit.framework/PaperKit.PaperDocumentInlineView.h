
@interface PaperKit.PaperDocumentInlineView : UIView {
    void crContext;
    void delegate;
    void liveStreamMessenger;
    void paperDocumentView;
    void participantDetailsDataSource;
    void showParticipantCursors;
    void syncCancellables;
    void syncManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  temporaryPaperDocument;
    void toolPicker;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)toolPickerWillShow:(id)arg1;

@end
