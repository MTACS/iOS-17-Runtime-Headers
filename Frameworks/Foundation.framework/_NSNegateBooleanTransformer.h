
@interface _NSNegateBooleanTransformer : _NSSharedValueTransformer

+ (Class)transformedValueClass;

- (bool)_isBooleanTransformer;
- (id)description;
- (id)transformedValue:(id)arg1;

@end
