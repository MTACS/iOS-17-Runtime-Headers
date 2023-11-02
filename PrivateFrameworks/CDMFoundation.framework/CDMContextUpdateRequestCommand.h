
@interface CDMContextUpdateRequestCommand : CDMBaseCommand {
    SIRINLUINTERNALCONTEXTUPDATEContextUpdateRequest * _ctxUpdateRequest;
}

@property (nonatomic, retain) SIRINLUINTERNALCONTEXTUPDATEContextUpdateRequest *ctxUpdateRequest;

- (void).cxx_destruct;
- (id)ctxUpdateRequest;
- (id)initWithCtxUpdateRequest:(id)arg1;
- (void)setCtxUpdateRequest:(id)arg1;

@end
