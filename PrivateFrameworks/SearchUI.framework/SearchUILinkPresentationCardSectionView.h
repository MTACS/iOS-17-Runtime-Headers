
@interface SearchUILinkPresentationCardSectionView : SearchUICardSectionView {
    UITapGestureRecognizer * _linkPresentationTapped;
    LPLinkView * _linkView;
}

@property (nonatomic, retain) UITapGestureRecognizer *linkPresentationTapped;
@property (nonatomic, retain) LPLinkView *linkView;
@property (nonatomic, retain) SFLinkPresentationCardSection *section;

+ (id)fallbackMetadataWithURL:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (void)_performCommand;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)fetchMetadataFromMessagesWithURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)linkPresentationTapped;
- (id)linkView;
- (void)setLinkPresentationTapped:(id)arg1;
- (void)setLinkView:(id)arg1;
- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
