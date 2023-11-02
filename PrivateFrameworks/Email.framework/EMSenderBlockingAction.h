
@interface EMSenderBlockingAction : EMMessageChangeAction {
    bool  _blockSender;
}

@property (nonatomic, readonly) bool blockSender;

+ (bool)supportsSecureCoding;

- (bool)blockSender;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageListItems:(id)arg1 origin:(long long)arg2 actor:(long long)arg3 blockSender:(bool)arg4;
- (long long)signpostType;

@end
