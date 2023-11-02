
@interface CKJunkRecoveryChatItem : CKChatItem {
    NSDate * _earliestMessageDate;
}

@property (nonatomic, retain) NSDate *earliestMessageDate;

- (void).cxx_destruct;
- (Class)cellClass;
- (id)earliestMessageDate;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptText;
- (void)setEarliestMessageDate:(id)arg1;

@end
