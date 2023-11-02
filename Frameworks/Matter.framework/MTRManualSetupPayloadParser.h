
@interface MTRManualSetupPayloadParser : NSObject {
    void * _chipManualSetupPayloadParser;
    NSString * _decimalStringRepresentation;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDecimalStringRepresentation:(id)arg1;
- (id)populatePayload:(id*)arg1;

@end
