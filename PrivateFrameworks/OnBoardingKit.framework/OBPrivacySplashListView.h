
@interface OBPrivacySplashListView : UIStackView {
    bool  _displayingPrivacyPane;
    UITextView * _footerTextView;
    NSMutableArray * _stackedIconTextLists;
    NSMutableArray * _textViews;
    bool  _underlineLinks;
}

@property bool displayingPrivacyPane;
@property (nonatomic, readonly) UITextView *footerTextView;
@property (nonatomic, retain) NSMutableArray *stackedIconTextLists;
@property (nonatomic, retain) NSMutableArray *textViews;
@property (nonatomic) bool underlineLinks;

- (void).cxx_destruct;
- (void)_updateTextViewsForLinkUITreatment:(id)arg1;
- (bool)displayingPrivacyPane;
- (id)footerTextView;
- (id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2;
- (id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2 displayingPrivacyPane:(bool)arg3;
- (void)setDisplayingPrivacyPane:(bool)arg1;
- (void)setStackedIconTextLists:(id)arg1;
- (void)setTextViews:(id)arg1;
- (void)setUnderlineLinks:(bool)arg1;
- (id)stackedIconTextLists;
- (id)textViews;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)underlineLinks;
- (void)updateFonts;
- (void)updateSpacing;
- (void)updateTextAlignment;

@end
