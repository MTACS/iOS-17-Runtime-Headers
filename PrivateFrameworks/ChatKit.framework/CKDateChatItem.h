
@interface CKDateChatItem : CKStampLabelChatItem

@property (nonatomic, readonly) NSDate *date;

- (id)date;
- (unsigned long long)layoutType;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptText;
- (id)now;

@end
