
@interface HMDIDSMessageContext : HMFObject {
    HMFMessageDestination * _destination;
    NSUUID * _identifier;
    NSDictionary * _userInfo;
}

@property (readonly) HMFMessageDestination *destination;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)destination;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 destination:(id)arg2 userInfo:(id)arg3;
- (id)userInfo;

@end
