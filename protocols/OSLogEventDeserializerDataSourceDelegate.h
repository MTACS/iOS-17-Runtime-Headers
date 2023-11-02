
@protocol OSLogEventDeserializerDataSourceDelegate

@required

- (NSData *)metadataChunk;
- (NSData *)nextEventDataChunk;

@end
