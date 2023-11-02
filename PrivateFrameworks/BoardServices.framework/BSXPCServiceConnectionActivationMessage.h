
@interface BSXPCServiceConnectionActivationMessage : NSObject <BSInvalidatable, BSXPCServiceConnectionHandshake> {
    int  _invalid;
    BSXPCServiceConnectionMessage * _message;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (void)sendIfNecessary;

@end
