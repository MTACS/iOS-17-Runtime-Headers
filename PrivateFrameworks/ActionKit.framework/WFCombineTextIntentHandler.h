
@interface WFCombineTextIntentHandler : NSObject <WFCombineTextIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)handleCombineText:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveCustomSeparatorForCombineText:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveSeparatorForCombineText:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveTextForCombineText:(id)arg1 withCompletion:(id /* block */)arg2;

@end
