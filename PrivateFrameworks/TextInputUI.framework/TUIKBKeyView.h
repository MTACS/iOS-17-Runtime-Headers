
@interface TUIKBKeyView : UIKBContainerKeyView {
    UIKBBackdropView * _backdropView;
    TUIKey * _backingKey;
    NSArray * _contentViewConstraints;
    double  _fontSize;
    long long  _keyStyle;
    long long  _layoutShape;
    long long  _layoutType;
    TUILiveKeyView * _liveContentView;
    double  _multiplier;
    UIKBTree * _representedKey;
    long long  _rowNumber;
    UIKBRenderFactory * _splitFactory;
    UIKBRenderFactory * _unsplitFactory;
}

@property (nonatomic, retain) UIKBBackdropView *backdropView;
@property (nonatomic, retain) TUIKey *backingKey;
@property (nonatomic, retain) NSArray *contentViewConstraints;
@property (nonatomic) double fontSize;
@property (nonatomic) long long keyStyle;
@property (nonatomic) long long layoutShape;
@property (nonatomic, readonly) long long layoutType;
@property (nonatomic, retain) TUILiveKeyView *liveContentView;
@property (nonatomic) double multiplier;
@property (nonatomic, retain) UIKBTree *representedKey;
@property (nonatomic) long long rowNumber;
@property (nonatomic, retain) UIKBRenderFactory *splitFactory;
@property (nonatomic, retain) UIKBRenderFactory *unsplitFactory;

- (void).cxx_destruct;
- (void)addContentView;
- (id)backdropView;
- (id)backingKey;
- (void)clearTouches;
- (long long)contentMode;
- (id)contentViewConstraints;
- (id)description;
- (void)dimKeyUsingOpacities:(id)arg1;
- (void)finishTransition;
- (double)fontSize;
- (id)initWithKey:(id)arg1;
- (bool)isDynamicKey;
- (id)key;
- (long long)keyStyle;
- (long long)layoutShape;
- (long long)layoutType;
- (id)liveContentView;
- (double)multiplier;
- (double)multiplierForDisplayType:(int)arg1;
- (void)prepareForTransition;
- (id)representedKey;
- (bool)requiresConstraintBasedLayout;
- (long long)rowNumber;
- (void)setBackdropView:(id)arg1;
- (void)setBackingKey:(id)arg1;
- (void)setContentViewConstraints:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setKeyStyle:(long long)arg1;
- (void)setLayoutShape:(long long)arg1;
- (void)setLiveContentView:(id)arg1;
- (void)setMultiplier:(double)arg1;
- (void)setRepresentedKey:(id)arg1;
- (void)setRowNumber:(long long)arg1;
- (void)setSplitFactory:(id)arg1;
- (void)setUnsplitFactory:(id)arg1;
- (id)splitFactory;
- (id)splitFactoryForKeyStyle:(long long)arg1;
- (bool)translatesAutoresizingMaskIntoConstraints;
- (id)unsplitFactory;
- (void)updateConstraints;
- (void)updateLabelWeight:(long long)arg1;
- (void)updateState:(int)arg1;
- (void)updateStyle:(long long)arg1;

@end
