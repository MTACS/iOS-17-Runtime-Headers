
@interface TVAssetElement : TVViewElement

@property (nonatomic, readonly) NSString *actionParams;
@property (nonatomic, readonly) NSString *adamID;
@property (nonatomic, readonly) IKAssetElement *assetElement;
@property (nonatomic, readonly) NSURL *extrasURL;
@property (nonatomic, readonly) unsigned long long keyDelivery;
@property (nonatomic, readonly) NSNumber *persistentID;
@property (nonatomic, readonly) NSNumber *rentalAdamID;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSURL *url;

- (id)actionParams;
- (id)adamID;
- (id)assetElement;
- (id)extrasURL;
- (bool)isEqual:(id)arg1;
- (unsigned long long)keyDelivery;
- (id)persistentID;
- (id)rentalAdamID;
- (unsigned long long)type;
- (id)url;

@end
