
@interface MSDKManifestFileItem : MSDKManifestItem {
    NSString * _bundleFilePath;
    NSDictionary * _fileAttributes;
    NSDictionary * _fileExtendedAttributes;
    NSData * _fileHash;
    NSString * _fileType;
    NSString * _manifestFilePath;
    NSString * _symbolicLinkTargetFilePath;
}

@property (nonatomic, readonly) NSString *bundleFilePath;
@property (nonatomic, readonly) NSDictionary *fileAttributes;
@property (nonatomic, readonly) NSDictionary *fileExtendedAttributes;
@property (nonatomic, readonly) NSData *fileHash;
@property (nonatomic, readonly) NSString *fileType;
@property (nonatomic, readonly) NSString *manifestFilePath;
@property (nonatomic, readonly) NSString *symbolicLinkTargetFilePath;

- (void).cxx_destruct;
- (id)bundleFilePath;
- (id)description;
- (id)fileAttributes;
- (id)fileExtendedAttributes;
- (id)fileHash;
- (id)fileType;
- (id)initWithIdentifier:(id)arg1 andDictionary:(id)arg2 forComponent:(id)arg3;
- (id)manifestFilePath;
- (id)symbolicLinkTargetFilePath;

@end
