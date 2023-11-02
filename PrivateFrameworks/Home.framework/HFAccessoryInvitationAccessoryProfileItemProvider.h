
@interface HFAccessoryInvitationAccessoryProfileItemProvider : HFAccessoryProfileItemProvider {
    HMUser * _user;
}

@property (nonatomic, readonly) HMUser *user;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 user:(id)arg2;
- (id)invalidationReasons;
- (id)user;

@end
