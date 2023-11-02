
@interface DropInCore.ConversationTimer : DIOneshotTimer {
    void mode;
}

- (id)initWithInterval:(double)arg1 queue:(id)arg2 identifier:(id)arg3 label:(id)arg4 handler:(id /* block */)arg5;

@end
