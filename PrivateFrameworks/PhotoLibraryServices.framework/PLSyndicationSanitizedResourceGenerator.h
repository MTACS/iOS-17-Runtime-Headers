
@interface PLSyndicationSanitizedResourceGenerator : NSObject {
    <PLSyndicationSanitizedResourceGeneratorDelegate> * _delegate;
}

@property (nonatomic, readonly) <PLSyndicationSanitizedResourceGeneratorDelegate> *delegate;

- (void).cxx_destruct;
- (void)_generateAndStoreDerivativeResourcesForSyndicationResource:(id)arg1 completion:(id /* block */)arg2;
- (bool)_handleGenerateCompletionWithGenerateError:(id)arg1 storedRecipes:(id)arg2 sourceMetadata:(id)arg3 targetRecipe:(id)arg4 assetObjectID:(id)arg5 managedObjectContext:(id)arg6 timeZoneLookup:(id)arg7 error:(id*)arg8;
- (id)delegate;
- (void)generateAndStoreDerivativeResourcesForSyndicationResource:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDelegate:(id)arg1;

@end
