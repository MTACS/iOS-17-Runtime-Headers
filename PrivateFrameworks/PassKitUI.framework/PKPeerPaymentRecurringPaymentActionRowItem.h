
@interface PKPeerPaymentRecurringPaymentActionRowItem : PKPeerPaymentRecurringPaymentDetailRowItem {
    unsigned long long  _action;
    bool  _actionInProgress;
    NSString * _title;
}

@property (nonatomic) unsigned long long action;
@property (nonatomic) bool actionInProgress;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (unsigned long long)action;
- (bool)actionInProgress;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setAction:(unsigned long long)arg1;
- (void)setActionInProgress:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
