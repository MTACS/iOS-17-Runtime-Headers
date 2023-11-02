
@interface HUServiceDetailsTextViewDelegate : NSObject <UITextViewDelegate> {
    HUServiceDetailsItemManager * _itemManager;
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HUServiceDetailsItemManager *itemManager;
@property (readonly) Class superclass;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (void)dismissTextViewController;
- (void)displayPrivacyInformationWithIdentifier:(id)arg1;
- (void)displayUnifiedPrivacyInformationWithIdentifiers:(id)arg1;
- (id)itemManager;
- (id)privacyIdentifierForSectionIdentifier:(id)arg1;
- (void)setItemManager:(id)arg1;
- (void)setViewController:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)unifiedIdentifiersForSectionIdentifier:(id)arg1;
- (id)viewController;

@end
