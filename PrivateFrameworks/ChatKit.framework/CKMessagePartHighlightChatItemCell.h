
@interface CKMessagePartHighlightChatItemCell : CKAssociatedMessageTranscriptCell

@property (nonatomic, retain) CKMessagePartHighlightBalloonView *highlightBalloonView;

- (id)accessibilityIdentifier;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (id)highlightBalloonView;
- (void)layoutSubviewsForAlignmentContents;
- (void)performHide:(id /* block */)arg1;
- (void)performInsertion:(id /* block */)arg1;
- (void)performReload:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performRemoval:(id /* block */)arg1;
- (void)performReveal:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setHighlightBalloonView:(id)arg1;

@end
