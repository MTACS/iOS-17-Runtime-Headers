
@interface BlastDoorNicknameInformation : NSObject {
    void nicknameInformation;
}

@property (nonatomic, readonly) NSData *decryptionKey;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool has_updateInfoIncluded;
@property (nonatomic, readonly) bool includesWallpaperData;
@property (nonatomic, readonly) NSData *lowResWallpaperTag;
@property (nonatomic, readonly) NSString *messageType;
@property (nonatomic, readonly) NSString *recordKey;
@property (nonatomic, readonly) long long updateInfoIncluded;
@property (nonatomic, readonly) NSData *wallpaperMetadataTag;
@property (nonatomic, readonly) NSData *wallpaperTag;

- (void).cxx_destruct;
- (id)decryptionKey;
- (id)description;
- (bool)has_updateInfoIncluded;
- (bool)includesWallpaperData;
- (id)init;
- (id)lowResWallpaperTag;
- (id)messageType;
- (id)recordKey;
- (long long)updateInfoIncluded;
- (id)wallpaperMetadataTag;
- (id)wallpaperTag;

@end
