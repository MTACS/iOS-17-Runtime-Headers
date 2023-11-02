
@interface WFChangeCaseIntentHandler : NSObject <WFChangeCaseIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)handleChangeCase:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveTextForChangeCase:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveTypeForChangeCase:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)stringByApplyingAlternatingCaseToString:(id)arg1;
- (id)stringByApplyingSentenceCaseToString:(id)arg1 withLocale:(id)arg2;
- (id)stringByApplyingTitleCaseToString:(id)arg1;

@end
