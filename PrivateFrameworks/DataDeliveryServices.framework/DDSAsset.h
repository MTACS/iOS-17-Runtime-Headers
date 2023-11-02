
@interface DDSAsset : NSObject <NSCopying> {
    unsigned long long  _assetState;
    NSString * _assetType;
    NSString * _assetUUID;
    NSDictionary * _attributes;
    unsigned long long  _compatibilityVersion;
    unsigned long long  _contentVersion;
    NSString * _dataType;
    NSString * _debuggingID;
    NSString * _description;
    NSString * _installDate;
    NSURL * _localURL;
    NSString * _locale;
    NSString * _shortName;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) unsigned long long assetState;
@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) NSString *assetUUID;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) unsigned long long compatibilityVersion;
@property (nonatomic, readonly) unsigned long long contentVersion;
@property (nonatomic, readonly) NSString *dataType;
@property (nonatomic, readonly) NSString *debuggingID;
@property (nonatomic, readonly) NSString *installDate;
@property (nonatomic, readonly) NSURL *localURL;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSString *shortName;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (id)debuggingIDsForAssets:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)assetState;
- (id)assetType;
- (id)assetUUID;
- (id)attributes;
- (unsigned long long)compatibilityVersion;
- (unsigned long long)contentVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataType;
- (id)debuggingID;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAttributes:(id)arg1 localURL:(id)arg2;
- (id)installDate;
- (bool)isEqual:(id)arg1;
- (id)localURL;
- (id)locale;
- (id)shortName;
- (id)uniqueIdentifier;

@end
