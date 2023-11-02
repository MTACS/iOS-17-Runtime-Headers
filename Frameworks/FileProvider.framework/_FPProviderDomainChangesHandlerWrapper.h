
@interface _FPProviderDomainChangesHandlerWrapper : NSObject {
    id /* block */  _handler;
}

@property (getter=isUnregistered) bool unregistered;

+ (id)wrapperWithHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)callHandlerWithProvidersByID:(id)arg1 error:(id)arg2;
- (bool)isUnregistered;
- (void)setUnregistered:(bool)arg1;

@end
