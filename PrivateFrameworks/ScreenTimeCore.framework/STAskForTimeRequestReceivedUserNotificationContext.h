
@interface STAskForTimeRequestReceivedUserNotificationContext : STUserNotificationContext {
    NSNumber * _childDSID;
    NSString * _childName;
}

@property (nonatomic, retain) NSNumber *childDSID;
@property (nonatomic, copy) NSString *childName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_fetchAndWriteFamilyPhotoURLIfNeeded:(id /* block */)arg1;
- (id)childDSID;
- (id)childName;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAskForTimeRequestIdentifier:(id)arg1 childName:(id)arg2 childDSID:(id)arg3 requestedResourceName:(id)arg4;
- (id)initWithAskForTimeRequestIdentifier:(id)arg1 familyMember:(id)arg2 requestedResourceName:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)setChildDSID:(id)arg1;
- (void)setChildName:(id)arg1;

@end
