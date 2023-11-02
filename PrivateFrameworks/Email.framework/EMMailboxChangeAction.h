
@interface EMMailboxChangeAction : NSObject <NSSecureCoding> {
    EMMailboxObjectID * _mailboxObjectID;
}

@property (nonatomic, readonly, copy) EMMailboxObjectID *mailboxObjectID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailbox:(id)arg1;
- (id)initWithMailboxObjectID:(id)arg1;
- (id)mailboxObjectID;

@end
