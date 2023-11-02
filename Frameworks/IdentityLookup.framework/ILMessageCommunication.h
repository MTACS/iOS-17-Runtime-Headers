
@interface ILMessageCommunication : ILCommunication {
    NSString * _messageBody;
}

@property (nonatomic, readonly, copy) NSString *messageBody;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSender:(id)arg1 dateReceived:(id)arg2 messageBody:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMessageCommunication:(id)arg1;
- (id)messageBody;

@end
