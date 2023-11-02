
@interface WFCorrectSpellingIntentHandler : NSObject <WFCorrectSpellingIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)handleCorrectSpelling:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveTextForCorrectSpelling:(id)arg1 withCompletion:(id /* block */)arg2;

@end
