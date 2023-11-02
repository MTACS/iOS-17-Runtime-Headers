
@protocol INSpeakableStringResolutionResultExport <NSObject, JSExport>

@required

+ (id)confirmationRequiredWithStringToConfirm:(INSpeakableString *)arg1;
+ (id)disambiguationWithStringsToDisambiguate:(NSArray *)arg1;
+ (id)successWithResolvedString:(INSpeakableString *)arg1;

- (id)init;

@end
