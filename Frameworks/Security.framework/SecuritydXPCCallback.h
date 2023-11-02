
@interface SecuritydXPCCallback : NSObject <SecuritydXPCCallbackProtocol> {
    id /* block */  _callback;
}

@property (copy) id /* block */ callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)callCallback:(bool)arg1 error:(id)arg2;
- (id /* block */)callback;
- (id)initWithCallback:(id /* block */)arg1;
- (void)setCallback:(id /* block */)arg1;

@end
