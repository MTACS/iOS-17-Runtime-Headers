
@interface CRKIDSMessageCannon : NSObject {
    <CRKIDSPrimitives> * _IDSPrimitives;
    CRKIDSMessageFormatter * _messageFormatter;
}

@property (nonatomic, readonly) <CRKIDSPrimitives> *IDSPrimitives;
@property (nonatomic, readonly) CRKIDSMessageFormatter *messageFormatter;

- (void).cxx_destruct;
- (id)IDSPrimitives;
- (id)initWithIDSPrimitives:(id)arg1;
- (id)messageFormatter;
- (void)sendIDSMessage:(id)arg1 destinationAddress:(id)arg2 sourceAppleID:(id)arg3 completion:(id /* block */)arg4;
- (void)sendIDSMessage:(id)arg1 destinationAddress:(id)arg2 sourceAppleID:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;

@end
