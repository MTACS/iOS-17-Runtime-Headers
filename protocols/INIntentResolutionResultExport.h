
@protocol INIntentResolutionResultExport <NSObject, JSExport>

@required

+ (id)resolutionResultConfirmationRequiredWithItemToConfirm:(NSObject *)arg1;
+ (id)resolutionResultDisambiguationWithItemsToDisambiguate:(NSArray *)arg1;
+ (id)resolutionResultNeedsValue;
+ (id)resolutionResultNotRequired;
+ (id)resolutionResultSuccessWithResolvedValue:(NSObject *)arg1;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1 alternativeItems:(NSArray *)arg2;

- (NSData *)_dataForIntentSlotDescription:(INIntentSlotDescription *)arg1;
- (NSArray *)alternatives;
- (NSArray *)disambiguationItems;
- (id)init;
- (NSObject *)itemToConfirm;
- (NSObject *)resolvedValue;
- (void)setAlternatives:(NSArray *)arg1;
- (void)setDisambiguationItems:(NSArray *)arg1;
- (void)setItemToConfirm:(NSObject *)arg1;
- (void)setResolvedValue:(NSObject *)arg1;
- (void)setUnsupportedReason:(unsigned long long)arg1;
- (unsigned long long)unsupportedReason;

@end
