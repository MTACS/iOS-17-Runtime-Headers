
@interface EMRenameMailboxChangeAction : EMMailboxChangeAction {
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailbox:(id)arg1 newName:(id)arg2;
- (id)initWithMailboxObjectID:(id)arg1 newName:(id)arg2;
- (id)name;

@end
