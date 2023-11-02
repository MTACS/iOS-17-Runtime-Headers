
@interface NSManagedObjectModelBundle : NSObject {
    NSBundle * _bundle;
    NSDictionary * _versionInfoDictionary;
}

- (id)_modelForVersionHashes:(id)arg1;
- (id)_modelForVersionHashes:(id)arg1 inStyle:(unsigned long long)arg2;
- (id)currentVersion;
- (id)currentVersionURL;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)modelVersions;
- (id)optimizedVersionURL;
- (id)urlForModelVersionWithName:(id)arg1;
- (id)versionChecksums;

@end
