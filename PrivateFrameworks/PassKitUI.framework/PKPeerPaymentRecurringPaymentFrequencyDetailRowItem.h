
@interface PKPeerPaymentRecurringPaymentFrequencyDetailRowItem : PKPeerPaymentRecurringPaymentDetailRowItem {
    unsigned long long  _frequency;
}

@property (nonatomic) unsigned long long frequency;

- (unsigned long long)frequency;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setFrequency:(unsigned long long)arg1;

@end
