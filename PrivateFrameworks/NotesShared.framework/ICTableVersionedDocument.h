
@interface ICTableVersionedDocument : ICTTVersionedDocument {
    ICCRDocument * _innerTableDocument;
    ICTable * _table;
}

@property (readonly) ICCRDocument *innerTableDocument;
@property (nonatomic, retain) ICTable *table;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;

- (void).cxx_destruct;
- (id)initWithColumnCount:(unsigned long long)arg1 rowCount:(unsigned long long)arg2 replicaID:(id)arg3;
- (id)innerTableDocument;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithTableVersionedDocument:(id)arg1;
- (id)serializeCurrentVersion:(unsigned int*)arg1;
- (void)setTable:(id)arg1;
- (id)table;

@end
