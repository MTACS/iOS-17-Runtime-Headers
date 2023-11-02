
@interface WDDisplayTypeDescriptionView : UIView <UITextViewDelegate> {
    UITextView * _attributionTextView;
    UILabel * _cautionaryLabel;
    UILabel * _descriptionHeadingLabel;
    UILabel * _descriptionLabel;
    HKDisplayType * _displayType;
    bool  _showAttributionText;
    unsigned long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showAttributionText;
@property (readonly) Class superclass;

+ (id)_attributionTextFontForStyle:(unsigned long long)arg1;
+ (id)_cautionaryTextFontForStyle:(unsigned long long)arg1;
+ (id)_descriptionHeadingColorForStyle:(unsigned long long)arg1;
+ (id)_descriptionHeadingFontForStyle:(unsigned long long)arg1;
+ (id)_descriptionTextColorForStyle:(unsigned long long)arg1;
+ (id)_descriptionTextFontForStyle:(unsigned long long)arg1;
+ (id)_metricsForStyle:(unsigned long long)arg1;
+ (double)minimumHeightForStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_setupUI;
- (void)_updateFont;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayType:(id)arg1 showAttributionText:(bool)arg2 style:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShowAttributionText:(bool)arg1;
- (bool)showAttributionText;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)traitCollectionDidChange:(id)arg1;

@end
