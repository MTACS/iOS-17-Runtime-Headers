
@interface ILMessageClassificationRequest : ILClassificationRequest <NSSecureCoding> {
    NSArray * _messageCommunications;
}

@property (nonatomic, readonly, copy) NSArray *messageCommunications;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageCommunications:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;
- (id)messageCommunications;

@end
