
@interface CRCoderUnarchiver : CRCoder {
    NSMutableArray * _allocedDocObjects;
    NSMutableArray * _completionHandlers;
    const void * _currentDocObjectForDecodingPtr;
    void * _currentDocument;
    CRDocument * _document;
    NSMutableOrderedSet * _keySet;
    NSUUID * _replica;
    NSMutableOrderedSet * _typeSetForDecoding;
    NSMutableArray * _uuidArray;
}

@property (nonatomic, retain) NSMutableArray *allocedDocObjects;
@property (nonatomic, retain) NSMutableArray *completionHandlers;
@property (nonatomic) const void*currentDocObjectForDecodingPtr;
@property (nonatomic) void*currentDocument;
@property (nonatomic, retain) CRDocument *document;
@property (nonatomic, retain) NSMutableOrderedSet *keySet;
@property (nonatomic, copy) NSUUID *replica;
@property (nonatomic, retain) NSMutableOrderedSet *typeSetForDecoding;
@property (nonatomic, retain) NSMutableArray *uuidArray;

+ (id)decodedDocumentFromData:(id)arg1 replica:(id)arg2;
+ (void)initialize;

- (void).cxx_destruct;
- (void)addDecoderCompletionHandler:(id /* block */)arg1 dependency:(id)arg2 for:(id)arg3;
- (id)allocedDocObjects;
- (id)allocedObjectAtIndex:(unsigned long long)arg1 outNeedsInit:(bool*)arg2;
- (id)completionHandlers;
- (const void*)currentDocObjectForDecodingPtr;
- (void*)currentDocument;
- (const void*)currentDocumentObjectForDecoding;
- (const void*)currentObjectIDForKey:(id)arg1;
- (id)decodeDocumentFromData:(id)arg1 replica:(id)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectForProtobufObjectID:(const void*)arg1;
- (id)decodeStringForKey:(id)arg1;
- (unsigned int)decodeUInt32ForKey:(id)arg1;
- (unsigned long long)decodeUInt64ForKey:(id)arg1;
- (id)decodeUUIDForKey:(id)arg1;
- (id)decodeUUIDFromUUIDIndex:(unsigned long long)arg1;
- (id)document;
- (bool)hasDecodableValueForKey:(id)arg1;
- (unsigned long long)indexForKey:(id)arg1;
- (id)keySet;
- (id)replica;
- (void)setAllocedDocObjects:(id)arg1;
- (void)setCompletionHandlers:(id)arg1;
- (void)setCurrentDocObjectForDecodingPtr:(const void*)arg1;
- (void)setCurrentDocument:(void*)arg1;
- (void)setDocument:(id)arg1;
- (void)setKeySet:(id)arg1;
- (void)setReplica:(id)arg1;
- (void)setTypeSetForDecoding:(id)arg1;
- (void)setUuidArray:(id)arg1;
- (void)sortCompletionHandlers;
- (id)typeSetForDecoding;
- (id)uuidArray;
- (bool)willModifySelfInInitForClass:(Class)arg1;

@end
