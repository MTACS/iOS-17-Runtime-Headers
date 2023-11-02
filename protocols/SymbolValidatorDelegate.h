
@protocol SymbolValidatorDelegate <NSObject>

@required

- (void)symbolValidator:(SymbolValidator *)arg1 didFailWithError:(NSError *)arg2;
- (void)symbolValidator:(SymbolValidator *)arg1 didValidateSymbols:(NSArray *)arg2;

@end
