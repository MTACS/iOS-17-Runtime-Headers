
@interface CATSendBroadcastMessageOperation : CATOperation {
    <CATSharingBroadcastPrimitives> * mBroadcastPrimitives;
    <CATDictionaryCodable> * mMessage;
}

- (void).cxx_destruct;
- (id)initWithBroadcastPrimitive:(id)arg1 message:(id)arg2;
- (bool)isAsynchronous;
- (void)main;
- (void)sendMessage;

@end
