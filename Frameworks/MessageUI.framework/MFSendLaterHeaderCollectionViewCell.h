
@interface MFSendLaterHeaderCollectionViewCell : UICollectionViewCell <_UIDatePickerCompactStyleDelegate> {
    long long  _currentVisibleComponent;
    UIDatePicker * _datePicker;
    <MFSendLaterHeaderCollectionViewCellDelegate> * _delegate;
    UIStackView * _stackView;
    MFSendLaterHeaderCollectionViewHelper * _viewHelper;
}

@property (nonatomic) long long currentVisibleComponent;
@property (nonatomic, retain) UIDatePicker *datePicker;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFSendLaterHeaderCollectionViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIStackView *stackView;
@property (readonly) Class superclass;
@property (nonatomic, retain) MFSendLaterHeaderCollectionViewHelper *viewHelper;

+ (id)reusableIdentifier;

- (void).cxx_destruct;
- (void)_datePicker:(id)arg1 didSelectComponent:(long long)arg2;
- (long long)currentVisibleComponent;
- (id)datePicker;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutMarginsDidChange;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)setCurrentVisibleComponent:(long long)arg1;
- (void)setDatePicker:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setViewHelper:(id)arg1;
- (id)stackView;
- (void)updateActiveComponent:(long long)arg1;
- (void)updateWithDate:(id)arg1 timeZone:(id)arg2;
- (id)viewHelper;

@end
