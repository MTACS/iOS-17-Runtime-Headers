
@interface MCMResultOperationDelete : MCMResultWithContainersArrayBase {
    NSObject<OS_xpc_object> * _xpcToMerge;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcToMerge;

- (void).cxx_destruct;
- (bool)encodeResultOntoReply:(id)arg1;
- (void)mergeWithXPCResult:(id)arg1;
- (void)setXpcToMerge:(id)arg1;
- (id)xpcToMerge;

@end
