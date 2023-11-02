
@interface LTUIVisualTranslationService : NSObject

+ (id)compactObservations:(id)arg1;
+ (void)isTranslatable:(id)arg1 completion:(id /* block */)arg2;

- (void)translate:(id)arg1 completion:(id /* block */)arg2;
- (void)translate:(id)arg1 sourceLocale:(id)arg2 targetLocale:(id)arg3 completion:(id /* block */)arg4;
- (void)translate:(id)arg1 targetLocale:(id)arg2 completion:(id /* block */)arg3;

@end
