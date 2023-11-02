
@interface PGSearchThumbnailMomentAssetPairUUID : NSObject <NSCoding, NSSecureCoding> {
    NSString * _assetUUID;
    NSString * _momentUUID;
}

@property (nonatomic, readonly) NSString *assetUUID;
@property (nonatomic, readonly) NSString *momentUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAssetUUID:(id)arg1 momentUUID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)momentUUID;

@end
