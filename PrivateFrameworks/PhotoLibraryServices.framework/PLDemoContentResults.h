
@interface PLDemoContentResults : NSObject {
    NSArray * _assetIDsToDelete;
    NSArray * _assetsToRevert;
}

@property (nonatomic, retain) NSArray *assetIDsToDelete;
@property (nonatomic, retain) NSArray *assetsToRevert;

- (void).cxx_destruct;
- (id)assetIDsToDelete;
- (id)assetsToRevert;
- (void)setAssetIDsToDelete:(id)arg1;
- (void)setAssetsToRevert:(id)arg1;

@end
