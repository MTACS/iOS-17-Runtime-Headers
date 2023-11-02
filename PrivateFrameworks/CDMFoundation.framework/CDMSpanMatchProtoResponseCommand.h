
@interface CDMSpanMatchProtoResponseCommand : CDMBaseCommand {
    NSArray * _matchingSpansForExternalParsers;
    NSArray * _matchingSpansForNL;
    SIRINLUINTERNALSPANMATCHSpanMatchResponse * _spanMatchResponse;
}

@property (nonatomic, readonly) NSArray *matchingSpansForExternalParsers;
@property (nonatomic, readonly) NSArray *matchingSpansForNL;
@property (nonatomic, retain) SIRINLUINTERNALSPANMATCHSpanMatchResponse *spanMatchResponse;

- (void).cxx_destruct;
- (id)description;
- (id)initWithResponse:(id)arg1;
- (id)matchingSpansForExternalParsers;
- (id)matchingSpansForNL;
- (void)setSpanMatchResponse:(id)arg1;
- (id)spanMatchResponse;

@end
