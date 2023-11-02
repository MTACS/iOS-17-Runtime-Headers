
@interface EMMoveMailboxChangeAction : EMMailboxChangeAction {
    EMMailboxObjectID * _parentMailboxID;
}

@property (nonatomic, readonly, copy) EMMailboxObjectID *parentMailboxID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailbox:(id)arg1 newParent:(id)arg2;
- (id)initWithMailboxObjectID:(id)arg1 newParentMailboxID:(id)arg2;
- (id)parentMailboxID;

@end
