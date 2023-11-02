
@interface CKOrganicTranscriptBalloonCell : CKTranscriptBalloonCell {
    CKOrganicImageLayoutRecipe * _layoutRecipe;
}

@property (nonatomic, retain) CKOrganicImageLayoutRecipe *layoutRecipe;

- (void).cxx_destruct;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (double)layoutOffset;
- (id)layoutRecipe;
- (void)layoutSubviewsForAlignmentContents;
- (void)setLayoutRecipe:(id)arg1;

@end
