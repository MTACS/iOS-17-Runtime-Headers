
@interface WFMatchTextIntentHandler : NSObject <WFMatchTextIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)handleMatchText:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveCaseSensitiveForMatchText:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolvePatternForMatchText:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveTextForMatchText:(id)arg1 withCompletion:(id /* block */)arg2;

@end
