
@interface NCNotificationSectionMuteAssertion : NSObject <NCNotificationMuteAssertion>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sectionMuteAssertion;

- (id)_init;
- (unsigned long long)activeMuteAssertionLevelForThreadIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
