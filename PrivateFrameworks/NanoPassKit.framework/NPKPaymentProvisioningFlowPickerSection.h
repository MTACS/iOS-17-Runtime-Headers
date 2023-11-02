
@interface NPKPaymentProvisioningFlowPickerSection : NSObject {
    NSString * _footer;
    NSMutableArray * _items;
    NSNumber * _productType;
    NSString * _title;
}

@property (nonatomic, copy) NSString *footer;
@property (nonatomic, readonly) bool isAppleBalanceSection;
@property (nonatomic, readonly) bool isEMoneySection;
@property (nonatomic, readonly) bool isPaymentSection;
@property (nonatomic, readonly) bool isTransitSection;
@property (nonatomic, readonly, copy) NSMutableArray *items;
@property (nonatomic, readonly, copy) NSNumber *productType;
@property (nonatomic, copy) NSString *title;

+ (id)sectionWithTitle:(id)arg1 footer:(id)arg2 productType:(id)arg3;
+ (id)sectionWithTitle:(id)arg1 footer:(id)arg2 productType:(id)arg3 items:(id)arg4;
+ (id)sectionWithTitle:(id)arg1 productType:(id)arg2;
+ (id)sectionWithTitle:(id)arg1 productType:(id)arg2 items:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)footer;
- (bool)isAppleBalanceSection;
- (bool)isEMoneySection;
- (bool)isPaymentSection;
- (bool)isTransitSection;
- (id)items;
- (id)productType;
- (void)setFooter:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
