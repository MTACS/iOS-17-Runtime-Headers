
@interface DIUploadAsset : NSObject <NSSecureCoding> {
    NSUUID * _assetID;
    NSData * _data;
    long long  _type;
}

@property (nonatomic, retain) NSUUID *assetID;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetID;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 assetType:(long long)arg2;
- (void)setAssetID:(id)arg1;
- (long long)type;

@end
