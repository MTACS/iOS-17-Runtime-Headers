
@interface PKPaymentAuthorizationCouponCodeEntryViewController : UIViewController <UITextFieldDelegate> {
    UIView * _accessoryView;
    bool  _active;
    bool  _awaitingCouponCodeUpdate;
    NSString * _couponCode;
    <PKPaymentAuthorizationCouponCodeEntryViewControllerDelegate> * _delegate;
    bool  _finishing;
    NSError * _firstError;
    UIScrollView * _scrollView;
    UIStackView * _stackView;
    long long  _style;
    UITextField * _textField;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationCouponCodeEntryViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)canonicalizedText;
- (void)clearAccessoryView;
- (id)delegate;
- (id)initWithStyle:(long long)arg1;
- (bool)isPaymentStyle;
- (bool)isViewTranslucent;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)reloadDataItem;
- (void)setAccessoryViewToActivityIndicator;
- (void)setAccessoryViewToCheckmark;
- (void)setAccessoryViewToError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldUpdatePreferredContentSize;
- (long long)style;
- (void)textFieldDidEditingChanged:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updateAccessoryView;
- (void)updatePreferredContentSize;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
