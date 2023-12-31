
@interface HUTimerIntervalPickerCell : UIView {
    UILabel * _textLabel;
    NSLayoutConstraint * _textLabelLeadingConstraint;
    NSLayoutConstraint * _textLabelTrailingConstraint;
}

@property (nonatomic, retain) UILabel *textLabel;
@property (nonatomic, retain) NSLayoutConstraint *textLabelLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *textLabelTrailingConstraint;

- (void).cxx_destruct;
- (void)setTextLabel:(id)arg1;
- (void)setTextLabelLeadingConstraint:(id)arg1;
- (void)setTextLabelTrailingConstraint:(id)arg1;
- (id)textLabel;
- (id)textLabelLeadingConstraint;
- (id)textLabelTrailingConstraint;

@end
