
@interface SRAssetBundle : NSObject {
    NSMutableDictionary * _contents;
    NSLocale * _locale;
}

@property (nonatomic, readonly) NSArray *contentTypes;
@property (nonatomic, readonly) NSLocale *locale;

- (void).cxx_destruct;
- (id)assetWithContentType:(id)arg1 contentName:(id)arg2;
- (id)assetsWithContentType:(id)arg1;
- (id)contentTypes;
- (id)initWithLocale:(id)arg1;
- (void)loadAssetsWithContentType:(id)arg1 contentName:(id)arg2 contentPath:(id)arg3;
- (id)locale;

@end
