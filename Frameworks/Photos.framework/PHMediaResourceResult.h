
@interface PHMediaResourceResult : PHCompositeMediaResult {
    PHAssetResource * _assetResource;
    NSData * _assetResourceData;
    NSURL * _assetResourceFileURL;
}

@property (nonatomic, retain) NSData *assetResourceData;
@property (nonatomic, copy) NSURL *assetResourceFileURL;

- (void).cxx_destruct;
- (id)adjustmentData;
- (id)allowedInfoKeys;
- (id)assetResourceData;
- (id)assetResourceFileURL;
- (bool)containsValidData;
- (id)exifOrientation;
- (id)imageURL;
- (id)initWithRequestID:(int)arg1 assetResource:(id)arg2;
- (id)mediaMetadata;
- (id)sanitizedInfoDictionary;
- (void)setAssetResourceData:(id)arg1;
- (void)setAssetResourceFileURL:(id)arg1;
- (id)uniformTypeIdentifier;
- (id)videoURL;

@end
