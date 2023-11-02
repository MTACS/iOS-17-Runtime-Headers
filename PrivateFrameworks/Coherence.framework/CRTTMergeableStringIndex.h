
@interface CRTTMergeableStringIndex : NSObject {
    unsigned long long  _affinity;
    struct TopoID { 
        struct TopoReplica { 
            unsigned char uuid[16]; 
            unsigned int index; 
        } replica; 
        unsigned int clock; 
    }  _index;
    long long  _maxCounter;
    long long  _renameGeneration;
}

@property (nonatomic, readonly) unsigned long long affinity;
@property (nonatomic, readonly) struct TopoID { struct TopoReplica { unsigned char x_1_1_1[16]; unsigned int x_1_1_2; } x1; unsigned int x2; } index;
@property (nonatomic, readonly) long long maxCounter;
@property (nonatomic) long long renameGeneration;

- (id).cxx_construct;
- (id)_objCRenameSequence;
- (unsigned long long)affinity;
- (void)dealloc;
- (id)description;
- (id)finalizedInContext:(id)arg1;
- (struct TopoID { struct TopoReplica { unsigned char x_1_1_1[16]; unsigned int x_1_1_2; } x1; unsigned int x2; })index;
- (id)initWithTimestamp:(id)arg1 affinity:(unsigned long long)arg2 renameGeneration:(long long)arg3;
- (id)initWithTopoID:(struct TopoID { struct TopoReplica { unsigned char x_1_1_1[16]; unsigned int x_1_1_2; } x1; unsigned int x2; })arg1 affinity:(unsigned long long)arg2 renameGeneration:(long long)arg3 maxCounter:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (long long)maxCounter;
- (bool)needToFinalizeTimestamps;
- (long long)renameGeneration;
- (id)renamed:(id)arg1;
- (void)setRenameGeneration:(long long)arg1;
- (id)timestamp;

@end
