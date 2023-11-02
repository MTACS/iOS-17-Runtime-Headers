
@interface WFMatchTextGetGroupIntentHandler : NSObject <WFMatchTextGetGroupIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)handleMatchTextGetGroup:(id)arg1 completion:(id /* block */)arg2;
- (id)matchedTextInString:(id)arg1 withResult:(id)arg2 atIndex:(long long)arg3;
- (void)resolveGroupIndexForMatchTextGetGroup:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveMatchesForMatchTextGetGroup:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveTypeForMatchTextGetGroup:(id)arg1 withCompletion:(id /* block */)arg2;

@end
