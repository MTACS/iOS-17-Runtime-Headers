
@interface PLEmailAddressManager : NSObject {
    NSMutableDictionary * _emailsForKey;
    NSMutableDictionary * _keysForEmails;
    PLLazyObject * _lazyAssetsdClient;
    int  _maxKey;
    PLPhotoLibraryPathManager * _pathManager;
}

- (void).cxx_destruct;
- (void)_loadDictionariesIfNeeded;
- (id)assetsdClient;
- (id)emailAddressForKey:(id)arg1;
- (id)initWithPathManager:(id)arg1 lazyAssetsdClient:(id)arg2;
- (id)keyForEmailAddress:(id)arg1;
- (id)plistPath;

@end
