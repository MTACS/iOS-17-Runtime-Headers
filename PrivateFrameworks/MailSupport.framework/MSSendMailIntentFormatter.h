
@interface MSSendMailIntentFormatter : NSFormatter

- (id)_stringForAddresses:(id)arg1;
- (bool)allowsReverseTransformation;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)stringForObjectValue:(id)arg1;

@end
