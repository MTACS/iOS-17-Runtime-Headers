
@interface CKBlockContactChatItem : CKStampLabelChatItem {
    NSAttributedString * _transcriptButtonText;
}

@property (nonatomic, copy) NSAttributedString *transcriptButtonText;

- (void).cxx_destruct;
- (Class)cellClass;
- (unsigned long long)layoutType;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptText;
- (void)setTranscriptButtonText:(id)arg1;
- (id)transcriptButtonText;

@end
