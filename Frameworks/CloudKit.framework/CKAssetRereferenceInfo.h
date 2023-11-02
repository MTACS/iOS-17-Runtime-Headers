
@interface CKAssetRereferenceInfo : NSObject {
    NSData * _assetKey;
    NSURL * _contentBaseURL;
    NSString * _destinationFieldName;
    NSString * _downloadToken;
    unsigned long long  _downloadTokenExpiration;
    NSError * _error;
    NSString * _owner;
    NSData * _referenceSignature;
    NSString * _requestor;
    CKRecordZoneID * _sourceZoneID;
}

@property (copy) NSData *assetKey;
@property (copy) NSURL *contentBaseURL;
@property (copy) NSString *destinationFieldName;
@property (copy) NSString *downloadToken;
@property unsigned long long downloadTokenExpiration;
@property (retain) NSError *error;
@property (copy) NSString *owner;
@property (copy) NSData *referenceSignature;
@property (copy) NSString *requestor;
@property (nonatomic, readonly, copy) CKRecordZoneID *sourceZoneID;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)assetKey;
- (id)contentBaseURL;
- (id)description;
- (id)destinationFieldName;
- (id)downloadToken;
- (unsigned long long)downloadTokenExpiration;
- (id)error;
- (id)initWithSourceZoneID:(id)arg1;
- (id)owner;
- (id)referenceSignature;
- (id)requestor;
- (void)setAssetKey:(id)arg1;
- (void)setContentBaseURL:(id)arg1;
- (void)setDestinationFieldName:(id)arg1;
- (void)setDownloadToken:(id)arg1;
- (void)setDownloadTokenExpiration:(unsigned long long)arg1;
- (void)setError:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setReferenceSignature:(id)arg1;
- (void)setRequestor:(id)arg1;
- (id)sourceZoneID;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)clearRecordFetchProperties;
- (bool)validateAndSetRecordFetchPropertiesWithAsset:(id)arg1;

@end
