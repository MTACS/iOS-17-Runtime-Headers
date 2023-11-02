
@interface ICTK2TextContainer : NSTextContainer <ICSystemPaperTextAttachmentNotesEditorBridgeWorkaround> {
    bool  _inPreviewMode;
    bool  _insideSystemPaper;
    ICTK2TextView * _tk2TextView;
}

@property (nonatomic) bool inPreviewMode;
@property (nonatomic) bool insideSystemPaper;
@property (nonatomic) ICTK2TextView *tk2TextView;

- (void).cxx_destruct;
- (bool)inPreviewMode;
- (bool)insideSystemPaper;
- (bool)isSimpleRectangularTextContainer;
- (id)layoutManager;
- (void)setInPreviewMode:(bool)arg1;
- (void)setInsideSystemPaper:(bool)arg1;
- (void)setTk2TextView:(id)arg1;
- (id)tk2TextView;

@end
