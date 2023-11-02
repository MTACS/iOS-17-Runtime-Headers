
@interface CNContactQuickActionsDisambiguationMenuPresentation : NSObject

+ (id)alertSheetPresentation;
+ (id)defaultPresentation;
+ (id)modalPresentation;

- (id)initBase;
- (id)viewControllerForPresentingActionsController:(id)arg1 fromView:(id)arg2 dismissDisambiguationMenuHandler:(id /* block */)arg3;

@end
