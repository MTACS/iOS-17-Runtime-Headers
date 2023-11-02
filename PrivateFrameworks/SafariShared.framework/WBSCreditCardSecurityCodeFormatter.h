
@interface WBSCreditCardSecurityCodeFormatter : NSFormatter

+ (id)_normalizedSecurityCode:(id)arg1;

- (bool)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3;
- (bool)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3;
- (id)stringForObjectValue:(id)arg1;

@end
