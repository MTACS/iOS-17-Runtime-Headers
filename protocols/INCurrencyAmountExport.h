
@protocol INCurrencyAmountExport <NSObject, JSExport>

@required

- (NSDecimalNumber *)amount;
- (NSString *)currencyCode;
- (id)init;
- (void)setAmount:(NSDecimalNumber *)arg1;
- (void)setCurrencyCode:(NSString *)arg1;

@end
