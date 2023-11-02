
@interface CDMTokenizationProtoResponseCommand : CDMBaseCommand {
    NSArray * _previousSiriResponseTokenResponses;
    SIRINLUINTERNALTOKENIZERTokenizerResponse * _response;
    NSArray * _responses;
}

@property (nonatomic, retain) NSArray *previousSiriResponseTokenResponses;
@property (nonatomic, retain) SIRINLUINTERNALTOKENIZERTokenizerResponse *response;
@property (nonatomic, retain) NSArray *responses;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPreviousResponses:(id)arg1 withPreviousSiriResponse:(id)arg2;
- (id)initWithResponse:(id)arg1;
- (id)initWithResponses:(id)arg1;
- (id)previousSiriResponseTokenResponses;
- (id)response;
- (id)responses;
- (void)setPreviousSiriResponseTokenResponses:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setResponses:(id)arg1;

@end
