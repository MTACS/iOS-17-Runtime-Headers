
@interface CNPhotoPickerActionsViewController : UIViewController <CNPhotoPickerActionsDelegate, UIAdaptivePresentationControllerDelegate> {
    CNPhotoPickerActionsModel * _actionsModel;
    UIStackView * _buttonsView;
    CAShapeLayer * _clippingLayer;
    <CNPhotoPickerActionsViewControllerLayout> * _currentLayout;
    <CNPhotoPickerActionsViewControllerDelegate> * _delegate;
    CNPhotoPickerActionButton * _deleteButton;
    CNPhotoPickerActionButton * _duplicateButton;
    CNPhotoPickerActionButton * _editButton;
    UIView * _imageContainerView;
    UIView * _transitionContainerView;
}

@property (nonatomic, retain) CNPhotoPickerActionsModel *actionsModel;
@property (nonatomic, retain) UIStackView *buttonsView;
@property (nonatomic, retain) CAShapeLayer *clippingLayer;
@property (nonatomic, retain) <CNPhotoPickerActionsViewControllerLayout> *currentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNPhotoPickerActionsViewControllerDelegate> *delegate;
@property (nonatomic, retain) CNPhotoPickerActionButton *deleteButton;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNPhotoPickerActionButton *duplicateButton;
@property (nonatomic, retain) CNPhotoPickerActionButton *editButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *imageContainerView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *transitionContainerView;

+ (id)log;

- (void).cxx_destruct;
- (id)actionsModel;
- (void)actionsModel:(id)arg1 didAssignToContact:(id)arg2 atIndexPath:(id)arg3;
- (void)actionsModel:(id)arg1 didDelete:(id)arg2 atIndexPath:(id)arg3 withSourceView:(id)arg4;
- (void)actionsModel:(id)arg1 didDuplicate:(id)arg2 atIndexPath:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)actionsModel:(id)arg1 didEdit:(id)arg2 atIndexPath:(id)arg3;
- (void)applyLayout:(id)arg1;
- (id)buttonsView;
- (id)clippingLayer;
- (id)currentLayout;
- (id)delegate;
- (id)deleteButton;
- (double)deleteMoveInDelay;
- (double)deleteMoveInDuration;
- (void)didTapDone;
- (id)duplicateButton;
- (double)duplicateScaleDelay;
- (double)duplicateScaleDuration;
- (id)editButton;
- (id)imageContainerView;
- (id)initWithActionsModel:(id)arg1;
- (void)layoutViewFromModel:(id)arg1;
- (void)performDeleteTransitionToItem:(id)arg1;
- (void)performDuplicateTransitionToItem:(id)arg1 fromView:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)presentDeleteConfirmationWithSourceView:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setActionsModel:(id)arg1;
- (void)setButtonsView:(id)arg1;
- (void)setClippingLayer:(id)arg1;
- (void)setCurrentLayout:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteButton:(id)arg1;
- (void)setDuplicateButton:(id)arg1;
- (void)setEditButton:(id)arg1;
- (void)setImageContainerView:(id)arg1;
- (void)setTransitionContainerView:(id)arg1;
- (id)transitionContainerView;
- (void)updateActionsModelWithProviderItem:(id)arg1;
- (void)updateButtonsFromModel:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
