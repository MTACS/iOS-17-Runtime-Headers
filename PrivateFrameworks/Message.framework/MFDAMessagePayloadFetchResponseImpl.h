
@interface MFDAMessagePayloadFetchResponseImpl : NSObject <MFDAMessagePayloadFetchResponse> {
    NSData * data;
    bool  streaming;
    bool  streamingDone;
}

- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)arg1 streaming:(bool)arg2 streamingDone:(bool)arg3;
- (bool)streaming;
- (bool)streamingDone;

@end
