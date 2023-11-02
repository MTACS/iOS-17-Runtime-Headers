
@interface STAskToManageContactsNotApprovedResponseReceivedUserNotificationContext : STUserNotificationContext {
    NSString * _childName;
}

@property (nonatomic, copy) NSString *childName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)childName;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChildName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setChildName:(id)arg1;

@end
