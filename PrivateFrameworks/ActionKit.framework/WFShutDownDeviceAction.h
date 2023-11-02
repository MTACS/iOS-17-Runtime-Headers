
@interface WFShutDownDeviceAction : WFAction {
    void modeParameterKey;
    void shutdownReason;
}

@property (nonatomic, readonly) NSString *iconSymbolName;

- (void).cxx_destruct;
- (id)iconSymbolName;
- (id)init;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;

@end
