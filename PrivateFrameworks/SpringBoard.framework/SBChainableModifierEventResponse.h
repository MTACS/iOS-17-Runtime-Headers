
@interface SBChainableModifierEventResponse : NSObject <BSDescriptionProviding> {
    NSMutableArray * _childResponses;
    bool  _consumed;
    double  _delay;
    id /* block */  _validator;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double delay;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)newEventResponse;
+ (id)responseByAppendingResponse:(id)arg1 toResponse:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithChildResponses:(id)arg1;
- (void)addChildResponse:(id)arg1;
- (void)addChildResponses:(id)arg1;
- (void)consumeWithReason:(id)arg1;
- (double)delay;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)enumerateChildResponsesUsingBlock:(id /* block */)arg1;
- (void)enumerateResponseTreeUsingBlock:(id /* block */)arg1;
- (void)enumerateResponseTreeUsingBlock:(id /* block */)arg1 stop:(bool*)arg2;
- (id)init;
- (void)insertChildResponse:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isValid;
- (id)loggingCategory;
- (id)responseByTransformingResponseWithTransformer:(id /* block */)arg1;
- (void)setDelay:(double)arg1 withValidator:(id /* block */)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
