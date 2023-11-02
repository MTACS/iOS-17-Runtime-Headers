
@interface COMessagingResponse : COMeshResponse {
    NSData * _payload;
    NSString * _payloadType;
}

@property (nonatomic, copy) NSData *payload;
@property (nonatomic, copy) NSString *payloadType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)payload;
- (id)payloadType;
- (void)setPayload:(id)arg1;
- (void)setPayloadType:(id)arg1;

@end
