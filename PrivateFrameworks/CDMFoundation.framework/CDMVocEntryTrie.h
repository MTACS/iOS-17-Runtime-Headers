
@interface CDMVocEntryTrie : NSObject {
    CDMMarisaTrie * _vocTrie;
}

@property (nonatomic, readonly) bool isValid;

- (void).cxx_destruct;
- (id)entriesForText:(id)arg1;
- (bool)hasEntry:(id)arg1;
- (bool)hasPrefix:(id)arg1;
- (id)initWithFilePath:(id)arg1 versionNumber:(id)arg2;
- (bool)isValid;

@end
