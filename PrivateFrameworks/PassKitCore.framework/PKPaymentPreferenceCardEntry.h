
@interface PKPaymentPreferenceCardEntry : NSObject {
    id /* block */  _actionBlock;
    NSString * _availabilityString;
    NSString * _displayName;
    bool  _insetsSeparatorByTextOffset;
    bool  _isSelectable;
    PKPaymentPass * _pass;
    PKPaymentApplication * _paymentApplication;
    PKRemotePaymentInstrument * _remotePaymentInstrument;
    bool  _shouldShowCardUI;
}

@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic, copy) NSString *availabilityString;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) bool insetsSeparatorByTextOffset;
@property (nonatomic) bool isSelectable;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, retain) PKPaymentApplication *paymentApplication;
@property (nonatomic, retain) PKRemotePaymentInstrument *remotePaymentInstrument;
@property (nonatomic) bool shouldShowCardUI;

- (void).cxx_destruct;
- (id /* block */)actionBlock;
- (id)availabilityString;
- (id)displayName;
- (bool)insetsSeparatorByTextOffset;
- (bool)isSelectable;
- (id)pass;
- (id)paymentApplication;
- (id)remotePaymentInstrument;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setAvailabilityString:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setInsetsSeparatorByTextOffset:(bool)arg1;
- (void)setIsSelectable:(bool)arg1;
- (void)setPass:(id)arg1;
- (void)setPaymentApplication:(id)arg1;
- (void)setRemotePaymentInstrument:(id)arg1;
- (void)setShouldShowCardUI:(bool)arg1;
- (bool)shouldShowCardUI;

@end
