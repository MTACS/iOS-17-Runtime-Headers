
@interface PFPosterMedia : NSObject <NSCopying, NSSecureCoding> {
    NSString * _assetUUID;
    PFPosterEditConfiguration * _editConfiguration;
    long long  _mediaType;
    NSString * _subpath;
    unsigned long long  _version;
}

@property (nonatomic, retain) NSString *assetUUID;
@property (nonatomic, retain) PFPosterEditConfiguration *editConfiguration;
@property (nonatomic) long long mediaType;
@property (nonatomic, retain) NSString *subpath;
@property (nonatomic) unsigned long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)editConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAssetUUID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)mediaType;
- (void)setAssetUUID:(id)arg1;
- (void)setEditConfiguration:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setSubpath:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (id)subpath;
- (unsigned long long)version;

@end
