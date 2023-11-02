
@interface NCNotificationAlertOptions : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    NSUUID * _activeModeUUID;
    unsigned long long  _reason;
    unsigned long long  _suppression;
}

@property (nonatomic, readonly, copy) NSUUID *activeModeUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long reason;
@property (nonatomic, readonly) bool shouldSuppress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long suppression;

- (void).cxx_destruct;
- (id)activeModeUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithNotificationAlertOptions:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)reason;
- (bool)shouldSuppress;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)suppression;

@end
