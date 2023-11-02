
@interface PXPeopleInternalAnnotationPersonSummaryViewController : UIViewController {
    PXPeopleScalableAvatarView * _avatarView;
    id /* block */  _cancelCompletion;
    id /* block */  _dismissCompletion;
    PHPerson * _person;
}

@property (nonatomic, readonly) PXPeopleScalableAvatarView *avatarView;
@property (nonatomic, readonly) id /* block */ cancelCompletion;
@property (nonatomic, readonly) id /* block */ dismissCompletion;
@property (nonatomic, retain) PHPerson *person;

- (void).cxx_destruct;
- (void)_cancelTapped:(id)arg1;
- (id)avatarView;
- (id /* block */)cancelCompletion;
- (id /* block */)dismissCompletion;
- (id)initWithPerson:(id)arg1 withDismissCompletion:(id /* block */)arg2 withCancelCompletion:(id /* block */)arg3;
- (void)nextTapped:(id)arg1;
- (id)person;
- (void)setPerson:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
