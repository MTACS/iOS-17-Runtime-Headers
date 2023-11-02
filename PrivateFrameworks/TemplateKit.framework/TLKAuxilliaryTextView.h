
@interface TLKAuxilliaryTextView : TLKView <NUIContainerViewDelegate> {
    TLKLabel * _bottomLabel;
    TLKRichText * _bottomText;
    TLKLabel * _middleLabel;
    TLKRichText * _middleText;
    TLKLabel * _topLabel;
    TLKRichText * _topText;
    bool  _useCompactMode;
}

@property (nonatomic, retain) TLKLabel *bottomLabel;
@property (nonatomic, retain) TLKRichText *bottomText;
@property (nonatomic, retain) TLKStackView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TLKLabel *middleLabel;
@property (nonatomic, retain) TLKRichText *middleText;
@property (readonly) Class superclass;
@property (nonatomic, retain) TLKLabel *topLabel;
@property (nonatomic, retain) TLKRichText *topText;
@property (nonatomic) bool useCompactMode;

- (void).cxx_destruct;
- (id)bottomLabel;
- (id)bottomLabelFont;
- (id)bottomLabelString;
- (id)bottomText;
- (id)middleLabel;
- (id)middleLabelFont;
- (id)middleLabelString;
- (id)middleText;
- (void)observedPropertiesChanged;
- (void)setBottomLabel:(id)arg1;
- (void)setBottomText:(id)arg1;
- (void)setMiddleLabel:(id)arg1;
- (void)setMiddleText:(id)arg1;
- (void)setTopLabel:(id)arg1;
- (void)setTopText:(id)arg1;
- (void)setUseCompactMode:(bool)arg1;
- (id)setupContentView;
- (id)topLabel;
- (id)topLabelString;
- (id)topText;
- (bool)useCompactMode;

@end
