
@interface PXPeopleFaceTileImageManagerRequest : NSObject {
    PHAsset * _asset;
    long long  _deliveryMode;
    PHFace * _face;
    PHPerson * _person;
    bool  _synchronous;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic) long long deliveryMode;
@property (nonatomic, retain) PHFace *face;
@property (nonatomic, readonly) PHPerson *person;
@property (nonatomic) bool synchronous;

- (void).cxx_destruct;
- (id)asset;
- (long long)deliveryMode;
- (id)description;
- (id)face;
- (id)initWithFaceTile:(id)arg1;
- (id)initWithPerson:(id)arg1;
- (id)initWithPerson:(id)arg1 face:(id)arg2 asset:(id)arg3;
- (id)person;
- (void)setDeliveryMode:(long long)arg1;
- (void)setFace:(id)arg1;
- (void)setSynchronous:(bool)arg1;
- (bool)synchronous;

@end
