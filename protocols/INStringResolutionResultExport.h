
@protocol INStringResolutionResultExport <NSObject, JSExport>

@required

+ (id)confirmationRequiredWithStringToConfirm:(NSString *)arg1;
+ (id)disambiguationWithStringsToDisambiguate:(NSArray *)arg1;
+ (id)successWithResolvedString:(NSString *)arg1;

- (id)init;

@end
