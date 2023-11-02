
@interface DIIdentityAuthorizationController : NSObject {
    _TtC7CoreIDV25DigitalPresentmentSession * _session;
}

@property (nonatomic, retain) _TtC7CoreIDV25DigitalPresentmentSession *session;

- (void).cxx_destruct;
- (void)cancelRequest;
- (void)checkCanRequestDocument:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)requestDocument:(id)arg1 completion:(id /* block */)arg2;
- (id)session;
- (void)setSession:(id)arg1;

@end
