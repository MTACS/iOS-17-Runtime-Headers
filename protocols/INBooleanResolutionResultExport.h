
@protocol INBooleanResolutionResultExport <NSObject, JSExport>

@required

+ (id)confirmationRequiredWithValueToConfirm:(NSNumber *)arg1;
+ (id)successWithResolvedValue:(bool)arg1;

- (id)init;

@end
