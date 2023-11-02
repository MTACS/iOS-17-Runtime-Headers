
@interface SFSharedAccountsGroupInvitationCell : SFAccountManagerPlatterWithDeclineButtonCell {
    KCSharingGroup * _group;
}

@property (nonatomic, readonly) KCSharingGroup *group;

+ (unsigned long long)contentInset;

- (void).cxx_destruct;
- (void)configureWithGroup:(id)arg1;
- (id)group;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
