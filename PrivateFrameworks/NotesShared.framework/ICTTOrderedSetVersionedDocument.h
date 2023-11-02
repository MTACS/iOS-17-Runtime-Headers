
@interface ICTTOrderedSetVersionedDocument : ICTTVersionedDocument {
    ICCRDocument * _document;
    ICCROrderedSet * _orderedSet;
}

@property (readonly) ICCRDocument *document;
@property (nonatomic, retain) ICCROrderedSet *orderedSet;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;

- (void).cxx_destruct;
- (id)document;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithOrderedSetVersionedDocument:(id)arg1;
- (id)orderedSet;
- (id)serializeCurrentVersion:(unsigned int*)arg1;
- (void)setOrderedSet:(id)arg1;

@end
