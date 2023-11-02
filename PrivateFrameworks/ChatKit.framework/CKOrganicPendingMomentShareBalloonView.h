
@interface CKOrganicPendingMomentShareBalloonView : CKPendingMomentShareBalloonView {
    CKOrganicImageLayoutRecipe * _layoutRecipe;
}

@property (nonatomic, retain) CKOrganicImageLayoutRecipe *layoutRecipe;

- (void).cxx_destruct;
- (id)layoutRecipe;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setLayoutRecipe:(id)arg1;

@end
