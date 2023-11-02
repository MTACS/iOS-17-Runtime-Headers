
@interface PKTextInputDebugRadarEntryCell : UICollectionViewCell {
    UIView * __borderView;
    UIImageView * __drawingImageView;
    NSLayoutConstraint * __drawingViewAspectRatioConstraint;
    UIButton * __includedButton;
    UITextField * __intendedResultField;
    UIView * __lineSeparator;
    UILabel * __resultTextLabel;
    long long  _contentLevel;
    <PKTextInputDebugRadarEntryCellDelegate> * _delegate;
    long long  _entryIndex;
    bool  _includedEntry;
    NSString * _intendedText;
    PKTextInputDebugLogEntry * _logEntry;
}

@property (nonatomic, readonly) UIView *_borderView;
@property (nonatomic, readonly) UIImageView *_drawingImageView;
@property (nonatomic, retain) NSLayoutConstraint *_drawingViewAspectRatioConstraint;
@property (nonatomic, readonly) UIButton *_includedButton;
@property (nonatomic, readonly) UITextField *_intendedResultField;
@property (nonatomic, readonly) UIView *_lineSeparator;
@property (nonatomic, readonly) UILabel *_resultTextLabel;
@property (nonatomic, readonly) long long contentLevel;
@property (nonatomic) <PKTextInputDebugRadarEntryCellDelegate> *delegate;
@property (nonatomic) long long entryIndex;
@property (nonatomic) bool includedEntry;
@property (nonatomic, copy) NSString *intendedText;
@property (nonatomic, readonly) PKTextInputDebugLogEntry *logEntry;

- (void).cxx_destruct;
- (id)_attributedResultTextWithReferenceString:(id)arg1 referenceStringOffset:(long long)arg2 recognitionResult:(id)arg3 affectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 resultType:(long long)arg5 contentLength:(long long)arg6;
- (id)_borderView;
- (id)_createIncludedButton;
- (id)_createIntendedField;
- (id)_drawingImageView;
- (id)_drawingViewAspectRatioConstraint;
- (void)_handleIncludedButton;
- (void)_handleIntendedFieldChanged;
- (id)_includedButton;
- (id)_intendedResultField;
- (id)_lineSeparator;
- (id)_resultTextLabel;
- (void)_setIncludedEntry:(bool)arg1 notifyDelegate:(bool)arg2;
- (void)_setIntendedText:(id)arg1 notifyDelegate:(bool)arg2;
- (void)_setupViews;
- (void)_updateBorderView;
- (void)_updateDrawingView;
- (void)_updateIncludedButton;
- (void)_updateIntendedTextField;
- (void)_updateResultTextLabel;
- (long long)contentLevel;
- (id)delegate;
- (long long)entryIndex;
- (bool)includedEntry;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)intendedText;
- (id)logEntry;
- (void)setDelegate:(id)arg1;
- (void)setEntryIndex:(long long)arg1;
- (void)setIncludedEntry:(bool)arg1;
- (void)setIntendedText:(id)arg1;
- (void)setLogEntry:(id)arg1 contentLevel:(long long)arg2;
- (void)set_drawingViewAspectRatioConstraint:(id)arg1;

@end
