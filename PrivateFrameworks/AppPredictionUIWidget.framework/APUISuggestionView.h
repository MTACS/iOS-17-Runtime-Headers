
@interface APUISuggestionView : UIView {
    UIImageView * _appImageView;
    bool  _canEngageSuggestion;
    <APUISuggestionsWidgetViewDelegate> * _delegate;
    NSArray * _labels;
    unsigned long long  _platterSize;
    UILabel * _reasonLabel;
    MTVisualStylingProvider * _reasonStylingProvider;
    UIStackView * _stackView;
    UILabel * _subtitleLabel;
    ATXProactiveSuggestion * _suggestion;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImageView *appImageView;
@property (nonatomic) bool canEngageSuggestion;
@property (nonatomic) <APUISuggestionsWidgetViewDelegate> *delegate;
@property (nonatomic, retain) NSArray *labels;
@property (nonatomic) unsigned long long platterSize;
@property (nonatomic, retain) UILabel *reasonLabel;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) ATXProactiveSuggestion *suggestion;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_setAppImageViewWithBundleIdentifier:(id)arg1;
- (void)_setAppImageViewWithImage:(id)arg1;
- (void)_setINImage:(id)arg1 withBundleID:(id)arg2;
- (int)_subtitleNumberOfLines;
- (int)_titleNumberOfLines;
- (void)_updateMaximumNumberOfLines;
- (void)_updateReasonStylingProvider;
- (id)appImageView;
- (bool)canEngageSuggestion;
- (void)createViewsIfNeeded;
- (id)delegate;
- (void)installReasonLabelIfNecessary;
- (id)labels;
- (void)layoutSuggestion:(id)arg1;
- (unsigned long long)platterSize;
- (id)reasonLabel;
- (void)setAppImageView:(id)arg1;
- (void)setCanEngageSuggestion:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setINImage:(id)arg1 withBundleID:(id)arg2;
- (void)setLNImage:(id)arg1 withBundleID:(id)arg2;
- (void)setLabels:(id)arg1;
- (void)setPlatterSize:(unsigned long long)arg1;
- (void)setReasonLabel:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)stackView;
- (id)subtitleLabel;
- (id)suggestion;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
