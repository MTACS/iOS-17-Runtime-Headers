
@interface MCMResultRelay : MCMResultBase {
    NSObject<OS_xpc_object> * _xpcReplyFromRelay;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcReplyFromRelay;

- (void).cxx_destruct;
- (bool)encodeResultOntoReply:(id)arg1;
- (id)initWithXPCReplyFromRelay:(id)arg1;
- (id)xpcReplyFromRelay;

@end
