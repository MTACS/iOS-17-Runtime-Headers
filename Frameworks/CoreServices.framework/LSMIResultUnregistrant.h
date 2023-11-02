
@interface LSMIResultUnregistrant : NSObject {
    NSString * _bundleID;
    LSPrecondition * _precondition;
    <LSMIResultRegistrantStrategy> * _strategy;
    unsigned int  _type;
    NSUUID * _uuid;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1 operationUUID:(id)arg2 bundleIdentifier:(id)arg3 precondition:(id)arg4 type:(unsigned int)arg5;
- (void)runWithCompletion:(id /* block */)arg1;

@end
