
@interface CDMUaaPNLProtoRequestCommand : CDMBaseCommand {
    SIRINLUINTERNALUAAP_PARSERUaaPParserRequest * _parserRequest;
    SIRINLUEXTERNALRequestID * _requestId;
}

@property (nonatomic, readonly) SIRINLUINTERNALUAAP_PARSERUaaPParserRequest *parserRequest;
@property (nonatomic, readonly) SIRINLUEXTERNALRequestID *requestId;

- (void).cxx_destruct;
- (id)initWithParserRequest:(id)arg1 requestId:(id)arg2;
- (id)parserRequest;
- (id)requestId;

@end
