
@interface PKDashboardTransitItem : NSObject <PKDashboardItem> {
    PKPassView * _passView;
    PKTransitBalanceModel * _transitBalanceModel;
    NSArray * _transitCommutePlans;
    unsigned long long  _transitItemType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPaymentPass *pass;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKTransitBalanceModel *transitBalanceModel;
@property (nonatomic, copy) NSArray *transitCommutePlans;
@property (nonatomic) unsigned long long transitItemType;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithPassView:(id)arg1;
- (id)pass;
- (void)setTransitBalanceModel:(id)arg1;
- (void)setTransitCommutePlans:(id)arg1;
- (void)setTransitItemType:(unsigned long long)arg1;
- (id)transitBalanceModel;
- (id)transitCommutePlans;
- (unsigned long long)transitItemType;

@end
