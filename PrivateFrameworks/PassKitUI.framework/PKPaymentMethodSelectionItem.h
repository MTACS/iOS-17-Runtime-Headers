
@interface PKPaymentMethodSelectionItem : NSObject <PKIdentifiable> {
    PKCurrencyAmount * _balance;
    NSString * _identifier;
    NSString * _paymentMethodName;
    PKPaymentPass * _paymentPass;
    bool  _selected;
}

@property (nonatomic, retain) PKCurrencyAmount *balance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic, retain) NSString *paymentMethodName;
@property (nonatomic, retain) PKPaymentPass *paymentPass;
@property (getter=isSelected, nonatomic) bool selected;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)balance;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)isSelected;
- (id)paymentMethodName;
- (id)paymentPass;
- (void)setBalance:(id)arg1;
- (void)setPaymentMethodName:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setSelected:(bool)arg1;

@end
