
@interface TRIMAAssetMetadata : NSObject <NSCopying> {
    unsigned long long  _downloadSize;
    NSString * _namespaceNameForEncryptionKey;
}

@property (nonatomic, readonly) unsigned long long downloadSize;
@property (nonatomic, readonly) NSString *namespaceNameForEncryptionKey;

+ (id)metadataWithDownloadSize:(unsigned long long)arg1 namespaceNameForEncryptionKey:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithReplacementDownloadSize:(unsigned long long)arg1;
- (id)copyWithReplacementNamespaceNameForEncryptionKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)downloadSize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDownloadSize:(unsigned long long)arg1 namespaceNameForEncryptionKey:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMetadata:(id)arg1;
- (id)namespaceNameForEncryptionKey;

@end
