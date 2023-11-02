
@interface IDSBlastDoorInterface : NSObject {
    IDSBlastDoorInterfaceInternal * _interface;
}

@property (nonatomic, retain) IDSBlastDoorInterfaceInternal *interface;

- (void).cxx_destruct;
- (id)init;
- (id)interface;
- (void)setInterface:(id)arg1;
- (void)unpackClientMessage:(id)arg1 context:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)unpackPayloadDictionary:(id)arg1 resultHandler:(id /* block */)arg2;

@end
