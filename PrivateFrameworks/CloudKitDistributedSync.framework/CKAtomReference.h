
@interface CKAtomReference : NSObject <NSCopying> {
    CKMergeableValueID * _mergeableValueID;
    CKDistributedTimestamp * _timestamp;
    unsigned char  _type;
}

@property (nonatomic, readonly, copy) CKMergeableValueID *location;
@property (nonatomic, readonly, copy) CKMergeableValueID *mergeableValueID;
@property (nonatomic, readonly, copy) CKDistributedTimestamp *timestamp;
@property (nonatomic, readonly) unsigned char type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithMergeableValueID:(id)arg1;
- (id)initWithMergeableValueID:(id)arg1 timestamp:(id)arg2;
- (id)initWithMergeableValueID:(id)arg1 timestamp:(id)arg2 type:(unsigned char)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToReference:(id)arg1;
- (id)location;
- (id)mergeableValueID;
- (id)timestamp;
- (unsigned char)type;

@end
