
@interface SDSodiumSynonyms : NSObject {
    NSDictionary * synonymDictionary;
}

- (void).cxx_destruct;
- (id)_cleanWord:(id)arg1 unacceptableCharSet:(id)arg2;
- (bool)_loadSynonymsFromFile:(id)arg1 error:(id*)arg2;
- (id)getSynonymsForWord:(id)arg1;
- (id)init;
- (void)loadSynonymDictionary;

@end
