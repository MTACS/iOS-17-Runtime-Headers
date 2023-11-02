
@interface CRTTMergeableStringRange : NSObject {
    long long  _maxCounter;
    struct TopoIDRange { 
        struct TopoID { 
            struct TopoReplica { 
                unsigned char uuid[16]; 
                unsigned int index; 
            } replica; 
            unsigned int clock; 
        } charID; 
        unsigned int length; 
    }  _range;
    long long  _renameGeneration;
}

@property (nonatomic) long long maxCounter;
@property (nonatomic, readonly) struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x_1_2_1[16]; unsigned int x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; } range;
@property (nonatomic) long long renameGeneration;

- (id).cxx_construct;
- (id)_objCRenameSequence;
- (void)dealloc;
- (id)description;
- (id)initWithTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x_1_2_1[16]; unsigned int x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg1 renameGeneration:(long long)arg2 maxCounter:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)maxCounter;
- (struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x_1_2_1[16]; unsigned int x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })range;
- (long long)renameGeneration;
- (void)setMaxCounter:(long long)arg1;
- (void)setRenameGeneration:(long long)arg1;
- (id)subrangeFrom:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
