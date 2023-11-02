
@interface REMCRMergeableOrderedSet : NSObject <NSCopying, NSSecureCoding> {
    CRDocument * _document;
    REMReplicaIDSource * _replicaIDSource;
    NSMutableArray * _undos;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) CRDocument *document;
@property (nonatomic, readonly) NSOrderedSet *orderedSet;
@property (nonatomic, retain) REMReplicaIDSource *replicaIDSource;
@property (nonatomic, readonly) NSMutableArray *undos;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (id)document;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (unsigned long long)indexOfEqualObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReplicaIDSource:(id)arg1 document:(id)arg2;
- (id)initWithReplicaIDSource:(id)arg1 document:(id)arg2 undos:(id)arg3;
- (id)initWithReplicaIDSource:(id)arg1 orderedSet:(id)arg2;
- (id)initWithReplicaIDSource:(id)arg1 serializedData:(id)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (id)mergedOrderedSetWithOrderedSet:(id)arg1 error:(id*)arg2;
- (id)mutableOrderedSet;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)orderedSet;
- (id)replicaIDSource;
- (id)serializedData;
- (void)setDocument:(id)arg1;
- (void)setReplicaIDSource:(id)arg1;
- (id)undos;

@end
