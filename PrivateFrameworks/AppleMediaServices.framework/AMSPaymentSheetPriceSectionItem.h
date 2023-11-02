
@interface AMSPaymentSheetPriceSectionItem : NSObject {
    NSString * _label;
    NSString * _price;
}

@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *price;

- (void).cxx_destruct;
- (id)label;
- (id)price;
- (void)setLabel:(id)arg1;
- (void)setPrice:(id)arg1;

@end
