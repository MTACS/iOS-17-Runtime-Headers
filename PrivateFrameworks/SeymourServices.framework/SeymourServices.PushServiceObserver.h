
@interface SeymourServices.PushServiceObserver : NSObject <APSConnectionDelegate> {
    void connection;
    void container;
    void eventHub;
}

- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)init;

@end
