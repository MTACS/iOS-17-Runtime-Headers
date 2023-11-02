
@interface OBSetupAssistantBulletedListController : OBWelcomeController <OBSetupAssistantSupport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addBulletedListItemWithDescription:(id)arg1 image:(id)arg2;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (void)viewDidLoad;

@end
