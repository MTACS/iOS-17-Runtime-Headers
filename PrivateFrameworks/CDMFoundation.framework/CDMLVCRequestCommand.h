
@interface CDMLVCRequestCommand : CDMBaseCommand {
    NSMutableArray * _overridesInputs;
    SIRINLUINTERNALITFMITFMParserRequest * _parserRequest;
    SIRINLUEXTERNALRewriteMessage * _rewriteMsg;
}

@property (nonatomic, readonly) NSMutableArray *overridesInputs;
@property (nonatomic, readonly) SIRINLUINTERNALITFMITFMParserRequest *parserRequest;
@property (nonatomic, readonly) SIRINLUEXTERNALRewriteMessage *rewriteMsg;

- (void).cxx_destruct;
- (id)initWithParserRequest:(id)arg1 rewriteMsg:(id)arg2 overridesInputs:(id)arg3;
- (id)overridesInputs;
- (id)parserRequest;
- (id)rewriteMsg;

@end
