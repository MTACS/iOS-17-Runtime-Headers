
@interface MEMessageEncodingResult : NSObject <NSSecureCoding> {
    MEEncodedOutgoingMessage * _encodedMessage;
    NSError * _encryptionError;
    NSError * _signingError;
}

@property (nonatomic, readonly, copy) MEEncodedOutgoingMessage *encodedMessage;
@property (nonatomic, readonly, copy) NSError *encryptionError;
@property (nonatomic, readonly, copy) NSError *signingError;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedMessage;
- (id)encryptionError;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncodedMessage:(id)arg1 signingError:(id)arg2 encryptionError:(id)arg3;
- (id)signingError;

@end
