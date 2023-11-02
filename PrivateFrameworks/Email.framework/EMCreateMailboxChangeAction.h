
@interface EMCreateMailboxChangeAction : EMMailboxChangeAction {
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailboxName:(id)arg1 parentMailbox:(id)arg2;
- (id)initWithMailboxName:(id)arg1 parentMailboxID:(id)arg2;
- (id)name;

@end
