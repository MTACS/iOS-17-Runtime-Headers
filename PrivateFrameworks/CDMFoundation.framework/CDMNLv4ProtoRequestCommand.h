
@interface CDMNLv4ProtoRequestCommand : CDMBaseCommand {
    SIRINLUINTERNALNLV4_PARSERNLv4ParserRequest * _parserRequest;
    SIRINLUEXTERNALRequestID * _requestId;
}

@property (nonatomic, readonly) SIRINLUINTERNALNLV4_PARSERNLv4ParserRequest *parserRequest;
@property (nonatomic, readonly) SIRINLUEXTERNALRequestID *requestId;

- (void).cxx_destruct;
- (id)initWithParserRequest:(id)arg1 requestId:(id)arg2;
- (id)parserRequest;
- (id)requestId;

@end
