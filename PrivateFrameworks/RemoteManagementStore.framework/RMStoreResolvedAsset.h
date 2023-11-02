
@interface RMStoreResolvedAsset : NSObject <NSSecureCoding> {
    NSData * _assetData;
    NSURL * _assetFile;
    NSData * _assetKeychainReference;
    NSString * _assetKeychainUserName;
}

@property (nonatomic, readonly, copy) NSData *assetData;
@property (nonatomic, readonly, copy) NSURL *assetFile;
@property (nonatomic, readonly, copy) NSData *assetKeychainReference;
@property (nonatomic, readonly, copy) NSString *assetKeychainUserName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetData;
- (id)assetFile;
- (id)assetKeychainReference;
- (id)assetKeychainUserName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithFile:(id)arg1;
- (id)initWithKeychainReference:(id)arg1;
- (id)initWithKeychainReference:(id)arg1 userName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToResolvedAsset:(id)arg1;

@end
