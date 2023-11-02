
@interface FCPuzzleTypeOverrides : NSObject {
    FCColor * _darkStyleThemeColor;
    FCAssetHandle * _exploreTileImageAssetHandle;
    FCColor * _themeColor;
}

@property (nonatomic, retain) FCColor *darkStyleThemeColor;
@property (nonatomic, retain) FCAssetHandle *exploreTileImageAssetHandle;
@property (nonatomic, retain) FCColor *themeColor;

- (void).cxx_destruct;
- (id)darkStyleThemeColor;
- (id)exploreTileImageAssetHandle;
- (id)initWithThemeColor:(id)arg1 darkStyleThemeColor:(id)arg2 exploreTileImageAssetHandle:(id)arg3;
- (void)setDarkStyleThemeColor:(id)arg1;
- (void)setExploreTileImageAssetHandle:(id)arg1;
- (void)setThemeColor:(id)arg1;
- (id)themeColor;

@end
