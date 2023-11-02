
@interface WFActionDidRunTestingEvent : WFActionTestingEvent {
    WFContentCollection * _output;
}

@property (nonatomic, readonly) WFContentCollection *output;

- (void).cxx_destruct;
- (id)initWithAction:(id)arg1 output:(id)arg2;
- (id)output;

@end
