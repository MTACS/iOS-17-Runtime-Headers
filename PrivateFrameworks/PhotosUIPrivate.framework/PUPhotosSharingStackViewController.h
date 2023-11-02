
@interface PUPhotosSharingStackViewController : UIViewController <PXMessagesStackViewDelegate> {
    PHFetchResult * _assetFetchResult;
    PXMessagesStackView * _cardsView;
}

@property (nonatomic, readonly) PHFetchResult *assetFetchResult;
@property (nonatomic, readonly) PHAsset *currentAsset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetFetchResult;
- (id)currentAsset;
- (id)initWithAssetFetchResult:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)stackView:(id)arg1 didSelectAssetReference:(id)arg2;
- (void)viewDidLoad;

@end
