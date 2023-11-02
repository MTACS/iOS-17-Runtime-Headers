
@interface NPKPaymentProvisioningFlowPickerItem : NSObject {
    NSString * _identifier;
    NSArray * _products;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSArray *products;
@property (nonatomic, copy) NSString *title;

+ (id)itemWithIdentifier:(id)arg1 products:(id)arg2;
+ (id)itemWithIdentifier:(id)arg1 title:(id)arg2 products:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)products;
- (void)setProducts:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
