
@interface PUCurationPeopleBrowserViewController : PXPeopleDetailSettingsViewController {
    PUCurationAssetBrowserViewController * _assetBrowserViewController;
    NSMutableDictionary * _facesByPersonLocalIdentifier;
    PNScoreConfiguration * _scoreConfiguration;
}

@property (nonatomic, retain) PUCurationAssetBrowserViewController *assetBrowserViewController;
@property (nonatomic, retain) NSMutableDictionary *facesByPersonLocalIdentifier;
@property (nonatomic, retain) PNScoreConfiguration *scoreConfiguration;

- (void).cxx_destruct;
- (id)assetBrowserViewController;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)facesByPersonLocalIdentifier;
- (id)initWithScoreConfiguration:(id)arg1;
- (id)scoreConfiguration;
- (void)setAssetBrowserViewController:(id)arg1;
- (void)setFacesByPersonLocalIdentifier:(id)arg1;
- (void)setScoreConfiguration:(id)arg1;

@end
