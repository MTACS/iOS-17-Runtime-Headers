
@protocol WFParameterState <NSCopying, WFVariableSerialization>

@required

- (NSArray *)containedVariables;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)processWithContext:(void *)arg1 userInputRequiredHandler:(void *)arg2 valueHandler:(void *)arg3; // needs 3 arg types, found 15: WFParameterStateProcessingContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, <WFParameterState> *, void*, id /* block */, void*, void, id /* block */, <NSSecureCoding> *, NSError *, void*

@optional

+ (Class)processingValueClass;
+ (NSArray *)processingValueClasses;

- (<WFPropertyListObject> *)legacySerializedRepresentation;

@end
