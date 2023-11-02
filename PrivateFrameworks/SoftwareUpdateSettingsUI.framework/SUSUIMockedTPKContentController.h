
@interface SUSUIMockedTPKContentController : TPKContentController <SoftwareUpdateSettingsMockingKit.SUSMKComingSoonTipResponderDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)contentDidBecomeAvailableWithTitle:(id)arg1 andContent:(id)arg2;
- (id)createTipKitDescription:(id)arg1;
- (id)initWithContext:(id)arg1;

@end
