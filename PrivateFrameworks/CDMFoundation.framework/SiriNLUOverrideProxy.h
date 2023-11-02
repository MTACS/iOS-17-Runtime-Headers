
@interface SiriNLUOverrideProxy : NSObject {
    void componentOverrideStore;
    void overrideResults;
    void store;
    void swiftifiedInputs;
}

- (void).cxx_destruct;
- (bool)deleteWithOverrideNamespace:(int)arg1 source:(int)arg2;
- (id)init;
- (id)initWithUseTrie:(bool)arg1 useMemory:(bool)arg2;
- (bool)insertWithCollection:(id)arg1;
- (bool)isOverrideStoreValid;
- (bool)loadComponentOverrideTrieStoreWithTrieFilePath:(id)arg1;
- (bool)loadGlobalOverrideTrieStoreWithTrieFilePath:(id)arg1;
- (id)matchWithInputs:(id)arg1 overrideNamespace:(int)arg2;
- (id)matchWithInputs:(id)arg1 shouldAppend:(bool*)arg2;
- (void)preheatWithLanguageCode:(id)arg1;
- (bool)setupWithLanguageCode:(id)arg1 filePath:(id)arg2;

@end
