
@interface IDSBatchIDQueryController : NSObject <TUIDSBatchIDQueryController> {
    _IDSBatchIDQueryController * _internal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithService:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)invalidate;
- (void)setDestinations:(id)arg1;

@end
