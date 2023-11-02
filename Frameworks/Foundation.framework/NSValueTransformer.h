
@interface NSValueTransformer : NSObject

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)allowsReverseTransformation;
+ (void)setValueTransformer:(id)arg1 forName:(id)arg2;
+ (Class)transformedValueClass;
+ (id)valueTransformerForName:(id)arg1;
+ (id)valueTransformerNames;

- (id)_initForFoundationOnly;
- (id)init;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (Class)_intents_resolutionResultClass;
+ (long long)_intents_valueType;

// Image: /System/Library/PrivateFrameworks/DVTInstrumentsUtilities.framework/DVTInstrumentsUtilities

+ (void)xr_registerSecureUnarchiveTransformer;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

+ (id)if_transformerUsingForwardTransformation:(id /* block */)arg1 reverseTransformation:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)mtl_JSONArrayTransformerWithModelClass:(Class)arg1;
+ (id)mtl_JSONDictionaryTransformerWithModelClass:(Class)arg1;
+ (id)mtl_URLValueTransformer;
+ (id)mtl_UUIDValueTransformer;
+ (id)mtl_arrayMappingTransformerWithTransformer:(id)arg1;
+ (id)mtl_booleanValueTransformer;
+ (id)mtl_dateTransformerWithDateFormat:(id)arg1 calendar:(id)arg2 locale:(id)arg3 timeZone:(id)arg4 defaultDate:(id)arg5;
+ (id)mtl_dateTransformerWithDateFormat:(id)arg1 locale:(id)arg2;
+ (id)mtl_numberTransformerWithNumberStyle:(unsigned long long)arg1 locale:(id)arg2;
+ (id)mtl_transformerWithFormatter:(id)arg1 forObjectClass:(Class)arg2;
+ (id)mtl_validatingTransformerForClass:(Class)arg1;
+ (id)mtl_valueMappingTransformerWithDictionary:(id)arg1;
+ (id)mtl_valueMappingTransformerWithDictionary:(id)arg1 defaultValue:(id)arg2 reverseDefaultValue:(id)arg3;

- (id)mtl_invertedTransformer;

@end
