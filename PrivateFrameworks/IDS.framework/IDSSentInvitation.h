
@interface IDSSentInvitation : IDSInvitation <NSSecureCoding> {
    <IDSDestinationProtocol> * _destination;
}

@property (nonatomic, readonly, copy) <IDSDestinationProtocol> *destination;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestination:(id)arg1 state:(long long)arg2 expirationDate:(id)arg3 uniqueID:(id)arg4 context:(id)arg5;
- (bool)isEqual:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setSelfHandle:(id)arg1;
- (void)setSenderMergeID:(id)arg1;
- (void)setState:(long long)arg1;

@end
