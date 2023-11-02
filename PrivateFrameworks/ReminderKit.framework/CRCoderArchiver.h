
@interface CRCoderArchiver : CRCoder {
    void * _currentDocument;
    NSMutableOrderedSet * _encodedObjects;
    NSMutableOrderedSet * _keySet;
    NSMutableOrderedSet * _uuidSet;
    struct vector<CRDT::Document_DocObject *, std::allocator<CRDT::Document_DocObject *>> { 
        struct Document_DocObject {} **__begin_; 
        struct Document_DocObject {} **__end_; 
        struct __compressed_pair<CRDT::Document_DocObject **, std::allocator<CRDT::Document_DocObject *>> { 
            struct Document_DocObject {} **__value_; 
        } __end_cap_; 
    }  currentDocObjectEncodingStack;
}

@property (nonatomic) void*currentDocument;
@property (nonatomic, retain) NSMutableOrderedSet *encodedObjects;
@property (nonatomic, retain) NSMutableOrderedSet *keySet;
@property (nonatomic, retain) NSMutableOrderedSet *uuidSet;

+ (id)encodedDataWithDocument:(id)arg1;
+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void*)currentCustomObjectForEncoding;
- (void*)currentDocument;
- (void*)currentDocumentObjectForEncoding;
- (id)encodeDocument:(id)arg1;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forObjectID:(void*)arg2;
- (void)encodeString:(id)arg1 forKey:(id)arg2;
- (void)encodeUInt32:(unsigned int)arg1 forKey:(id)arg2;
- (void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;
- (void)encodeUUID:(id)arg1 forKey:(id)arg2;
- (unsigned long long)encodeUUIDIndexFromUUID:(id)arg1;
- (id)encodedObjects;
- (int)indexForKey:(id)arg1;
- (id)keySet;
- (void*)mutableObjectIDForKey:(id)arg1;
- (void)setCurrentDocument:(void*)arg1;
- (void)setEncodedObjects:(id)arg1;
- (void)setKeySet:(id)arg1;
- (void)setTypeIndexForCurrentCustomObjectIfNecessary:(id)arg1;
- (void)setUuidSet:(id)arg1;
- (id)uuidSet;

@end
