
@interface EDMailboxAction : NSObject {
    long long  _actionID;
    long long  _actionType;
    long long  _mailboxID;
    NSString * _mailboxName;
    NSString * _renamedMailboxName;
}

@property (nonatomic, readonly) long long actionID;
@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly) long long mailboxID;
@property (nonatomic, readonly, copy) NSString *mailboxName;
@property (nonatomic, readonly, copy) NSString *renamedMailboxName;

+ (id)actionWithID:(long long)arg1 toCreateMailbox:(long long)arg2 mailboxName:(id)arg3;
+ (id)actionWithID:(long long)arg1 toDeleteMailbox:(long long)arg2 mailboxName:(id)arg3;
+ (id)actionWithID:(long long)arg1 toRenameMailbox:(long long)arg2 mailboxName:(id)arg3 toName:(id)arg4;

- (void).cxx_destruct;
- (long long)actionID;
- (long long)actionType;
- (id)initWithID:(long long)arg1 actionType:(long long)arg2 mailboxID:(long long)arg3 mailboxName:(id)arg4 renamedMailboxName:(id)arg5;
- (long long)mailboxID;
- (id)mailboxName;
- (id)renamedMailboxName;

@end
