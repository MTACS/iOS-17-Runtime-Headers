
@interface ACActivityProminenceListener : NSObject {
    _TtC11ActivityKit35ActivityProminenceObservationClient * _client;
}

@property (nonatomic, retain) _TtC11ActivityKit35ActivityProminenceObservationClient *client;

- (void).cxx_destruct;
- (id)client;
- (id)init;
- (id)listenForActivityProminence:(id)arg1 withHandler:(id /* block */)arg2;
- (void)setClient:(id)arg1;

@end
