
@interface CKMergeableDelta : NSObject <CKEncryptable, CKPropertiesDescription, NSCopying, NSSecureCoding> {
    NSData * __data;
    CKAsset * _asset;
    long long  _encryptMetadataTernary;
    NSData * _encryptedData;
    NSURL * _fileURL;
    CKMergeableDeltaMetadata * _metadata;
    CKMergeableValueID * _valueID;
}

@property (copy) NSData *_data;
@property (retain) CKAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) CKMergeableDeltaID *deltaID;
@property (readonly, copy) NSString *description;
@property long long encryptMetadataTernary;
@property (copy) NSData *encryptedData;
@property (copy) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (retain) CKMergeableDeltaMetadata *metadata;
@property (nonatomic, readonly) bool needsDecryption;
@property (nonatomic, readonly) bool needsEncryption;
@property (readonly) Class superclass;
@property (copy) CKMergeableValueID *valueID;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (unsigned long long)maxInlineDeltaSize;
+ (long long)suggestedDeltaSizeForContainer:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)_data;
- (id)asset;
- (bool)contentSize:(unsigned long long*)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataBackedDeltaWithError:(id*)arg1;
- (id)dataWithError:(id*)arg1;
- (id)deltaID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)encryptMetadataTernary;
- (id)encryptedData;
- (id)fileURL;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 metadata:(id)arg2;
- (id)initWithFileURL:(id)arg1 metadata:(id)arg2;
- (id)initWithValueID:(id)arg1 metadata:(id)arg2;
- (id)initWithValueID:(id)arg1 metadata:(id)arg2 asset:(id)arg3;
- (id)initWithValueID:(id)arg1 metadata:(id)arg2 data:(id)arg3;
- (id)initWithValueID:(id)arg1 metadata:(id)arg2 encryptedData:(id)arg3;
- (id)initWithValueID:(id)arg1 metadata:(id)arg2 fileURL:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (void)populateAssetIfNecessaryWithMaxInlineSize:(unsigned long long)arg1;
- (bool)protobufSize:(unsigned long long*)arg1 error:(id*)arg2;
- (id)redactedDescription;
- (void)setAsset:(id)arg1;
- (void)setEncryptMetadataTernary:(long long)arg1;
- (void)setEncryptedData:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setValueID:(id)arg1;
- (void)set_data:(id)arg1;
- (void)unpopulateAsset;
- (id)valueID;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (bool)decryptWithContext:(id)arg1 error:(id*)arg2;
- (bool)encryptWithContext:(id)arg1 error:(id*)arg2;
- (bool)needsDecryption;
- (bool)needsEncryption;
- (bool)unwrapAssetKeyWithShareProtection:(struct _OpaquePCSShareProtection { }*)arg1 pcsManager:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/CloudKitDistributedSync.framework/CloudKitDistributedSync

- (id)atomBatchStorage;
- (id)initWithAtomBatch:(id)arg1 error:(id*)arg2;
- (void)setAtomBatchStorage:(id)arg1;

@end
