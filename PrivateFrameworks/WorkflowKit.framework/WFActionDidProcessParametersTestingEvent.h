
@interface WFActionDidProcessParametersTestingEvent : WFActionTestingEvent {
    NSDictionary * _processedParameters;
}

@property (nonatomic, readonly) NSDictionary *processedParameters;

- (void).cxx_destruct;
- (id)initWithAction:(id)arg1 processedParameters:(id)arg2;
- (id)processedParameters;

@end
