
@interface CKDWrappingContext : NSObject {
    NSString * _fieldName;
    NSData * _fileSignature;
    CKMergeableDeltaID * _mergeableDeltaID;
    CKRecordID * _recordID;
    NSData * _referenceSignature;
}

@property (nonatomic, retain) NSString *fieldName;
@property (nonatomic, retain) NSData *fileSignature;
@property (nonatomic, retain) CKMergeableDeltaID *mergeableDeltaID;
@property (nonatomic, retain) CKRecordID *recordID;
@property (nonatomic, retain) NSData *referenceSignature;

- (void).cxx_destruct;
- (id)assetContextString;
- (id)encryptedDataContextString;
- (id)fieldName;
- (id)fileSignature;
- (id)initWithRecordID:(id)arg1 fieldName:(id)arg2 mergeableDeltaID:(id)arg3 fileSignature:(id)arg4 referenceSignature:(id)arg5;
- (id)mergeableDeltaID;
- (id)recordID;
- (id)referenceSignature;
- (void)setFieldName:(id)arg1;
- (void)setFileSignature:(id)arg1;
- (void)setMergeableDeltaID:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setReferenceSignature:(id)arg1;

@end
