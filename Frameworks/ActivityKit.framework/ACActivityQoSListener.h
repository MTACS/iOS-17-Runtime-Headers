
@interface ACActivityQoSListener : NSObject {
    _TtC11ActivityKit28ActivityQoSObservationClient * _client;
}

@property (nonatomic, retain) _TtC11ActivityKit28ActivityQoSObservationClient *client;

- (void).cxx_destruct;
- (id)client;
- (id)init;
- (id)listenForActivityQoS:(id)arg1 withHandler:(id /* block */)arg2;
- (void)setClient:(id)arg1;

@end
