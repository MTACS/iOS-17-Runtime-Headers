
@interface AKAuthorizationNameFormatter : NSFormatter

+ (void)_addSymbolModifiersToCharacterSet:(id)arg1;
+ (id)validNameCharacterSet;

- (id)_cleanNameString:(id)arg1;
- (bool)_isOnlyWhitespace:(id)arg1;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (bool)isPartialStringValid:(id*)arg1 proposedSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 errorDescription:(id*)arg5;
- (id)stringForObjectValue:(id)arg1;

@end
