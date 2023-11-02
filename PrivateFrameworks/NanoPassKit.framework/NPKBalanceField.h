
@interface NPKBalanceField : NSObject <NPKBalanceField> {
    PKPaymentPassAction * _action;
    PKPaymentBalance * _balance;
    NSString * _formattedValue;
    NSString * _identifier;
    bool  _isPrimaryBalance;
    NSString * _label;
    NSDate * _pendingUpdateExpireDate;
    NSString * detailLabel;
}

@property (nonatomic, readonly) PKPaymentPassAction *action;
@property (nonatomic, readonly) PKPaymentBalance *balance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *detailLabel;
@property (nonatomic, readonly) NSString *formattedValue;
@property (nonatomic, readonly) bool hasPendingUpdate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isPrimaryBalance;
@property (nonatomic, readonly) NSString *label;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)action;
- (id)balance;
- (id)description;
- (id)detailLabel;
- (id)formattedValue;
- (bool)hasPendingUpdate;
- (id)identifier;
- (id)initWithBalance:(id)arg1 label:(id)arg2 formattedValue:(id)arg3 identifier:(id)arg4 primaryBalance:(bool)arg5 action:(id)arg6 pendingUpdateExpireDate:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isPrimaryBalance;
- (id)label;

@end
