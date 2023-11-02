
@protocol MFDAMessagePayloadFetchResponse

@required

- (NSData *)data;
- (bool)streaming;
- (bool)streamingDone;

@end
