
@interface PXPeopleFaceTile : NSObject {
    PHAsset * _asset;
    PHFace * _face;
    PHPerson * _person;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) PHFace *face;
@property (readonly) bool isUserDefined;
@property (nonatomic, readonly) PHPerson *person;

- (void).cxx_destruct;
- (id)asset;
- (id)description;
- (id)face;
- (id)initWithFace:(id)arg1 asset:(id)arg2 person:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isUserDefined;
- (id)person;

@end
