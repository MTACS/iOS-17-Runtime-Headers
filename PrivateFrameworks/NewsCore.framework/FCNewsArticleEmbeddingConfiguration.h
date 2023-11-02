
@interface FCNewsArticleEmbeddingConfiguration : NSObject {
    bool  _shouldFetch;
    bool  _shouldPersist;
}

@property (nonatomic) bool shouldFetch;
@property (nonatomic) bool shouldPersist;

- (id)description;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)setShouldFetch:(bool)arg1;
- (void)setShouldPersist:(bool)arg1;
- (bool)shouldFetch;
- (bool)shouldPersist;

@end
