
@interface SearchUITableHeaderViewShared : TLKStackView {
    SFCollectionCardSection * _cardSection;
    <SearchUITableHeaderCommandDelegate> * _commandDelegate;
    <SFFeedbackListener> * _feedbackListener;
    TLKTextButton * _headerOptionButton;
    unsigned long long  _headerType;
    <SearchUITableHeaderViewDelegate> * _headerViewDelegate;
    bool  _isExpanded;
    SFResultSection * _section;
    SearchUISectionModel * _sectionModel;
}

@property (nonatomic, retain) SFCollectionCardSection *cardSection;
@property (nonatomic) <SearchUITableHeaderCommandDelegate> *commandDelegate;
@property (nonatomic) <SFFeedbackListener> *feedbackListener;
@property (nonatomic, retain) TLKTextButton *headerOptionButton;
@property (nonatomic) unsigned long long headerType;
@property (nonatomic) <SearchUITableHeaderViewDelegate> *headerViewDelegate;
@property (getter=isExpanded, nonatomic) bool isExpanded;
@property (nonatomic, retain) SFResultSection *section;
@property (nonatomic, retain) SearchUISectionModel *sectionModel;

- (void).cxx_destruct;
- (id)attributedStringWithSymbolImageName:(id)arg1 text:(id)arg2;
- (id)cardSection;
- (id)commandDelegate;
- (id)feedbackListener;
- (id)headerOptionButton;
- (unsigned long long)headerType;
- (id)headerViewDelegate;
- (bool)isExpanded;
- (void)moreButtonPressed;
- (id)moreResultsPunchout;
- (id)section;
- (bool)sectionCanInlineExpand;
- (id)sectionModel;
- (void)setCardSection:(id)arg1;
- (void)setCommandDelegate:(id)arg1;
- (void)setFeedbackListener:(id)arg1;
- (void)setHeaderOptionButton:(id)arg1;
- (void)setHeaderType:(unsigned long long)arg1;
- (void)setHeaderViewDelegate:(id)arg1;
- (void)setIsExpanded:(bool)arg1;
- (void)setSection:(id)arg1;
- (void)setSectionModel:(id)arg1;
- (bool)supportsShowMoreInApp;
- (void)updateButtonWithAttributedText:(id)arg1 image:(id)arg2;
- (void)updateHeaderButtonVisibilityAnimated:(bool)arg1;
- (void)updateWithCollectionCardSection:(id)arg1 section:(id)arg2 isExpanded:(bool)arg3;

@end
