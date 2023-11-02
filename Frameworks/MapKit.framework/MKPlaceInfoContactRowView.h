
@interface MKPlaceInfoContactRowView : MKPlaceSectionRowView <UIGestureRecognizerDelegate> {
    MKPlaceSectionHeaderView * _headerView;
    NSArray * _iconConstraints;
    id /* block */  _iconSelectedBlock;
    bool  _isInRightMouseDownEvent;
    UIColor * _labelColor;
    CNLabeledValue * _labeledValue;
    bool  _textIsSelectable;
    NSArray * _titleConstraints;
    MKVibrantLabel * _titleLabel;
    NSLayoutConstraint * _titleToValueConstraint;
    NSLayoutConstraint * _topToIconConstraint;
    NSLayoutConstraint * _topToTitleConstraint;
    _MKUILabel * _valueLabel;
    NSLayoutConstraint * _valueToBottomConstraint;
    NSLayoutConstraint * _valueToTrailingViewConstraint;
}

@property (nonatomic, readonly) int analyticsTarget;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NSItemProviderWriting> *draggableContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ iconSelectedBlock;
@property (nonatomic, retain) UIColor *labelColor;
@property (nonatomic, retain) CNLabeledValue *labeledValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MKVibrantLabel *titleLabel;
@property (nonatomic, readonly) _MKUILabel *valueLabel;
@property (nonatomic, retain) NSLayoutConstraint *valueToBottomConstraint;

+ (id)icon;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (id)_icon;
- (id)_iconAccessibilityLabel;
- (Class)_labeledValueExpectedValueType;
- (id)_valueString;
- (int)analyticsTarget;
- (void)copy:(id)arg1;
- (id)draggableContent;
- (id /* block */)iconSelectedBlock;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)labelColor;
- (id)labeledValue;
- (void)setIconSelectedBlock:(id /* block */)arg1;
- (void)setLabelColor:(id)arg1;
- (void)setLabeledValue:(id)arg1;
- (void)setValueToBottomConstraint:(id)arg1;
- (id)titleLabel;
- (id)valueLabel;
- (id)valueToBottomConstraint;

@end
