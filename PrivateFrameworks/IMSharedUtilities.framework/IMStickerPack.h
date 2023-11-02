
@interface IMStickerPack : NSObject {
    NSString * _GUID;
    NSString * _appBundleIdentifier;
    NSString * _appVersion;
    NSURL * _displayAssetURL;
    NSURL * _fileURL;
    NSString * _name;
    NSMutableSet * _stickers;
}

@property (nonatomic, copy) NSString *GUID;
@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic, copy) NSString *appVersion;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSURL *displayAssetURL;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSSet *stickers;

- (void).cxx_destruct;
- (id)GUID;
- (id)_generatePackGUIDWithPackID:(id)arg1 appBundleID:(id)arg2 appVersion:(id)arg3;
- (void)addSticker:(id)arg1;
- (id)appBundleIdentifier;
- (id)appVersion;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayAssetURL;
- (id)fileURL;
- (id)initWithDictionary:(id)arg1;
- (id)initWithGUID:(id)arg1 name:(id)arg2 displayAssetURL:(id)arg3 fileURL:(id)arg4 appBundleIdentifier:(id)arg5 appVersion:(id)arg6;
- (id)initWithStickerPackProperties:(id)arg1 stickerPackBundleURL:(id)arg2 appBundleIdentifier:(id)arg3 appVersion:(id)arg4;
- (id)name;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setAppVersion:(id)arg1;
- (void)setDisplayAssetURL:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setGUID:(id)arg1;
- (void)setName:(id)arg1;
- (id)stickers;

@end
