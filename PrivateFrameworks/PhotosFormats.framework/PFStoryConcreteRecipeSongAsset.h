
@interface PFStoryConcreteRecipeSongAsset : PFStoryConcreteRecipeAsset <PFStoryRecipeMutableSongAsset> {
    NSString * _catalog;
    long long  _category;
    NSString * _colorGradeCategory;
    NSString * _songID;
    long long  _subcategory;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *catalog;
@property (nonatomic, readonly) long long category;
@property (nonatomic, retain) NSString *colorGradeCategory;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) NSString *songID;
@property (nonatomic, readonly) long long subcategory;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *url;

+ (id)URLWithCatalog:(id)arg1 songID:(id)arg2;
+ (bool)decomposeURL:(id)arg1 usingBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)catalog;
- (long long)category;
- (id)colorGradeCategory;
- (id)description;
- (id)initWithIdentifier:(id)arg1 category:(long long)arg2 subcategory:(long long)arg3 catalog:(id)arg4 songID:(id)arg5 title:(id)arg6 subtitle:(id)arg7;
- (id)initWithIdentifier:(id)arg1 kind:(long long)arg2 url:(id)arg3;
- (bool)isEqualToAsset:(id)arg1;
- (void)setColorGradeCategory:(id)arg1;
- (id)songID;
- (long long)subcategory;
- (id)subtitle;
- (id)title;

@end
