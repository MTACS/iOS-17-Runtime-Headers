
@interface NNMKVIPSender : NSObject {
    NSString * _displayName;
    NSSet * _emailAddresses;
    NSString * _name;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSSet *emailAddresses;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)displayName;
- (id)emailAddresses;
- (id)name;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setName:(id)arg1;

@end
