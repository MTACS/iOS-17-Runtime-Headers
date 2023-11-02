
@interface REAudioGroupPayload : RESharedResourcePayload {
    NSObject<OS_xpc_object> * _buffer;
    NSArray * _payloads;
}

@property (nonatomic, readonly) NSArray *payloads;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayloads:(id)arg1;
- (id)payloads;

@end
