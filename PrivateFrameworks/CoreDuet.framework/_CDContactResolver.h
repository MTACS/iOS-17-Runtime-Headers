
@interface _CDContactResolver : NSObject

+ (id)normalizedStringFromContactString:(id)arg1;
+ (id)resolveContact:(id)arg1 usingStore:(id)arg2;
+ (id)resolveContactIdentifier:(id)arg1 usingStore:(id)arg2;
+ (id)resolveContactIfPossibleFromContactIdentifierString:(id)arg1;
+ (id)resolveContactIfPossibleFromContactIdentifierString:(id)arg1 usingStore:(id)arg2;

@end
