
@interface CKAggregateMessagePartChatItem : CKTextMessagePartChatItem {
    NSArray * _subparts;
}

@property (nonatomic, copy) NSArray *subparts;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (Class)balloonViewClass;
- (id)compositionWithContext:(id)arg1;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (id)loadTranscriptText;
- (id)pasteboardItemProviders;
- (id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setSubparts:(id)arg1;
- (id)subparts;
- (id)title;

@end
