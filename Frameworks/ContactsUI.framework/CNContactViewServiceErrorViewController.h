
@interface CNContactViewServiceErrorViewController : CNErrorViewController <CNContactContentViewController> {
    <CNContactViewHostProtocol> * delegate;
    <CNContactViewControllerPPTDelegate> * pptDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactViewHostProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CNContactViewControllerPPTDelegate> *pptDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)didChangeToEditMode:(bool)arg1;
- (void)didChangeToShowTitle:(bool)arg1;
- (void)editCancel;
- (void)performConfirmedCancel;
- (id)pptDelegate;
- (void)setDelegate:(id)arg1;
- (void)setPptDelegate:(id)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(id /* block */)arg2;
- (void)toggleEditing;

@end
