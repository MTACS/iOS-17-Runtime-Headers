
@interface REVideoRequestOptions : REResourceRequestOptions {
    NSObject<OS_xpc_object> * _receiverEndpoint;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *receiverEndpoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReceiverEndpoint:(id)arg1;
- (id)receiverEndpoint;

@end
