
@interface STDiagnosticsServiceMessage : NSObject <NSSecureCoding> {
    long long  _idsInterface;
    NSString * _messageType;
    NSString * _payloadUUID;
    NSSet * _recipients;
    NSString * _sender;
}

@property long long idsInterface;
@property (retain) NSString *messageType;
@property (retain) NSString *payloadUUID;
@property (retain) NSSet *recipients;
@property (retain) NSString *sender;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)idsInterface;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageType:(id)arg1 sender:(id)arg2 recipients:(id)arg3 payloadUUID:(id)arg4 idsInterface:(long long)arg5;
- (id)messageType;
- (id)payloadUUID;
- (id)recipients;
- (id)sender;
- (void)setIdsInterface:(long long)arg1;
- (void)setMessageType:(id)arg1;
- (void)setPayloadUUID:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;

@end
