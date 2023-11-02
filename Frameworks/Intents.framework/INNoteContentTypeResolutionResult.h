
@interface INNoteContentTypeResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithNoteContentTypeToConfirm:(long long)arg1;
+ (id)successWithResolvedNoteContentType:(long long)arg1;

- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(id /* block */)arg4;

@end
