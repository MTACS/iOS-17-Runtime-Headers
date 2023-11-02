
@interface SearchUIAttributionFooterCardSectionView : SearchUICardSectionView {
    SFAttributionFooterCardSection * _cardSection;
    TLKTextButton * _leadingTextButton;
    TLKStackView * _stackView;
    TLKTextButton * _trailingTextButton;
}

@property (nonatomic, retain) SFAttributionFooterCardSection *cardSection;
@property (nonatomic, retain) TLKTextButton *leadingTextButton;
@property (nonatomic, retain) TLKStackView *stackView;
@property (nonatomic, retain) TLKTextButton *trailingTextButton;

+ (bool)prefersNoSeparatorAboveRowModel:(id)arg1;
+ (void)removeIconsFromRichText:(id)arg1;
+ (bool)supportsCustomUserReportRequestAfforance;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)cardSection;
- (void)configureMenuForTrailingFootnoteButton;
- (void)didPressLeadingTextButton;
- (void)didPressTrailingTextButton:(id)arg1;
- (id)leadingTextButton;
- (void)setCardSection:(id)arg1;
- (void)setLeadingTextButton:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setTrailingTextButton:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1 forButton:(id)arg2;
- (id)setupContentView;
- (id)setupTextButtonThatIsLeadingAttribution:(bool)arg1;
- (id)stackView;
- (id)trailingTextButton;
- (void)updateAttributionThatIsLeading:(bool)arg1 withSection:(id)arg2 isRTL:(bool)arg3;
- (void)updateWithRowModel:(id)arg1;

@end
