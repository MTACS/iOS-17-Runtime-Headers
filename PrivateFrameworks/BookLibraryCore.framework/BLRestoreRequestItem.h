
@interface BLRestoreRequestItem : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _assetDictionary;
    NSDictionary * _downloadDictionary;
}

@property (nonatomic, retain) NSDictionary *assetDictionary;
@property (nonatomic, retain) NSDictionary *downloadDictionary;

+ (id)_assetDictionaryWithDownloadMetadata:(id)arg1;
+ (id)_downloadDictionaryWithDownloadMetadata:(id)arg1 additionalDownloadPropertiesDictionary:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)downloadDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDownloadDictionary:(id)arg1 assetDictionary:(id)arg2;
- (id)initWithDownloadMetadataDictionary:(id)arg1 additionalDownloadPropertiesDictionary:(id)arg2;
- (void)setAssetDictionary:(id)arg1;
- (void)setDownloadDictionary:(id)arg1;

@end
