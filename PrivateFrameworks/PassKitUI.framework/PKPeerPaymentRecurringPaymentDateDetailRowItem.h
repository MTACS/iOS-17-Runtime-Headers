
@interface PKPeerPaymentRecurringPaymentDateDetailRowItem : PKPeerPaymentRecurringPaymentDetailRowItem {
    NSDate * _date;
    bool  _isSelected;
    NSString * _title;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) bool isSelected;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)date;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isSelected;
- (void)setDate:(id)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
