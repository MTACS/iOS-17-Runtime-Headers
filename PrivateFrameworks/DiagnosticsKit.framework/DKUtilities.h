
@interface DKUtilities : NSObject

+ (id)_fetchItemProviderFromItems:(id)arg1 withError:(id*)arg2;
+ (id)_sharedParsingFailedError;
+ (id)acceptableDecoderClasses;
+ (Class)diagnosticInputsClassAttribute;
+ (id)extensionAttributes;
+ (id)inputsForDiagnostic:(id)arg1 predicates:(id)arg2 specifications:(id)arg3 parameters:(id)arg4;
+ (id)inputsUsingClass:(Class)arg1 diagnostic:(id)arg2 predicates:(id)arg3 specifications:(id)arg4 parameters:(id)arg5;
+ (void)moveFilesToSharedContainerInMutableResult:(id)arg1;

@end
