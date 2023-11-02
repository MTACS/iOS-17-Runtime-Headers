
@interface TCBundleResourcePackage : NSObject {
    NSMutableDictionary * mEntryMap;
    OISFUZipArchive * mZipArchive;
}

- (void).cxx_destruct;
- (id)entryWithName:(id)arg1 cacheResult:(bool)arg2;
- (id)initWithZipArchive:(id)arg1;

@end
