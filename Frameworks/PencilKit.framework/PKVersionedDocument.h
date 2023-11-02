
@interface PKVersionedDocument : NSObject {
    void * _documentArchive;
}

@property (nonatomic) void*documentArchive;
@property (nonatomic, readonly) unsigned long long futureVersionCount;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
+ (unsigned int)versionedDocumentSerializationVersion;

- (void)dealloc;
- (void*)documentArchive;
- (unsigned long long)futureVersionCount;
- (id)init;
- (id)initWithArchive:(const void*)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithUnzippedData:(id)arg1;
- (void)loadArchive:(const void*)arg1;
- (bool)loadData:(id)arg1;
- (bool)loadDocumentArchive:(void*)arg1;
- (bool)loadUnzippedData:(id)arg1;
- (unsigned int)maxDocumentVersion;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithVersionedDocument:(id)arg1;
- (void)saveCurrentVersion:(void*)arg1;
- (void)saveToArchive:(void*)arg1;
- (id)serialize;
- (id)serializeCurrentVersion:(unsigned int*)arg1;
- (void)setDocumentArchive:(void*)arg1;

@end
