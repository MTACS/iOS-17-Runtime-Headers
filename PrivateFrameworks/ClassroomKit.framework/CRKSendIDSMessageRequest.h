
@interface CRKSendIDSMessageRequest : CATTaskRequest {
    NSString * _destinationAddress;
    NSDictionary * _message;
    CRKIDSMessageOptions * _options;
    NSString * _sourceAppleID;
}

@property (nonatomic, copy) NSString *destinationAddress;
@property (nonatomic, copy) NSDictionary *message;
@property (nonatomic, copy) CRKIDSMessageOptions *options;
@property (nonatomic, copy) NSString *sourceAppleID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)destinationAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (id)options;
- (void)setDestinationAddress:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setSourceAppleID:(id)arg1;
- (id)sourceAppleID;

@end
