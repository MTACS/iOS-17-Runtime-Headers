
@interface REMCRMergeableStringDocument : NSObject <NSCopying, NSSecureCoding, REMTTHashtagHosting> {
    TTMergeableStringVersionedDocument * _document;
    REMReplicaIDSource * _replicaIDSource;
}

@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, retain) TTMergeableStringVersionedDocument *document;
@property (nonatomic, readonly) TTMergeableAttributedString *mergeableString;
@property (nonatomic, retain) REMReplicaIDSource *replicaIDSource;
@property (nonatomic, readonly) NSString *string;

+ (id)documentFromSerializedData:(id)arg1 replicaIDSource:(id)arg2 forKey:(id)arg3 ofObjectID:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributedString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)document;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateHashtagInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)hashtagAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithReplicaIDSource:(id)arg1 document:(id)arg2;
- (id)initWithReplicaIDSource:(id)arg1 serializedData:(id)arg2 error:(id*)arg3;
- (id)initWithReplicaIDSource:(id)arg1 string:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mergeableString;
- (id)mergedWithDocument:(id)arg1 error:(id*)arg2;
- (id)mutableDocument;
- (id)replicaIDSource;
- (id)serializedData;
- (void)setDocument:(id)arg1;
- (void)setReplicaIDSource:(id)arg1;
- (id)string;

@end
