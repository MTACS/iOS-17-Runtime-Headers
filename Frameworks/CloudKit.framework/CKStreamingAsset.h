
@interface CKStreamingAsset : NSObject <CKPropertiesDescription, CKRecordValue, HMBModelObjectStorage, NSCopying, NSSecureCoding> {
    NSURL * _downloadURL;
    NSDate * _downloadURLExpirationDate;
    long long  _expectedSizeBytes;
    NSData * _fileSignature;
    bool  _hasSize;
    C2RequestOptions * _immutableRequestOptions;
    NSString * _owner;
    NSData * _referenceSignature;
    long long  _reservedSize;
    long long  _size;
    NSString * _uploadReceipt;
    NSURL * _uploadURL;
    NSDate * _uploadURLExpirationDate;
}

@property (readonly) long long bytesUploaded;
@property (readonly) long long bytesUpperBound;
@property (readonly, copy) NSURL *contentDownloadURL;
@property (readonly, copy) NSDate *contentDownloadURLExpirationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSURL *downloadURL;
@property (copy) NSDate *downloadURLExpirationDate;
@property long long expectedSizeBytes;
@property (copy) NSData *fileSignature;
@property bool hasSize;
@property (readonly) unsigned long long hash;
@property (copy) C2RequestOptions *immutableRequestOptions;
@property (copy) NSString *owner;
@property (copy) NSData *referenceSignature;
@property (copy) C2RequestOptions *requestOptions;
@property long long reservedSize;
@property long long size;
@property (readonly) Class superclass;
@property (copy) NSString *uploadReceipt;
@property (copy) NSURL *uploadURL;
@property (copy) NSDate *uploadURLExpirationDate;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (long long)bytesUploaded;
- (long long)bytesUpperBound;
- (id)contentDownloadURL;
- (id)contentDownloadURLExpirationDate;
- (void)copyServerFieldsFromStreamingAsset:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)downloadURL;
- (id)downloadURLExpirationDate;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedSizeBytes;
- (id)fileSignature;
- (bool)hasSize;
- (id)immutableRequestOptions;
- (id)init;
- (id)initInternal;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpectedSizeBytes:(long long)arg1;
- (id)owner;
- (id)redactedDescription;
- (id)referenceSignature;
- (id)requestOptions;
- (long long)reservedSize;
- (void)setDownloadURL:(id)arg1;
- (void)setDownloadURLExpirationDate:(id)arg1;
- (void)setExpectedSizeBytes:(long long)arg1;
- (void)setFileSignature:(id)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setImmutableRequestOptions:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setReferenceSignature:(id)arg1;
- (void)setRequestOptions:(id)arg1;
- (void)setReservedSize:(long long)arg1;
- (void)setSize:(long long)arg1;
- (void)setUploadReceipt:(id)arg1;
- (void)setUploadURL:(id)arg1;
- (void)setUploadURLExpirationDate:(id)arg1;
- (long long)size;
- (id)uploadReceipt;
- (id)uploadURL;
- (id)uploadURLExpirationDate;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3;

- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2;

@end
