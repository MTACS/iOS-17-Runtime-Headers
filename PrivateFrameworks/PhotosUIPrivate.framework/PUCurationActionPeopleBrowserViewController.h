
@interface PUCurationActionPeopleBrowserViewController : PXPeopleDetailSettingsViewController {
    PUCurationActionAssetBrowserViewController * _assetBrowserViewController;
    NSMutableDictionary * _detectionTraitsByFaceLocalIdentifierByPersonLocalIdentifier;
    NSMutableDictionary * _facesByPersonLocalIdentifier;
    PUCurationTraitContainer * _traitContainer;
}

@property (nonatomic, retain) PUCurationActionAssetBrowserViewController *assetBrowserViewController;
@property (nonatomic, retain) NSMutableDictionary *detectionTraitsByFaceLocalIdentifierByPersonLocalIdentifier;
@property (nonatomic, retain) NSMutableDictionary *facesByPersonLocalIdentifier;
@property (nonatomic, retain) PUCurationTraitContainer *traitContainer;

- (void).cxx_destruct;
- (id)assetBrowserViewController;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)detectionTraitsByFaceLocalIdentifierByPersonLocalIdentifier;
- (id)facesByPersonLocalIdentifier;
- (id)initWithTraitContainer:(id)arg1;
- (void)setAssetBrowserViewController:(id)arg1;
- (void)setDetectionTraitsByFaceLocalIdentifierByPersonLocalIdentifier:(id)arg1;
- (void)setFacesByPersonLocalIdentifier:(id)arg1;
- (void)setTraitContainer:(id)arg1;
- (id)traitContainer;

@end
