
@interface PKPaymentPassActionWidgetView : UIView {
    PKAccount * _account;
    PKFamilyMember * _currentUser;
    <PKPaymentPassActionWidgetViewDelegate> * _delegate;
    NSArray * _displayableWidgets;
    NSString * _email;
    bool  _hasBusinessChatIdentifier;
    unsigned long long  _numberOfWidgetsPerRow;
    PKPaymentPass * _paymentPass;
    PKPeerPaymentAccount * _peerPaymentAccount;
    NSString * _phoneNumber;
    bool  _usesAccessibilityLayout;
    NSString * _website;
    unsigned long long  _widgetViewStyle;
}

@property (nonatomic, retain) PKAccount *account;
@property (nonatomic, retain) PKFamilyMember *currentUser;
@property (nonatomic) <PKPaymentPassActionWidgetViewDelegate> *delegate;
@property (nonatomic, retain) PKPaymentPass *paymentPass;
@property (nonatomic, retain) PKPeerPaymentAccount *peerPaymentAccount;

- (void).cxx_destruct;
- (bool)_bankConnectHasDigitalServicing;
- (id)_createButtonForTitle:(id)arg1 image:(id)arg2;
- (void)_determineWidgetContentWithAvailableWidgets;
- (id)account;
- (void)cleanUpExistingWidgets;
- (id)currentUser;
- (id)delegate;
- (bool)hasEnabledWidgets;
- (bool)hasSingleColumnLayout;
- (id)initWithWidgetViewStyle:(unsigned long long)arg1;
- (void)layoutSubviews;
- (unsigned long long)numberOfRows;
- (unsigned long long)numberOfRowsWithWidgetsPerRow:(unsigned long long)arg1;
- (unsigned long long)numberOfWidgetsPerRowWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)paymentPass;
- (id)peerPaymentAccount;
- (void)setAccount:(id)arg1;
- (void)setCurrentUser:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setPeerPaymentAccount:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)targetWidgetWidthForRowWithNumberOfWidgets:(unsigned long long)arg1;
- (double)targetWidgetWidthForRowWithNumberOfWidgets:(unsigned long long)arg1 rowBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)targetWidgetWidthForRowWithNumberOfWidgets:(unsigned long long)arg1 rowSize:(struct CGSize { double x1; double x2; })arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateNumberOfWidgetsPerRow;
- (void)updateUseAccessibilityLayout;
- (void)updateWidgetsAccessibilityLayoutState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })widgetBoundsForRowWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
