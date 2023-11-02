
@interface SearchUIDragSource : NSObject <UIDragInteractionDelegate, UIDragInteractionDelegate_Private> {
    SearchUIRowModel * _dragObject;
    UIView * _dragSourceView;
    <SearchUIFeedbackDelegateInternal> * _feedbackDelegate;
    UIView * _overrideDragPreviewView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SearchUIRowModel *dragObject;
@property UIView *dragSourceView;
@property <SearchUIFeedbackDelegateInternal> *feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *overrideDragPreviewView;
@property (readonly) Class superclass;

+ (id)dragSourceForView:(id)arg1 dragObject:(id)arg2 feedbackDelegate:(id)arg3;

- (void).cxx_destruct;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (id)_requiredContextIDsForDragSessionInView:(id)arg1;
- (bool)_shouldPerformHitTestingForDragSessionInView:(id)arg1;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (id)dragObject;
- (id)dragParametersForPreviewView:(id)arg1;
- (id)dragSourceView;
- (id)feedbackDelegate;
- (id)initWithView:(id)arg1 dragObject:(id)arg2 feedbackDelegate:(id)arg3;
- (bool)isMailDrag;
- (id)overrideDragPreviewView;
- (void)sendDragFeedback;
- (void)setDragObject:(id)arg1;
- (void)setDragSourceView:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setOverrideDragPreviewView:(id)arg1;

@end
