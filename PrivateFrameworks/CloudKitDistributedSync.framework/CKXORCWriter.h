
@interface CKXORCWriter : CKXWriterBase <CKXWriterProtocol> {
    unsigned long long  _commitCount;
    struct unique_ptr<orc::ColumnVectorBatch, std::default_delete<orc::ColumnVectorBatch>> { 
        struct __compressed_pair<orc::ColumnVectorBatch *, std::default_delete<orc::ColumnVectorBatch>> { 
            struct ColumnVectorBatch {} *__value_; 
        } __ptr_; 
    }  _currentBatch;
    <CKXORCHelpers> * _helpers;
    CKXORCWriterOptions * _options;
    struct unique_ptr<orc::OutputStream, std::default_delete<orc::OutputStream>> { 
        struct __compressed_pair<orc::OutputStream *, std::default_delete<orc::OutputStream>> { 
            struct OutputStream {} *__value_; 
        } __ptr_; 
    }  _outputStream;
    unsigned long long  _rootStructToken;
    unsigned long long  _startingRowForCurrentBatch;
    CKDSWritableStorage * _storage;
    struct set<CKXStructInstance, std::less<CKXStructInstance>, std::allocator<CKXStructInstance>> { 
        struct __tree<CKXStructInstance, std::less<CKXStructInstance>, std::allocator<CKXStructInstance>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<CKXStructInstance, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<CKXStructInstance>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _uncommittedStructs;
    NSError * _writeError;
    struct unique_ptr<orc::Writer, std::default_delete<orc::Writer>> { 
        struct __compressed_pair<orc::Writer *, std::default_delete<orc::Writer>> { 
            struct Writer {} *__value_; 
        } __ptr_; 
    }  _writer;
}

@property (nonatomic) unsigned long long commitCount;
@property (nonatomic, readonly) <CKXORCHelpers> *helpers;
@property (nonatomic, readonly) CKXORCWriterOptions *options;
@property (nonatomic) unsigned long long rootStructToken;
@property (nonatomic) unsigned long long startingRowForCurrentBatch;
@property (nonatomic, retain) CKDSWritableStorage *storage;
@property (nonatomic, retain) NSError *writeError;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_appendData:(void*)arg1 withValueSize:(unsigned long long)arg2 length:(unsigned long long)arg3 toRow:(unsigned long long)arg4 toList:(unsigned long long)arg5;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })appendRowForStruct:(unsigned long long)arg1;
- (void)assignStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 toReference:(unsigned long long)arg2 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })beginAppendedListStructInList:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })beginReferencedListForReference:(unsigned long long)arg1 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })beginReferencedStructForReference:(unsigned long long)arg1 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })beginRootStructWithType:(unsigned long long)arg1 error:(id*)arg2;
- (bool)commitBatchIfNeededWithError:(id*)arg1;
- (bool)commitBatchWithError:(id*)arg1;
- (unsigned long long)commitCount;
- (void)commitStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (bool)createWriterWithError:(id*)arg1;
- (void)enumerateAllColumnsWithBlock:(id /* block */)arg1;
- (void)expandColumn:(void*)arg1 includingBatchOffset:(unsigned long long)arg2;
- (void)expandColumn:(void*)arg1 includingRow:(unsigned long long)arg2;
- (bool)flushWithError:(id*)arg1;
- (bool)growCurrentBatchToIncludeBatchOffset:(unsigned long long)arg1;
- (bool)growCurrentBatchToIncludeRow:(unsigned long long)arg1;
- (id)helpers;
- (id)initWithSchema:(id)arg1;
- (id)initWithSchema:(id)arg1 helpers:(id)arg2 options:(id)arg3;
- (void*)listColumnForReference:(unsigned long long)arg1;
- (unsigned long long)offsetInCurrentBatchForRow:(unsigned long long)arg1;
- (id)options;
- (void)resetColumnNulls:(void*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void*)rootColumn;
- (unsigned long long)rootStructToken;
- (void)setCommitCount:(unsigned long long)arg1;
- (void)setData:(void*)arg1 withEncoding:(const char *)arg2 forField:(unsigned long long)arg3 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4;
- (void)setData:(void*)arg1 withLength:(unsigned long long)arg2 forList:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg3;
- (void)setRootStructToken:(unsigned long long)arg1;
- (void)setStartingRowForCurrentBatch:(unsigned long long)arg1;
- (void)setStorage:(id)arg1;
- (bool)setWritableStorage:(id)arg1 error:(id*)arg2;
- (void)setWriteError:(id)arg1;
- (unsigned long long)startingRowForCurrentBatch;
- (id)storage;
- (void*)structColumnForStruct:(unsigned long long)arg1;
- (void*)structReferenceColumnForReference:(unsigned long long)arg1;
- (void)updateNumberOfElementsForCurrentBatch;
- (void*)valueColumnForField:(unsigned long long)arg1;
- (unsigned long long)valueSizeForField:(unsigned long long)arg1;
- (id)writeError;

@end
