
@interface UNCKeyedDictionaryRepository : NSObject {
    NSString * _directory;
    NSString * _fileName;
    UNCBundleLibrarian * _librarian;
    NSString * _pathExtension;
}

- (void).cxx_destruct;
- (id)_dataAtPath:(id)arg1;
- (id)_dictionaryAtPath:(id)arg1;
- (id)_directoryForKey:(id)arg1;
- (id)_pathForKey:(id)arg1;
- (void)_removeDictionaryAtPath:(id)arg1;
- (bool)_saveDictionary:(id)arg1 atPath:(id)arg2;
- (id)allKeys;
- (id)dictionaryForKey:(id)arg1;
- (id)initWithDirectory:(id)arg1 fileName:(id)arg2 pathExtension:(id)arg3 librarian:(id)arg4;
- (void)removeDictionaryForKey:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;

@end
