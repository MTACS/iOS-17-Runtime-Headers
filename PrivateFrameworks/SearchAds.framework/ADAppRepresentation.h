
@interface ADAppRepresentation : NSObject {
    NSString * _adamID;
    NSDictionary * _assetInformation;
}

@property (nonatomic, retain) NSString *adamID;
@property (nonatomic, retain) NSDictionary *assetInformation;

- (void).cxx_destruct;
- (id)adamID;
- (id)assetInformation;
- (id)initWithAdamID:(id)arg1;
- (id)initWithAdamID:(id)arg1 assetInformation:(id)arg2;
- (void)setAdamID:(id)arg1;
- (void)setAssetInformation:(id)arg1;

@end
