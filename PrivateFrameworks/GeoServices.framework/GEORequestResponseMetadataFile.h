
@interface GEORequestResponseMetadataFile : GEOAnalyticsDataFile

- (id)initForReadWithFileDescriptor:(int)arg1;
- (id)initForReadWithFilePath:(id)arg1;
- (id)initForWriteWithFilePath:(id)arg1;
- (bool)unsafe_readReqRespMetadataWithVisitorBlock:(id /* block */)arg1;
- (bool)writeRequestResponseMetadata:(id)arg1;

@end
