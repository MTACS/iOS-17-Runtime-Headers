
@interface PXChangePersonKeyFaceAction : PXPhotosAction {
    PHAsset * _asset;
    PHFace * _keyFace;
    PHFace * _keyFaceForUndo;
    PHPerson * _person;
}

@property (nonatomic, readonly) PHFace *keyFace;
@property (nonatomic, readonly) PHPerson *person;

- (void).cxx_destruct;
- (void)_fetchKeyFaceForUndoIfNeeded;
- (void)_invalidateCache;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)analyticsEventName;
- (id)initWithPerson:(id)arg1 asset:(id)arg2;
- (id)initWithPerson:(id)arg1 keyFace:(id)arg2;
- (id)keyFace;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (id)person;

@end
