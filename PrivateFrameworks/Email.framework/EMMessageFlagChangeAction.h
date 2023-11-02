
@interface EMMessageFlagChangeAction : EMMessageChangeAction {
    ECMessageFlagChange * _flagChange;
}

@property (nonatomic, readonly) ECMessageFlagChange *flagChange;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)flagChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageListItems:(id)arg1 origin:(long long)arg2 actor:(long long)arg3 flagChange:(id)arg4;
- (id)initWithObjectIDs:(id)arg1 origin:(long long)arg2 actor:(long long)arg3 flagChange:(id)arg4;
- (long long)signpostType;

@end
