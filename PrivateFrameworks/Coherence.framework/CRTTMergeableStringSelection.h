
@interface CRTTMergeableStringSelection : NSObject {
    unsigned long long  _selectionAffinity;
    struct vector<std::pair<TopoID, TopoID>, std::allocator<std::pair<TopoID, TopoID>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<TopoID, TopoID> *, std::allocator<std::pair<TopoID, TopoID>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _selectionRanges;
}

@property (nonatomic) unsigned long long selectionAffinity;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (bool)hasTopoIDsThatCanChange;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)selectionAffinity;
- (void*)selectionRanges;
- (void)setSelectionAffinity:(unsigned long long)arg1;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x_1_2_1[16]; unsigned int x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg1 toNewRangeID:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x_1_2_1[16]; unsigned int x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg2;

@end
