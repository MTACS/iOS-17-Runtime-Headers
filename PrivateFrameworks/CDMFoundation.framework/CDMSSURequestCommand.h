
@interface CDMSSURequestCommand : CDMBaseCommand {
    SIRINLUINTERNALSSUSSURequest * _parserRequest;
}

@property (nonatomic, readonly) SIRINLUINTERNALSSUSSURequest *parserRequest;

- (void).cxx_destruct;
- (id)initWithParserRequest:(id)arg1;
- (id)parserRequest;

@end
