
@interface CKXBackingStore : NSObject <CKXReaderProtocol, CKXReaderWriterProtocol, CKXWriterProtocol> {
    NSObject<CKXBinding> * _binding;
    unsigned long long  _cacheScope;
    struct { 
        unsigned char formatVersion; 
        struct { 
            unsigned char writerCode; 
            unsigned char writerVersion; 
        } writerIdentity; 
    }  _header;
    CKXProxyCache * _proxyCache;
    CKXVersionedReaderWriterStore * _readerWriterStore;
    CKDSStorage * _storage;
    CKXProxyBase<CKXReadStructProxy> * _topLevelReadProxy;
    CKXProxyBase<CKXWriteStructProxy> * _topLevelWriteProxy;
}

@property (nonatomic, readonly) NSObject<CKXBinding> *binding;
@property (nonatomic) unsigned long long cacheScope;
@property (nonatomic, readonly) unsigned char formatVersion;
@property (nonatomic) struct { unsigned char x1; struct { unsigned char x_2_1_1; unsigned char x_2_1_2; } x2; } header;
@property (nonatomic, readonly) bool isWriting;
@property (nonatomic, retain) CKXProxyCache *proxyCache;
@property (nonatomic, readonly) CKDSReadableStorage *readableStorage;
@property (nonatomic, retain) CKXVersionedReaderWriterStore *readerWriterStore;
@property (nonatomic, retain) CKDSStorage *storage;
@property (nonatomic, retain) CKXProxyBase<CKXReadStructProxy> *topLevelReadProxy;
@property (nonatomic, readonly) CKXProxyBase<CKXWriteStructProxy> *topLevelWriteProxy;
@property (nonatomic, readonly) CKDSWritableStorage *writableStorage;

+ (id)createHeaderDataForFormatVersion:(unsigned char)arg1;
+ (bool)header:(struct { unsigned char x1; struct { unsigned char x_2_1_1; unsigned char x_2_1_2; } x2; }*)arg1 forStorage:(id)arg2 error:(id*)arg3;
+ (struct { unsigned char x1; struct { unsigned char x_2_1_1; unsigned char x_2_1_2; } x2; })headerForData:(id)arg1;
+ (unsigned long long)headerSizeForFormatVersion:(unsigned char)arg1;
+ (bool)prefixStorage:(id)arg1 withHeaderForVersion:(unsigned char)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_proxyWithListInstance:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 mutable:(bool)arg2 cacheScope:(long long)arg3;
- (id)_proxyWithStructInstance:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 mutable:(bool)arg2 cacheScope:(long long)arg3;
- (bool)_setupBackingStoreForReadingWithError:(id*)arg1;
- (bool)_setupBackingStoreForWritingWithError:(id*)arg1;
- (bool)_validateVersion:(unsigned char)arg1 isReader:(bool)arg2 error:(id*)arg3;
- (id)appendedStructProxyForListInstance:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (void)assignStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 toReference:(unsigned long long)arg2 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })beginAppendedListStructInList:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })beginReferencedListForReference:(unsigned long long)arg1 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })beginReferencedStructForReference:(unsigned long long)arg1 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })beginRootStructWithType:(unsigned long long)arg1 error:(id*)arg2;
- (id)binding;
- (unsigned long long)cacheScope;
- (void)commitStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)copyData:(void*)arg1 forField:(unsigned long long)arg2 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (void)copyData:(void*)arg1 forList:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2;
- (bool)finishWritingWithError:(id*)arg1;
- (bool)flushWithError:(id*)arg1;
- (unsigned char)formatVersion;
- (struct { unsigned char x1; struct { unsigned char x_2_1_1; unsigned char x_2_1_2; } x2; })header;
- (id)initWithStorage:(id)arg1 binding:(id)arg2 error:(id*)arg3;
- (id)initWithStorage:(id)arg1 binding:(id)arg2 optionsByReaderWriterClass:(id)arg3 formatVersion:(unsigned char)arg4 error:(id*)arg5;
- (id)initWriterWithStorage:(id)arg1 binding:(id)arg2 formatVersion:(unsigned char)arg3;
- (bool)isWriting;
- (long long)lengthForList:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (id)proxyCache;
- (void)proxyScope:(id /* block */)arg1;
- (void)readUsingBlock:(id /* block */)arg1;
- (id)readableStorage;
- (id)reader;
- (id)readerForProxy:(id)arg1;
- (id)readerWriterStore;
- (bool)referenceIsNull:(unsigned long long)arg1 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })referencedListForReference:(unsigned long long)arg1 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })referencedStructAtIndex:(long long)arg1 inList:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })referencedStructForReference:(unsigned long long)arg1 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })rootStructWithType:(unsigned long long)arg1;
- (id)schema;
- (void)setCacheScope:(unsigned long long)arg1;
- (void)setData:(void*)arg1 withEncoding:(const char *)arg2 forField:(unsigned long long)arg3 inStruct:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4;
- (void)setData:(void*)arg1 withLength:(unsigned long long)arg2 forList:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg3;
- (void)setHeader:(struct { unsigned char x1; struct { unsigned char x_2_1_1; unsigned char x_2_1_2; } x2; })arg1;
- (void)setProxyCache:(id)arg1;
- (bool)setReadableStorage:(id)arg1 error:(id*)arg2;
- (void)setReaderWriterStore:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)setTopLevelReadProxy:(id)arg1;
- (bool)setWritableStorage:(id)arg1 error:(id*)arg2;
- (id)storage;
- (id)structListProxyForListReference:(unsigned long long)arg1 inStructInstance:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 mutable:(bool)arg3;
- (id)structProxyForListInstance:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 atIndex:(long long)arg2;
- (id)structProxyForStructReference:(unsigned long long)arg1 inStructInstance:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 mutable:(bool)arg3;
- (id)topLevelReadProxy;
- (id)topLevelWriteProxy;
- (unsigned long long)valueSizeForField:(unsigned long long)arg1;
- (id)writableStorage;
- (void)writeUsingBlock:(id /* block */)arg1;
- (id)writer;
- (id)writerForProxy:(id)arg1;
- (struct { unsigned char x1; unsigned char x2; })writerIdentity;

@end
