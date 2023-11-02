
@interface GTLoopbackServiceXPCDispatcher : GTXPCDispatcher <GTLoopbackServiceXPCDispatcher> {
    <GTLoopbackService> * _service;
}

- (void).cxx_destruct;
- (void)echo_:(id)arg1 replyConnection:(id)arg2;
- (void)echo_completionHandler_:(id)arg1 replyConnection:(id)arg2;
- (void)echo_repeat_callback_:(id)arg1 replyConnection:(id)arg2;
- (void)echo_repeat_callback_complete_:(id)arg1 replyConnection:(id)arg2;
- (id)initWithService:(id)arg1 properties:(id)arg2;

@end
