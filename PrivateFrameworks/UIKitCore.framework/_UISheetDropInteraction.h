
@interface _UISheetDropInteraction : NSObject <UIDropInteractionDelegate, UIInteraction> {
    NSMapTable * _activityTypesOrActivities;
    <_UISheetDropInteractionDelegate> * _delegate;
    UIDropInteraction * _dropInteraction;
    UIPresentationController * _presentationController;
    UIView * _view;
}

@property (nonatomic, readonly) NSMapTable *activityTypesOrActivities;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <_UISheetDropInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIDropInteraction *dropInteraction;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPresentationController *presentationController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)_activityForSession:(id)arg1 completion:(id /* block */)arg2;
- (id)_activityTypeForSession:(id)arg1;
- (void)_removeActivityTypeOrActivityForSession:(id)arg1;
- (id)activityTypesOrActivities;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (id)dropInteraction;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)presentationController;
- (void)setPresentationController:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
