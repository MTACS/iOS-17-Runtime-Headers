
@interface CDMCATIProtoResponseCommand : CDMBaseCommand {
    SIRINLUINTERNALCATICATIResponse * _response;
}

@property (nonatomic, retain) SIRINLUINTERNALCATICATIResponse *response;

- (void).cxx_destruct;
- (id)initWithResponse:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;

@end
