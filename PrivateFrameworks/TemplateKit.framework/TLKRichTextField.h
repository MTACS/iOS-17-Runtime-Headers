
@interface TLKRichTextField : TLKStackView <NUIContainerViewDelegate, TLKObservable, TLKObserver> {
    TLKIconsView * _iconView;
    TLKRichText * _richText;
    unsigned long long  _roundedCornerLabelSizeConfiguration;
    TLKRoundedCornerLabels * _roundedCornerLabels;
    bool  _scaleIconsToFont;
    TLKStarsView * _starRatingView;
    TLKLabel * _textLabel;
    bool  _useCompactMode;
    long long  batchUpdateCount;
    <TLKObserver> * observer;
}

@property (nonatomic) long long batchUpdateCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TLKIconsView *iconView;
@property <TLKObserver> *observer;
@property (nonatomic) unsigned long long prominence;
@property (nonatomic, retain) TLKRichText *richText;
@property (nonatomic) unsigned long long roundedCornerLabelSizeConfiguration;
@property (nonatomic, retain) TLKRoundedCornerLabels *roundedCornerLabels;
@property (nonatomic) bool scaleIconsToFont;
@property (nonatomic, retain) TLKStarsView *starRatingView;
@property (readonly) Class superclass;
@property (nonatomic, retain) TLKLabel *textLabel;
@property (nonatomic) bool useCompactMode;

- (void).cxx_destruct;
- (id)attributedString;
- (long long)batchUpdateCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)description;
- (id)font;
- (id)iconView;
- (id)init;
- (id)observer;
- (unsigned long long)prominence;
- (void)propertiesDidChange;
- (id)richText;
- (unsigned long long)roundedCornerLabelSizeConfiguration;
- (id)roundedCornerLabels;
- (bool)scaleIconsToFont;
- (void)setBatchUpdateCount:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setProminence:(unsigned long long)arg1;
- (void)setRichText:(id)arg1;
- (void)setRoundedCornerLabelSizeConfiguration:(unsigned long long)arg1;
- (void)setRoundedCornerLabels:(id)arg1;
- (void)setScaleIconsToFont:(bool)arg1;
- (void)setStarRatingView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setUseCompactMode:(bool)arg1;
- (id)starRatingView;
- (id)textLabel;
- (void)updateIconSizing;
- (void)updateIcons:(id)arg1;
- (void)updateRoundedCornerLabels:(id)arg1;
- (void)updateStarRating:(id)arg1;
- (void)updateWithRichText:(id)arg1;
- (bool)useCompactMode;

@end
