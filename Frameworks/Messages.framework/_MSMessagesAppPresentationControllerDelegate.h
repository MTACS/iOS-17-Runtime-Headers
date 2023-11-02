
@interface _MSMessagesAppPresentationControllerDelegate : NSObject <UISheetPresentationControllerDelegate> {
    MSMessagesAppViewController * _appViewController;
}

@property (nonatomic) MSMessagesAppViewController *appViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appViewController;
- (id)initWithMessagesAppViewController:(id)arg1;
- (void)setAppViewController:(id)arg1;
- (void)sheetPresentationControllerDidChangeSelectedDetentIdentifier:(id)arg1;

@end
