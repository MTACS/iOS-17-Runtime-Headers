
@interface PLZeroKeywordStore : NSObject {
    NSString * _storePath;
}

+ (id)expectedClasses;

- (void).cxx_destruct;
- (id)currentZeroKeywords;
- (id)currentZeroKeywordsForLibraryScope:(long long)arg1;
- (void)deleteStore;
- (id)initWithPath:(id)arg1;
- (void)updateZeroKeywordsTo:(id)arg1;

@end
