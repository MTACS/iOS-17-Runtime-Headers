
@interface XRSecureUnarchiveFromDataTransformer : NSValueTransformer

+ (void)addWhitelistedClass:(Class)arg1;
+ (id)whitelistedClassesForTransforming;

- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end
