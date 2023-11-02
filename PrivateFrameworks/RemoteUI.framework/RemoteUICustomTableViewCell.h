
@interface RemoteUICustomTableViewCell : RemoteUITableViewCell {
    UILabel * _customDetailTextLabelInternal;
    UITextField * _customEditableTextFieldInternal;
    RUIImageView * _customImageViewInternal;
    UILabel * _customTextLabelInternal;
    UILabel * _customValueLabelInternal;
    UIStackView * _stackView;
    UIStackView * _verticalStackView;
}

@property (nonatomic, readonly) UILabel *customDetailTextLabel;
@property (nonatomic, retain) UILabel *customDetailTextLabelInternal;
@property (nonatomic, readonly) UITextField *customEditableTextField;
@property (nonatomic, retain) UITextField *customEditableTextFieldInternal;
@property (nonatomic, readonly) UIImageView *customImageView;
@property (nonatomic, retain) RUIImageView *customImageViewInternal;
@property (nonatomic, readonly) UILabel *customTextLabel;
@property (nonatomic, retain) UILabel *customTextLabelInternal;
@property (nonatomic, readonly) UILabel *customValueLabel;
@property (nonatomic, retain) UILabel *customValueLabelInternal;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, retain) UIStackView *verticalStackView;

- (void).cxx_destruct;
- (double)_defaultImageViewMaxWidth;
- (id)_detailTextLabelInternal;
- (id)_editableTextFieldInternal;
- (id)_imageViewInternal;
- (double)_imageViewToTextMargin;
- (void)_initializeViews;
- (id)_textLabelInternal;
- (id)_valueLabelInternal;
- (void)addDetailLinkButton:(id)arg1;
- (id)customDetailTextLabel;
- (id)customDetailTextLabelInternal;
- (id)customEditableTextField;
- (id)customEditableTextFieldInternal;
- (id)customImageView;
- (id)customImageViewInternal;
- (id)customTextLabel;
- (id)customTextLabelInternal;
- (id)customValueLabel;
- (id)customValueLabelInternal;
- (void)setCustomDetailTextLabelInternal:(id)arg1;
- (void)setCustomEditableTextFieldInternal:(id)arg1;
- (void)setCustomImageViewInternal:(id)arg1;
- (void)setCustomTextLabelInternal:(id)arg1;
- (void)setCustomValueLabelInternal:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setVerticalStackView:(id)arg1;
- (id)stackView;
- (id)verticalStackView;

@end
