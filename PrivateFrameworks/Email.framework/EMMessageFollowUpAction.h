
@interface EMMessageFollowUpAction : EMMessageChangeAction {
    EMFollowUp * _followUp;
}

@property (nonatomic, readonly) EMFollowUp *followUp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)followUp;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageListItems:(id)arg1 origin:(long long)arg2 actor:(long long)arg3 followUp:(id)arg4;
- (long long)signpostType;

@end
