
@interface CDMSNLCProtoRequestCommand : CDMBaseCommand {
    SIRINLUINTERNALITFMITFMParserRequest * _parserRequest;
    SIRINLUEXTERNALRewriteMessage * _rewriteMsg;
}

@property (nonatomic, readonly) SIRINLUINTERNALITFMITFMParserRequest *parserRequest;
@property (nonatomic, readonly) SIRINLUEXTERNALRewriteMessage *rewriteMsg;

- (void).cxx_destruct;
- (id)initWithParserRequest:(id)arg1 rewriteMsg:(id)arg2;
- (id)parserRequest;
- (id)rewriteMsg;

@end
