
@interface OBSetupAssistantLanguageLocaleController : OBTableWelcomeController <OBSetupAssistantSupport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (double)bottomPaddingHeight;
- (double)headerViewBottomToTableViewHeaderTopPadding;
- (double)headerViewBottomToTableViewTopPaddingForLocalePane;

@end
