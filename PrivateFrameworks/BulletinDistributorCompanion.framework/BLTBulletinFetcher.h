
@interface BLTBulletinFetcher : NSObject {
    NSDictionary * _bulletinIDs;
    id /* block */  _clientCompletion;
    id /* block */  _fetcher;
    NSArray * _publisherMatchIDsForSection;
    unsigned long long  _publisherMatchIDsForSectionIndex;
    NSArray * _sectionIDs;
    long long  _sectionIDsIndex;
}

+ (id)batchBulletinFetchForBulletinIDs:(id)arg1 fetcher:(id /* block */)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_fetchBulletins;
- (bool)_incrementSection;
- (void)_setBulletinIDs:(id)arg1;
- (void)_setClientCompletion:(id /* block */)arg1;
- (void)_setFetcher:(id /* block */)arg1;

@end
