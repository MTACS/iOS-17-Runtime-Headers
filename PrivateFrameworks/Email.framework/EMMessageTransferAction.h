
@interface EMMessageTransferAction : EMMessageChangeAction {
    bool  _copyMessages;
    NSURL * _destinationMailboxURL;
    ECMessageFlagChange * _flagChange;
    long long  _specialDestinationMailboxType;
}

@property (nonatomic, readonly) bool copyMessages;
@property (nonatomic, readonly) NSURL *destinationMailboxURL;
@property (nonatomic, readonly) ECMessageFlagChange *flagChange;
@property (nonatomic, readonly) long long specialDestinationMailboxType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)copyMessages;
- (id)destinationMailboxURL;
- (void)encodeWithCoder:(id)arg1;
- (id)flagChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageListItems:(id)arg1 origin:(long long)arg2 actor:(long long)arg3 destinationMailbox:(id)arg4 copyMessages:(bool)arg5;
- (id)initWithMessageListItems:(id)arg1 origin:(long long)arg2 actor:(long long)arg3 specialDestinationMailboxType:(long long)arg4 flagChange:(id)arg5 copyMessages:(bool)arg6;
- (id)initWithObjectIDs:(id)arg1 origin:(long long)arg2 actor:(long long)arg3 specialDestinationMailboxType:(long long)arg4 flagChange:(id)arg5 copyMessages:(bool)arg6;
- (long long)signpostType;
- (long long)specialDestinationMailboxType;

@end
