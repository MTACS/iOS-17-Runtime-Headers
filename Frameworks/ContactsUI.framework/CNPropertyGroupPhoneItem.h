
@interface CNPropertyGroupPhoneItem : CNPropertyGroupItem

@property (nonatomic, readonly) CNPhoneNumber *phoneNumber;

+ (id)emptyValueForLabel:(id)arg1;

- (id)bestLabel:(id)arg1;
- (id)defaultActionURL;
- (id)displayStringForValue:(id)arg1;
- (id)normalizedValue;
- (id)phoneNumber;
- (id)valueForDisplayString:(id)arg1;

@end
