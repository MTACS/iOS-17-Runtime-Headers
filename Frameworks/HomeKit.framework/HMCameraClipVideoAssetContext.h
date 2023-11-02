
@interface HMCameraClipVideoAssetContext : HMCameraClipAssetContext <NSCopying, NSSecureCoding> {
    NSData * _hlsPlaylist;
}

@property (readonly, copy) NSData *hlsPlaylist;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hlsPlaylist;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 expirationDate:(id)arg2 requiredHTTPHeaders:(id)arg3;
- (id)initWithURL:(id)arg1 expirationDate:(id)arg2 requiredHTTPHeaders:(id)arg3 hlsPlaylist:(id)arg4;
- (bool)isEqual:(id)arg1;

@end
