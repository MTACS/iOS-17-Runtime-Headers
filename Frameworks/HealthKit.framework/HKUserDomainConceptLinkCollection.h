
@interface HKUserDomainConceptLinkCollection : NSObject <NSCopying, NSFastEnumeration, NSSecureCoding> {
    long long  _epoch;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _lock_arrayRepresentation;
    HKLinkSetWrapper * _orderedSet;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long epoch;
@property (nonatomic, readonly, copy) NSArray *links;

+ (id)_wrappedUDCLinks:(id)arg1;
+ (id)collectionByMergingCollection:(id)arg1 otherCollection:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithLinkSetWrapper:(id)arg1;
- (id)_initWithLinks:(id)arg1;
- (id)_orderedSetWithDecoder:(id)arg1 error:(id*)arg2;
- (id)collectionByAppendingLink:(id)arg1;
- (id)collectionByAppendingLinks:(id)arg1;
- (id)collectionByInsertingLink:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)collectionByMergingCollection:(id)arg1;
- (id)collectionByMergingInLegacyArrayOfLinks:(id)arg1;
- (id)collectionByMovingLinkFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)collectionByRemovingAllLinks;
- (id)collectionByRemovingLinkAtIndex:(unsigned long long)arg1;
- (id)collectionByRemovingLinksWithTargetUUID:(id)arg1;
- (id)collectionByReplacingLinkAtIndex:(unsigned long long)arg1 withLink:(id)arg2;
- (id)collectionByRetargetingLinksWithUUID:(id)arg1 withNewUUID:(id)arg2;
- (id)collectionBySwappingLinksAtIndex:(unsigned long long)arg1 otherIndex:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)epoch;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLinkSetWrapper:(id)arg1 epoch:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)links;
- (void)unitTesting_setEpoch:(long long)arg1;

@end
