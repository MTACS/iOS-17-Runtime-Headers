
@interface CDMEmbeddingProtoRequestCommand : CDMBaseCommand {
    SIRINLUINTERNALEMBEDDINGEmbeddingRequest * _request;
}

@property (nonatomic, retain) SIRINLUINTERNALEMBEDDINGEmbeddingRequest *request;

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;

@end
