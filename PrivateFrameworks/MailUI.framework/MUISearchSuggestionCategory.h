
@interface MUISearchSuggestionCategory : NSObject <NSCopying> {
    UIImage * _atomImage;
    NSString * _displayName;
    MUISearchSuggestionCategory * _groupingCategory;
    UIImage * _image;
    id /* block */  _imageInstantiationBlock;
    bool  _isLegacy;
    NSString * _parsecCategory;
    NSArray * _scopes;
}

@property (nonatomic, copy) UIImage *atomImage;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic) MUISearchSuggestionCategory *groupingCategory;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, copy) id /* block */ imageInstantiationBlock;
@property (nonatomic, readonly) bool isLegacy;
@property (nonatomic, retain) NSString *parsecCategory;
@property (nonatomic, copy) NSArray *scopes;

+ (id)allMailboxesCategory;
+ (id)contactCategory;
+ (id)documentCategory;
+ (id)genericCategory;
+ (id)instantAnswersCategory;
+ (id)linkCategory;
+ (id)locationCategory;
+ (id)recentGenericCategory;
+ (id)recentSearchCategory;
+ (id)suggestedSearchCategory;
+ (id)topHitsCategory;

- (void).cxx_destruct;
- (id)atomImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (id)groupingCategory;
- (id)image;
- (id /* block */)imageInstantiationBlock;
- (unsigned long long)indexOfScopeWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithDisplayName:(id)arg1;
- (id)initWithDisplayName:(id)arg1 groupingCategory:(id)arg2;
- (bool)isGroupedInCategory:(id)arg1;
- (bool)isLegacy;
- (id)parsecCategory;
- (id)scopes;
- (void)setAtomImage:(id)arg1;
- (void)setGroupingCategory:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageInstantiationBlock:(id /* block */)arg1;
- (void)setParsecCategory:(id)arg1;
- (void)setScopes:(id)arg1;

@end
