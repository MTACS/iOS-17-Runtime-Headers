
@interface PTGlobalVideoHeaderMetadataVersion1 : PTGlobalVideoHeaderMetadata

- (id)initWithData:(id)arg1;
- (id)initWithMinorVersion:(unsigned int)arg1;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)arg1;
- (bool)writeToData:(id)arg1 withOptions:(id)arg2;

@end
