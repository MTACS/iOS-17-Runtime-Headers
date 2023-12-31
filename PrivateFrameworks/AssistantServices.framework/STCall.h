
@interface STCall : STSiriModelObject {
    STContactAddress * _initiatorAddress;
    STContactAddress * _recipientAddress;
    long long  _service;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_aceContextObjectValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initiatorAddress;
- (id)recipientAddress;
- (long long)service;
- (void)setInitiatorAddress:(id)arg1;
- (void)setRecipientAddress:(id)arg1;
- (void)setService:(long long)arg1;

@end
