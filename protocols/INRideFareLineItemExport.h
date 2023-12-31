
@protocol INRideFareLineItemExport <NSObject, JSExport>

@required

- (NSString *)currencyCode;
- (id)init;
- (NSDecimalNumber *)price;
- (void)setCurrencyCode:(NSString *)arg1;
- (void)setPrice:(NSDecimalNumber *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
