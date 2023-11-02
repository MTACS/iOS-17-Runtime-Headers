
@interface AAUIContactsProvider : AAContactsProvider {
    AAContactsManager * _contactsManager;
}

- (void).cxx_destruct;
- (void)_fetchImageDataForLocalContact:(id)arg1 ofSize:(double)arg2 withCompletion:(id /* block */)arg3;
- (void)_fetchImagesForContacts:(id)arg1 ofSize:(double)arg2 completion:(id /* block */)arg3;
- (void)_fetchServerImageDataFor:(id)arg1 WithCompletion:(id /* block */)arg2;
- (void)fetchSuggestedBeneficiariesWithImagesOfSize:(double)arg1 andCompletion:(id /* block */)arg2;
- (void)fetchSuggestedCustodiansWithImagesOfSize:(double)arg1 andCompletion:(id /* block */)arg2;
- (id)init;

@end
