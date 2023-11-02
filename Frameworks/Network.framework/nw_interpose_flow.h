
@interface nw_interpose_flow : NSObject {
    id /* block */  _eventHandler;
    NSObject<OS_nw_path_flow> * _flow;
    NSObject<OS_nw_interface> * _interface;
    NSObject<OS_nw_path_flow_registration> * _registration;
}

- (void).cxx_destruct;
- (void)clearFlowEventHandler;
- (void)close;
- (void)closeFlow;
- (void)dealloc;
- (id)initWithInterface:(id)arg1 registration:(id)arg2 eventHandler:(id /* block */)arg3;
- (bool)matchNexusAgent:(unsigned char)arg1;
- (bool)matchNexusAgentWithFlow:(id)arg1;
- (bool)matchNexusInstance:(id)arg1;
- (void)notifyFlowEvent:(int)arg1;
- (void)resetFlow:(id)arg1;

@end
