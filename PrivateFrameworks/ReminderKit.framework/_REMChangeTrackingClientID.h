
@interface _REMChangeTrackingClientID : NSObject <REMChangeTrackingClientIdentifying> {
    NSString * _accountIdentifier;
    NSString * _clientName;
}

@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSString *clientName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)clientName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientName:(id)arg1 accountIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
