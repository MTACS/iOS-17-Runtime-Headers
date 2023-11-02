
@interface CKDAssetBatch : NSObject {
    NSArray * _assetRecords;
    CKDAssetTokenRequest * _assetTokenRequest;
    CKDAssetZone * _assetZone;
    NSData * _authPutRequest;
    NSData * _authPutResponse;
    NSDictionary * _authPutResponseHeaders;
    bool  _isFailed;
    bool  _useMMCSEncryptionV2;
}

@property (nonatomic, readonly) NSArray *allMMCSItems;
@property (nonatomic, readonly) NSArray *allMMCSSectionItems;
@property (nonatomic, readonly) NSArray *allRegularAndSectionAndRereferenceItems;
@property (nonatomic, readonly) NSArray *allRereferenceMMCSItems;
@property (nonatomic, readonly) NSArray *assetRecords;
@property (nonatomic) CKDAssetTokenRequest *assetTokenRequest;
@property (nonatomic, readonly) CKDAssetZone *assetZone;
@property (nonatomic, retain) NSData *authPutRequest;
@property (nonatomic, retain) NSData *authPutResponse;
@property (nonatomic, retain) NSDictionary *authPutResponseHeaders;
@property (nonatomic) bool isFailed;
@property (readonly) unsigned int size;
@property (readonly) unsigned int sizeUpperBound;
@property (nonatomic) bool useMMCSEncryptionV2;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addAssetRecord:(id)arg1;
- (id)allMMCSAndSectionItems;
- (id)allMMCSItems;
- (id)allMMCSSectionItems;
- (id)allRegularAndSectionAndRereferenceItems;
- (id)allRereferenceMMCSItems;
- (id)assetRecords;
- (id)assetTokenRequest;
- (id)assetZone;
- (id)authPutRequest;
- (id)authPutResponse;
- (id)authPutResponseHeaders;
- (id)description;
- (void)failIfNotDoneAllRegularAndSectionAndRereferenceItemsWithError:(id)arg1;
- (id)firstMMCSItemError;
- (id)initWithAssetZone:(id)arg1;
- (bool)isEmptyOfAssets;
- (bool)isEmptyOfRereferencesAssets;
- (bool)isFailed;
- (bool)isPackageSectionBatch;
- (bool)isRereferenceAssetBatch;
- (void)setAssetTokenRequest:(id)arg1;
- (void)setAuthPutRequest:(id)arg1;
- (void)setAuthPutResponse:(id)arg1;
- (void)setAuthPutResponseHeaders:(id)arg1;
- (void)setIsFailed:(bool)arg1;
- (void)setUseMMCSEncryptionV2:(bool)arg1;
- (unsigned int)size;
- (unsigned int)sizeUpperBound;
- (bool)useMMCSEncryptionV2;

@end
