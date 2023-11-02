
@interface MTRQRCodeSetupPayloadParser : NSObject {
    NSString * _base38Representation;
    void * _chipQRCodeSetupPayloadParser;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBase38Representation:(id)arg1;
- (id)populatePayload:(id*)arg1;

@end
