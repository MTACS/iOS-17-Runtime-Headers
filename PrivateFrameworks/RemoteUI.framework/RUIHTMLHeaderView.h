
@interface RUIHTMLHeaderView : UIView <RUIHeader, RUIWebContainerViewDelegate> {
    NSURL * _baseURL;
    <RUIHeaderDelegate> * _delegate;
    bool  _isFirstSection;
    RUIWebContainerView * _webContainerView;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUIHeaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_topPadding;
- (id)baseURL;
- (id)delegate;
- (double)headerHeightForWidth:(double)arg1 inView:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (void)layoutSubviews;
- (id)quoteEncodedStringWithString:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFooterStyleText:(id)arg1 attributes:(id)arg2;
- (void)setHTMLContent:(id)arg1 toElementsMatchingQuery:(id)arg2;
- (void)setSectionIsFirst:(bool)arg1;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2;
- (void)webContainerViewContentDidChange:(id)arg1;
- (double)webViewWidth;
- (double)webViewWidthForWidth:(double)arg1;

@end
