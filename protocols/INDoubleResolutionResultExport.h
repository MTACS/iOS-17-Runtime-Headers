
@protocol INDoubleResolutionResultExport <NSObject, JSExport>

@required

+ (id)confirmationRequiredWithValueToConfirm:(NSNumber *)arg1;
+ (id)successWithResolvedValue:(double)arg1;

- (id)init;

@end
