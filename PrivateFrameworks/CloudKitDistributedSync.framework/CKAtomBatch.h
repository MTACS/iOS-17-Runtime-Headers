
@interface CKAtomBatch : NSObject <NSCopying, NSSecureCoding> {
    id /* block */  _atomValueDescriptionBlock;
    CKXBackingStore * _backingStore;
    CKMergeableValueID * _mergeableValueID;
    CKMergeableDeltaVectors * _vectors;
}

@property (nonatomic, copy) id /* block */ atomValueDescriptionBlock;
@property (nonatomic, retain) CKXBackingStore *backingStore;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) CKDistributedTimestampStateVector *enumeratedContentsVector;
@property (nonatomic, readonly) bool fileBacked;
@property (nonatomic, readonly) unsigned char formatVersion;
@property (nonatomic, readonly) bool isWriting;
@property (nonatomic, readonly, copy) CKMergeableValueID *mergeableValueID;
@property (nonatomic, readonly) CKDSReadableStorage *storage;
@property (nonatomic, readonly) CKMergeableDeltaVectors *vectors;
@property (nonatomic, readonly) struct { unsigned char x1; unsigned char x2; } writerIdentity;

+ (id)atomBatchByMergingAtomBatches:(id)arg1 error:(id*)arg2;
+ (id)bindingForFormatVersion:(unsigned char)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_metadataForCoding;
- (bool)_setStorage:(id)arg1 optionsByReaderWriterClass:(id)arg2 error:(id*)arg3;
- (void)appendAtomWithBlock:(id /* block */)arg1;
- (id /* block */)atomValueDescriptionBlock;
- (id)backingStore;
- (id)contentsDescription;
- (id)contentsDescriptionWithStringSiteIdentifiers;
- (id)contentsDescriptionWithStringSiteIdentifiers:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)data;
- (id)dataWithError:(id*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAtomsWithOptions:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)enumeratedContentsVector;
- (bool)fileBacked;
- (void)finishWriting;
- (bool)finishWritingWithError:(id*)arg1;
- (unsigned char)formatVersion;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 mergeableValueID:(id)arg2 vectors:(id)arg3 error:(id*)arg4;
- (id)initWithData:(id)arg1 mergeableValueID:(id)arg2 vectors:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (id)initWithFileURL:(id)arg1 mergeableValueID:(id)arg2 vectors:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (id)initWithMergeableDelta:(id)arg1 error:(id*)arg2;
- (id)initWithStorage:(id)arg1 optionsByReaderWriterClass:(id)arg2 mergeableValueID:(id)arg3 vectors:(id)arg4 formatVersion:(unsigned char)arg5 error:(id*)arg6;
- (id)initWriterWithMergeableValueID:(id)arg1 metadata:(id)arg2 formatVersion:(unsigned char)arg3 error:(id*)arg4;
- (id)initWriterWithMergeableValueID:(id)arg1 metadata:(id)arg2 version:(unsigned char)arg3;
- (id)initWriterWithMergeableValueID:(id)arg1 vectors:(id)arg2 formatVersion:(unsigned char)arg3 error:(id*)arg4;
- (id)initWriterWithMergeableValueID:(id)arg1 vectors:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isWriting;
- (id)mergeableValueID;
- (void)setAtomValueDescriptionBlock:(id /* block */)arg1;
- (void)setBackingStore:(id)arg1;
- (bool)size:(unsigned long long*)arg1 error:(id*)arg2;
- (id)splitWithMaximumDeltaSize:(unsigned long long)arg1 error:(id*)arg2;
- (id)splitWithMaximumSize:(unsigned long long)arg1 error:(id*)arg2;
- (bool)splitWithMaximumSize:(unsigned long long)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)storage;
- (bool)validateWithError:(id*)arg1;
- (id)vectors;
- (id)writableCopy;
- (id)writableCopyWithMergeableValueID:(id)arg1 vectors:(id)arg2;
- (struct { unsigned char x1; unsigned char x2; })writerIdentity;
- (id)writerOptions;

@end
