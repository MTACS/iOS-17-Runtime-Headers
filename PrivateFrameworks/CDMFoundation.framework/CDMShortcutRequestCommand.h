
@interface CDMShortcutRequestCommand : CDMBaseCommand {
    SIRINLUEXTERNALTurnContext * _currentTurnContext;
    NSArray * _matchingSpans;
    SIRINLUINTERNALTokenChain * _tokenChain;
}

@property (nonatomic, readonly) SIRINLUEXTERNALTurnContext *currentTurnContext;
@property (nonatomic, readonly) NSArray *matchingSpans;
@property (nonatomic, readonly) SIRINLUINTERNALTokenChain *tokenChain;

- (void).cxx_destruct;
- (id)currentTurnContext;
- (id)initWithMatchingSpans:(id)arg1 tokenChain:(id)arg2 currentTurnContext:(id)arg3;
- (id)matchingSpans;
- (id)tokenChain;

@end
