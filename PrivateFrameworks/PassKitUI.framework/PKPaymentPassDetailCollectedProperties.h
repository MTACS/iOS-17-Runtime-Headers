
@interface PKPaymentPassDetailCollectedProperties : NSObject {
    NSDictionary * _actionForBalanceIdentifier;
    NSDictionary * _balances;
    PKPaymentPass * _pass;
    NSDictionary * _reminderForBalanceIdentifier;
    PKTransitBalanceModel * _transitBalanceModel;
    PKTransitPassProperties * _transitPassProperties;
    PKPaymentBalanceReminder * _transitPropertiesBalanceReminder;
}

@property (nonatomic, retain) NSDictionary *actionForBalanceIdentifier;
@property (nonatomic, retain) NSDictionary *balances;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, retain) NSDictionary *reminderForBalanceIdentifier;
@property (nonatomic, retain) PKTransitBalanceModel *transitBalanceModel;
@property (nonatomic, retain) PKTransitPassProperties *transitPassProperties;
@property (nonatomic, retain) PKPaymentBalanceReminder *transitPropertiesBalanceReminder;

- (void).cxx_destruct;
- (id)actionForBalanceIdentifier;
- (id)balances;
- (id)initWithPass:(id)arg1 transitPassProperties:(id)arg2 transitBalanceModel:(id)arg3 balances:(id)arg4 actionForBalanceIdentifier:(id)arg5 transitPropertiesBalanceReminder:(id)arg6 reminderForBalanceIdentifier:(id)arg7;
- (id)pass;
- (id)reminderForBalanceIdentifier;
- (void)setActionForBalanceIdentifier:(id)arg1;
- (void)setBalances:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setReminderForBalanceIdentifier:(id)arg1;
- (void)setTransitBalanceModel:(id)arg1;
- (void)setTransitPassProperties:(id)arg1;
- (void)setTransitPropertiesBalanceReminder:(id)arg1;
- (id)transitBalanceModel;
- (id)transitPassProperties;
- (id)transitPropertiesBalanceReminder;

@end
