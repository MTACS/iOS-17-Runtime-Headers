
@interface CDMUaaPNLProtoResponseCommand : CDMBaseCommand {
    SIRINLUEXTERNALCDMNluResponse * _nluResponse;
    SIRINLUINTERNALUAAP_PARSERUaaPParserResponse * _parserResponse;
}

@property (nonatomic, readonly) SIRINLUEXTERNALCDMNluResponse *nluResponse;
@property (nonatomic, readonly) SIRINLUINTERNALUAAP_PARSERUaaPParserResponse *parserResponse;

- (void).cxx_destruct;
- (id)initWithParserResponse:(id)arg1 nluResponse:(id)arg2;
- (id)nluResponse;
- (id)parserResponse;

@end
