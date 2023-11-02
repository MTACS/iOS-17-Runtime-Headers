
@interface ACActivityPresentationListener : NSObject {
    _TtC11ActivityKit37ActivityPresentationObservationClient * _client;
}

@property (nonatomic, retain) _TtC11ActivityKit37ActivityPresentationObservationClient *client;

- (void).cxx_destruct;
- (id)client;
- (id)init;
- (id)listenForActivityPresentation:(id)arg1 presenterBundleIdentifier:(id)arg2 withHandler:(id /* block */)arg3;
- (void)setClient:(id)arg1;

@end
