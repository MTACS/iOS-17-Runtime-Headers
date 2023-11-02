
@interface RTTUIServiceUpdateCell : UITableViewCell {
    <RTTUIServiceCellDelegate> * _delegate;
    RTTServiceUpdate * _serviceUpdate;
    UITextView * _subtitleView;
    UITextView * _titleView;
}

@property (nonatomic) <RTTUIServiceCellDelegate> *delegate;

+ (double)heightForWidth:(double)arg1 delegate:(id)arg2 serviceUpdate:(id)arg3;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)adjustTextViewSize;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 serviceUpdate:(id)arg3;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (id)serviceMessage;
- (id)serviceTitle;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)updateLayout;

@end
