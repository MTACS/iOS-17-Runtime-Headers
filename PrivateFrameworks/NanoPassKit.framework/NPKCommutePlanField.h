
@interface NPKCommutePlanField : NSObject <NPKCommutePlanField> {
    PKPaymentPassAction * _action;
    NSString * _detailLabel;
    NSArray * _details;
    NSString * _formattedValue;
    NSString * _identifier;
    NSString * _label;
    <NPKDateRange> * _usageDateRange;
}

@property (nonatomic, readonly) PKPaymentPassAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *detailLabel;
@property (nonatomic, readonly) NSArray *details;
@property (nonatomic, readonly) NSString *formattedValue;
@property (nonatomic, readonly) bool hasPendingUpdate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isCountBasedCommutePlan;
@property (nonatomic, readonly) NSString *label;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <NPKDateRange> *usageDateRange;

- (void).cxx_destruct;
- (id)action;
- (id)description;
- (id)detailLabel;
- (id)details;
- (id)formattedValue;
- (bool)hasPendingUpdate;
- (id)identifier;
- (id)initWithLabel:(id)arg1 detailLabel:(id)arg2 formattedValue:(id)arg3 usageDateRange:(id)arg4 identifier:(id)arg5 details:(id)arg6 action:(id)arg7;
- (bool)isCountBasedCommutePlan;
- (id)label;
- (id)usageDateRange;

@end
