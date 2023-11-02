
@interface CKAggregateAcknowledgmentTranscriptCell : CKAssociatedMessageTranscriptCell {
    bool  _parentMessageIsFromMe;
}

@property (nonatomic, retain) CKAcknowledgmentBalloonView *balloonView;
@property (nonatomic) bool parentMessageIsFromMe;

- (void)animateVisibility:(bool)arg1 completion:(id /* block */)arg2;
- (id)balloonView;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (void)layoutSubviewsForAlignmentContents;
- (bool)parentMessageIsFromMe;
- (void)performHide:(id /* block */)arg1;
- (void)performInsertion:(id /* block */)arg1;
- (void)performReveal:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setBalloonView:(id)arg1;
- (void)setParentMessageIsFromMe:(bool)arg1;

@end
