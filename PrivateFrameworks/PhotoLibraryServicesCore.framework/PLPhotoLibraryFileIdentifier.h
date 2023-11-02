
@interface PLPhotoLibraryFileIdentifier : NSObject {
    unsigned short  _bundleScope;
    bool  _isData;
    NSString * _originalFilename;
    unsigned int  _recipeId;
    unsigned int  _resourceType;
    unsigned int  _resourceVersion;
    NSString * _uti;
    NSString * _uuid;
}

@property (nonatomic, readonly) unsigned short bundleScope;
@property (nonatomic, readonly) bool isData;
@property (nonatomic, retain) NSString *originalFilename;
@property (nonatomic, readonly) unsigned int recipeId;
@property (nonatomic, readonly) unsigned int resourceType;
@property (nonatomic, readonly) unsigned int resourceVersion;
@property (nonatomic, retain) NSString *uti;
@property (nonatomic, retain) NSString *uuid;

+ (id)fileIdentifierForValidOriginalURL:(id)arg1;
+ (id)fileIdentifierForValidOriginalURL:(id)arg1 originalsDirectoryName:(id)arg2;
+ (bool)isValidFileIdentifierParametersForUUID:(id)arg1 utiString:(id)arg2 originalFilename:(id)arg3;
+ (bool)isValidOriginalURL:(id)arg1;
+ (id)uuidFromURL:(id)arg1;

- (void).cxx_destruct;
- (unsigned short)bundleScope;
- (id)description;
- (id)extension;
- (id)init;
- (id)initWithAssetUuid:(id)arg1 bundleScope:(unsigned short)arg2 uti:(id)arg3 resourceVersion:(unsigned int)arg4 recipeID:(unsigned int)arg5;
- (id)initWithAssetUuid:(id)arg1 bundleScope:(unsigned short)arg2 uti:(id)arg3 resourceVersion:(unsigned int)arg4 resourceType:(unsigned int)arg5;
- (id)initWithAssetUuid:(id)arg1 bundleScope:(unsigned short)arg2 uti:(id)arg3 resourceVersion:(unsigned int)arg4 resourceType:(unsigned int)arg5 recipeID:(unsigned int)arg6 originalFilename:(id)arg7;
- (bool)isData;
- (id)originalFilename;
- (unsigned int)recipeId;
- (unsigned int)resourceType;
- (unsigned int)resourceVersion;
- (void)setOriginalFilename:(id)arg1;
- (void)setUti:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uti;
- (id)uuid;

@end
