
@interface ICTTVersionedDocument : NSObject {
    void * _documentArchive;
    NSUUID * _replicaID;
}

@property (nonatomic) void*documentArchive;
@property (nonatomic, readonly) unsigned long long futureVersionCount;
@property (nonatomic, readonly) NSUUID *replicaID;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
+ (unsigned int)versionedDocumentSerializationVersion;

- (void).cxx_destruct;
- (void)dealloc;
- (void*)documentArchive;
- (unsigned long long)futureVersionCount;
- (id)initWithArchive:(const void*)arg1 replicaID:(id)arg2;
- (id)initWithData:(id)arg1 replicaID:(id)arg2;
- (void)loadArchive:(const void*)arg1;
- (void)loadData:(id)arg1;
- (void)loadDocumentArchive:(void*)arg1;
- (unsigned int)maxDocumentVersion;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithVersionedDocument:(id)arg1;
- (id)replicaID;
- (void)saveCurrentVersion:(void*)arg1;
- (void)saveToArchive:(void*)arg1;
- (id)serialize;
- (id)serializeCurrentVersion:(unsigned int*)arg1;
- (void)setDocumentArchive:(void*)arg1;

@end
