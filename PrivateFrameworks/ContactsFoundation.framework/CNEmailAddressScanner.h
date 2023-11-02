
@interface CNEmailAddressScanner : NSObject

- (void)enumerateEmailAddressesInString:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)firstEmailAddressInString:(id)arg1;
- (void)withEmailAddressesInString:(id)arg1 each:(id /* block */)arg2;

@end
