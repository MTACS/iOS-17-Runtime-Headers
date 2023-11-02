
@interface CDMContextualSpanMatcherResponseCommand : CDMBaseCommand {
    SIRINLUINTERNALCONTEXTUAL_SPAN_MATCHERContextualSpanMatcherResponse * _contextualSpanMatcherResponse;
}

@property (nonatomic, readonly) SIRINLUINTERNALCONTEXTUAL_SPAN_MATCHERContextualSpanMatcherResponse *contextualSpanMatcherResponse;

- (void).cxx_destruct;
- (id)contextualSpanMatcherResponse;
- (id)initWithContextualSpanMatcherResponse:(id)arg1;
- (id)initWithMentions:(id)arg1;

@end
