
@interface ICSRelationshipTypeParameter : ICSPredefinedValue

+ (id)relationshipParameterFromCode:(unsigned long long)arg1;
+ (id)relationshipTypeParameterFromICSString:(id)arg1;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (Class)classForCoder;

@end
