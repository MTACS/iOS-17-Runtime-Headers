
@interface CKXORCReader : CKXReaderBase <CKXReaderProtocol> {
    <CKXORCHelpers> * _helpers;
    unsigned long long  _loadCount;
    CKXORCReaderOptions * _options;
    struct unique_ptr<orc::Reader, std::default_delete<orc::Reader>> { 
        struct __compressed_pair<orc::Reader *, std::default_delete<orc::Reader>> { 
            struct Reader {} *__value_; 
        } __ptr_; 
    }  _reader;
    /* Warning: unhandled struct encoding: '{vector<NSIndexSet *, std::allocator<NSIndexSet *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<NSIndexSet *__strong *, std::allocator<NSIndexSet *>>="__value_"^@}}' */ struct vector<NSIndexSet *, std::allocator<NSIndexSet *>> { 
        __end_ **__begin_; 
    }  _rowsForTopLevelContainerStructs;
    CKDSReadableStorage * _storage;
    struct vector<std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>, std::allocator<std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>> *, std::allocator<std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _structToReaderBatchPair;
}

@property (nonatomic, readonly) <CKXORCHelpers> *helpers;
@property (nonatomic) unsigned long long loadCount;
@property (nonatomic, readonly) CKXORCReaderOptions *options;
@property (nonatomic, retain) CKDSReadableStorage *storage;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_setInputWithError:(id*)arg1;
- (void)copyData:(void*)arg1 forField:(unsigned long long)arg2 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (void)copyData:(void*)arg1 forList:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2;
- (bool)createReaderIfNecessaryWithError:(id*)arg1;
- (void)createRowReaderForStruct:(unsigned long long)arg1;
- (id)helpers;
- (id)initWithSchema:(id)arg1;
- (id)initWithSchema:(id)arg1 helpers:(id)arg2 options:(id)arg3;
- (long long)lengthForList:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (void*)listColumnForReference:(unsigned long long)arg1;
- (bool)loadBatchWithRow:(unsigned long long)arg1 forStruct:(unsigned long long)arg2;
- (unsigned long long)loadCount;
- (unsigned long long)offsetInCurrentBatchForRow:(unsigned long long)arg1 forStruct:(unsigned long long)arg2;
- (id)options;
- (bool)referenceIsNull:(unsigned long long)arg1 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })referencedListForReference:(unsigned long long)arg1 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })referencedStructAtIndex:(long long)arg1 inList:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })referencedStructForReference:(unsigned long long)arg1 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (void*)rootColumnForStruct:(unsigned long long)arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })rootStructWithType:(unsigned long long)arg1;
- (id)rowsForStructColumn:(unsigned long long)arg1;
- (void)setLoadCount:(unsigned long long)arg1;
- (bool)setReadableStorage:(id)arg1 error:(id*)arg2;
- (void)setStorage:(id)arg1;
- (id)storage;
- (void*)structColumnForStruct:(unsigned long long)arg1;
- (void*)structReferenceColumnForReference:(unsigned long long)arg1;
- (void*)valueColumnForField:(unsigned long long)arg1;
- (unsigned long long)valueSizeForField:(unsigned long long)arg1;

@end
