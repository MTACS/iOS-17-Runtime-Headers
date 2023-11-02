
@interface CDMSpanMatcherResponseCommand : CDMBaseCommand {
    SIRINLUINTERNALSPANMATCHSpanMatchResponse * _spanMatchResponse;
}

@property (nonatomic, retain) SIRINLUINTERNALSPANMATCHSpanMatchResponse *spanMatchResponse;

- (void).cxx_destruct;
- (id)description;
- (id)initWithResponse:(id)arg1;
- (void)setSpanMatchResponse:(id)arg1;
- (id)spanMatchResponse;

@end
