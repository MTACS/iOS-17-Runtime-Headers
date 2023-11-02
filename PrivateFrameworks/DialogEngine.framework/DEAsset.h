
@interface DEAsset : NSObject {
    unsigned long long  _downloadType;
    unsigned long long  _encryptedSize;
    NSData * _encryptedVersion;
    NSData * _version;
}

@property unsigned long long downloadType;
@property (nonatomic) unsigned long long encryptedSize;
@property (nonatomic, retain) NSData *encryptedVersion;
@property (nonatomic, retain) NSData *version;

+ (id)assetFromPb:(const void*)arg1;
+ (void)assetToPb:(id)arg1 asset:(id)arg2 assetPb:(void*)arg3;
+ (unsigned long long)downloadTypeFromPb:(int)arg1;
+ (int)downloadTypeToPb:(unsigned long long)arg1;

- (void).cxx_destruct;
- (unsigned long long)downloadType;
- (unsigned long long)encryptedSize;
- (id)encryptedVersion;
- (void)setDownloadType:(unsigned long long)arg1;
- (void)setEncryptedSize:(unsigned long long)arg1;
- (void)setEncryptedVersion:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
