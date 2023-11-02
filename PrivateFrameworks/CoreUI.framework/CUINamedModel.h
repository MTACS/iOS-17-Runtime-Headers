
@interface CUINamedModel : CUINamedLookup

@property (nonatomic, readonly) MDLAsset *asset;

- (id)_renditionForKey:(id)arg1 inThemeRef:(unsigned long long)arg2;
- (id)asset;
- (id)description;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end
