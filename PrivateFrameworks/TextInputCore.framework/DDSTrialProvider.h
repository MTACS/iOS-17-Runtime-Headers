
@interface DDSTrialProvider : NSObject <DDSTrialProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)contentItemsFromAssets:(id)arg1 matchingFilter:(id)arg2;
- (void)fetchTrialAssetForQuery:(id)arg1 callback:(id /* block */)arg2;
- (void)registerDelegate:(id)arg1;
- (void)setUpTrialForQuery:(id)arg1;
- (void)unregisterDelegate:(id)arg1;

@end
