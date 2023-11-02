
@interface ICTTMergeableStringSelection : NSObject <ICTTMergeableStringIDTracker> {
    unsigned long long  _selectionAffinity;
    struct vector<std::pair<TopoID, TopoID>, std::allocator<std::pair<TopoID, TopoID>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<TopoID, TopoID> *, std::allocator<std::pair<TopoID, TopoID>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _selectionRanges;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long selectionAffinity;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (bool)hasTopoIDsThatCanChange;
- (unsigned long long)hash;
- (id)initWithArchive:(const void*)arg1;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)saveToArchive:(void*)arg1;
- (unsigned long long)selectionAffinity;
- (void*)selectionRanges;
- (id)serialize;
- (void)setSelectionAffinity:(unsigned long long)arg1;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg1 toNewRangeID:(struct TopoIDRange { struct TopoID { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg2;

@end
