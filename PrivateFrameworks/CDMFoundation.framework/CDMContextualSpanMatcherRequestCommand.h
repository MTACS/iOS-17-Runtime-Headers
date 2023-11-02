
@interface CDMContextualSpanMatcherRequestCommand : CDMBaseCommand {
    SIRINLUINTERNALCONTEXTUAL_SPAN_MATCHERContextualSpanMatcherRequest * _contextualSpanMatcherRequest;
}

@property (nonatomic, readonly) SIRINLUINTERNALCONTEXTUAL_SPAN_MATCHERContextualSpanMatcherRequest *contextualSpanMatcherRequest;

- (void).cxx_destruct;
- (id)contextualSpanMatcherRequest;
- (id)initWithContextualSpanMatcherRequest:(id)arg1;

@end
