
@interface _UIWeakOverlayService : NSObject <_UIOverlayServiceServerToClientInterface> {
    _UIOverlayService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIOverlayService *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithService:(id)arg1;
- (oneway void)performOverlayClientAction:(id)arg1;
- (id)service;

@end
