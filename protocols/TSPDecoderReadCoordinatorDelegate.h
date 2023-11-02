
@protocol TSPDecoderReadCoordinatorDelegate <NSObject>

@required

- (TSPData *)cachedDataForIdentifier:(long long)arg1;
- (TSPObject *)cachedMetadataObject;
- (bool)canResolveExternalReferences;
- (<TSPDecoderDataInfo> *)dataInfoForIdentifier:(long long)arg1;
- (unsigned long long)fileFormatVersion;
- (bool)hasDocumentVersionUUID;
- (bool)isCrossAppPaste;
- (bool)isCrossDocumentPaste;
- (bool)isDecodingTransientObject;
- (TSPComponent *)metadataComponent;
- (long long)objectIdentifierForUUID:(NSUUID *)arg1;
- (NSUUID *)objectUUIDForExternalReferenceToIdentifier:(long long)arg1;
- (bool)processMetadataObject:(TSPObject *)arg1 error:(id*)arg2;
- (unsigned long long)readVersion;
- (TSPComponent *)rootObjectComponent;
- (bool)shouldDecodeMissingDataAsRemote;
- (bool)shouldResolveExternalReferencesUsingObjectUUID;
- (unsigned int)sourceType;

@end
