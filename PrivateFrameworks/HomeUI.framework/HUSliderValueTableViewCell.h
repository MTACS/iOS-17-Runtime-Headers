
@interface HUSliderValueTableViewCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol> {
    NSArray * _constraints;
    <HUSliderValueTableViewCellDelegate> * _delegate;
    HFItem * _item;
    bool  _showValue;
    UISlider * _slider;
    NSString * _title;
    bool  _useLargeCell;
    UILabel * _valueLabel;
}

@property (nonatomic, retain) NSArray *constraints;
@property (getter=isContinuous, nonatomic) bool continuous;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUSliderValueTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) double maximumValue;
@property (nonatomic, retain) UIImage *maximumValueImage;
@property (nonatomic) double minimumValue;
@property (nonatomic, retain) UIImage *minimumValueImage;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic) bool showValue;
@property (nonatomic, retain) UISlider *slider;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) bool useLargeCell;
@property (nonatomic) double value;
@property (nonatomic, retain) UILabel *valueLabel;

- (void).cxx_destruct;
- (void)_setupAutoLayoutConstraints;
- (void)_sliderChanged:(id)arg1;
- (id)constraints;
- (id)delegate;
- (void)didMoveToSuperview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isContinuous;
- (bool)isDisabled;
- (id)item;
- (double)maximumValue;
- (id)maximumValueImage;
- (double)minimumValue;
- (id)minimumValueImage;
- (void)prepareForReuse;
- (void)setConstraints:(id)arg1;
- (void)setContinuous:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setItem:(id)arg1;
- (void)setMaximumValue:(double)arg1;
- (void)setMaximumValueImage:(id)arg1;
- (void)setMinimumValue:(double)arg1;
- (void)setMinimumValueImage:(id)arg1;
- (void)setShowValue:(bool)arg1;
- (void)setSlider:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUseLargeCell:(bool)arg1;
- (void)setValue:(double)arg1;
- (void)setValueLabel:(id)arg1;
- (bool)showValue;
- (id)slider;
- (id)title;
- (void)updateUIWithAnimation:(bool)arg1;
- (bool)useLargeCell;
- (double)value;
- (id)valueLabel;

@end
