
@interface CDMNLv4ProtoResponseCommand : CDMBaseCommand {
    SIRINLUEXTERNALCDMNluResponse * _nluResponse;
    SIRINLUINTERNALNLV4_PARSERNLv4ParserResponse * _parserResponse;
}

@property (nonatomic, readonly) SIRINLUEXTERNALCDMNluResponse *nluResponse;
@property (nonatomic, readonly) SIRINLUINTERNALNLV4_PARSERNLv4ParserResponse *parserResponse;

- (void).cxx_destruct;
- (id)initWithParserResponse:(id)arg1 nluResponse:(id)arg2;
- (id)nluResponse;
- (id)parserResponse;

@end
