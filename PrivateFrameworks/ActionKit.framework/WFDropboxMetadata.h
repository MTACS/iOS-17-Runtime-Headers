
@interface WFDropboxMetadata : MTLModel <MTLJSONSerializing, NSSecureCoding, WFNaming, WFRemoteFile> {
    NSDate * _clientModifiedDate;
    NSString * _contentHash;
    NSNumber * _fileSize;
    NSString * _identifier;
    NSString * _itemKind;
    NSString * _name;
    NSString * _path;
    NSString * _revision;
    NSDate * _serverModifiedDate;
}

@property (nonatomic, readonly) NSDate *clientModifiedDate;
@property (nonatomic, readonly, copy) NSString *contentHash;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) NSNumber *fileSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isDirectory;
@property (nonatomic, retain) NSString *itemKind;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *path;
@property (nonatomic, readonly, copy) NSString *revision;
@property (nonatomic, readonly) NSDate *serverModifiedDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)clientModifiedDateJSONTransformer;
+ (id)serverModifiedDateJSONTransformer;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientModifiedDate;
- (id)contentHash;
- (id)fileSize;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isDirectory;
- (bool)isEqual:(id)arg1;
- (id)itemKind;
- (id)name;
- (id)path;
- (id)revision;
- (id)serverModifiedDate;
- (void)setItemKind:(id)arg1;
- (id)wfFileSize;
- (id)wfFileType;
- (bool)wfIsDirectory;
- (bool)wfIsEqualToFile:(id)arg1;
- (id)wfLastModifiedDate;
- (id)wfName;
- (id)wfPath;

@end
