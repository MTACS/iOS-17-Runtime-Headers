
@interface CDMCATIProtoRequestCommand : CDMBaseCommand {
    SIRINLUINTERNALCATICATIRequest * _request;
}

@property (nonatomic, retain) SIRINLUINTERNALCATICATIRequest *request;

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;

@end
