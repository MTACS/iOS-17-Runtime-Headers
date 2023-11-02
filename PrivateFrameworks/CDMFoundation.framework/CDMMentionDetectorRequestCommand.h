
@interface CDMMentionDetectorRequestCommand : CDMBaseCommand {
    SIRINLUINTERNALMENTION_DETECTORMentionDetectorRequest * _mdRequest;
    SIRINLUEXTERNALTurnInput * _turnInput;
}

@property (nonatomic, readonly) SIRINLUINTERNALMENTION_DETECTORMentionDetectorRequest *mdRequest;
@property (nonatomic, readonly) SIRINLUEXTERNALTurnInput *turnInput;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMDRequest:(id)arg1 withCurrTurn:(id)arg2;
- (id)mdRequest;
- (id)turnInput;

@end
