
@interface WFSplitTextIntentHandler : NSObject <WFSplitTextIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)handleSplitText:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveCustomSeparatorForSplitText:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveSeparatorForSplitText:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveTextForSplitText:(id)arg1 withCompletion:(id /* block */)arg2;

@end
