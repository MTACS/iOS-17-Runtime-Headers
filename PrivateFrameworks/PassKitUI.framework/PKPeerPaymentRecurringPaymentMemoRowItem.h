
@interface PKPeerPaymentRecurringPaymentMemoRowItem : PKPeerPaymentRecurringPaymentDetailRowItem {
    PKPeerPaymentRecurringPaymentMemo * _memo;
    NSString * _suggestedText;
}

@property (nonatomic, readonly) bool hasIcon;
@property (nonatomic, retain) PKPeerPaymentRecurringPaymentMemo *memo;
@property (nonatomic, retain) NSString *suggestedText;

- (void).cxx_destruct;
- (bool)hasIcon;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 isEditable:(bool)arg2 titleColor:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)memo;
- (void)setMemo:(id)arg1;
- (void)setSuggestedText:(id)arg1;
- (id)suggestedText;

@end
