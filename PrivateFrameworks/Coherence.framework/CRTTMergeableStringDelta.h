
@interface CRTTMergeableStringDelta : NSObject {
    ObjCVersion * _addedByVersion;
    <CRTTMergeableStringStorage> * _attributedString;
    ObjCVersion * _fromAddedByVersion;
    ObjCVersion * _fromVersion;
    long long  _renameGeneration;
    ObjCVersion * _version;
    struct vector<TopoSubstring *, std::allocator<TopoSubstring *>> { 
        struct TopoSubstring {} **__begin_; 
        struct TopoSubstring {} **__end_; 
        struct __compressed_pair<TopoSubstring **, std::allocator<TopoSubstring *>> { 
            struct TopoSubstring {} **__value_; 
        } __end_cap_; 
    }  orderedSubstrings;
}

@property (nonatomic, retain) ObjCVersion *addedByVersion;
@property (nonatomic, readonly) <CRTTMergeableStringStorage> *attributedString;
@property (nonatomic, retain) ObjCVersion *fromAddedByVersion;
@property (nonatomic, retain) ObjCVersion *fromVersion;
@property (nonatomic) long long renameGeneration;
@property (nonatomic, retain) ObjCVersion *version;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addChildTo:(const void*)arg1 child:(const void*)arg2 deltaCharMap:(void*)arg3;
- (void)addStorageTo:(void*)arg1 fromStorage:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void*)addSubstring:(const struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x_1_2_1[16]; unsigned int x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; }*)arg1 requiresExactLength:(bool)arg2 deltaCharMap:(void*)arg3;
- (id)addedByVersion;
- (id)attributedString;
- (void)compareSameSubstring:(const void*)arg1 toSubstring:(const void*)arg2 from:(id)arg3 toString:(id)arg4 charMap:(const void*)arg5 deltaCharMap:(void*)arg6 compareElements:(id /* block */)arg7;
- (void)compareSubstring:(const void*)arg1 toSubstring:(const void*)arg2 fromString:(id)arg3 toString:(id)arg4 charMap:(const void*)arg5 deltaCharMap:(void*)arg6 compareElements:(id /* block */)arg7;
- (void)dealloc;
- (id)dotDescription:(unsigned long long)arg1;
- (void)findAndCompareSubstring:(const void*)arg1 from:(id)arg2 toString:(id)arg3 charMap:(const void*)arg4 deltaCharMap:(void*)arg5 compareElements:(id /* block */)arg6;
- (id)fromAddedByVersion;
- (id)fromVersion;
- (id)initWithDecoder:(id)arg1 error:(id*)arg2;
- (id)initWithDeltasTo:(id)arg1 from:(id)arg2 compareElements:(id /* block */)arg3;
- (void*)orderedSubstrings;
- (long long)renameGeneration;
- (bool)saveToEncoder:(id)arg1 error:(out id*)arg2;
- (void)setAddedByVersion:(id)arg1;
- (void)setFromAddedByVersion:(id)arg1;
- (void)setFromVersion:(id)arg1;
- (void)setRenameGeneration:(long long)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
