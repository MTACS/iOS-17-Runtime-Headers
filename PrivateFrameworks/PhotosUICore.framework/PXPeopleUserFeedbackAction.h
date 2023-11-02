
@interface PXPeopleUserFeedbackAction : PXPhotosAction {
    <PXFastEnumeration> * _collections;
    NSDictionary * _undoUserFeedbacks;
    PHUserFeedback * _userFeedback;
}

@property (nonatomic, copy) NSDictionary *undoUserFeedbacks;
@property (nonatomic, readonly) PHUserFeedback *userFeedback;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)collections;
- (id)initWithPeople:(id)arg1 feedbackType:(unsigned long long)arg2;
- (void)performAction:(id /* block */)arg1;
- (void)performRedo:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (void)setUndoUserFeedbacks:(id)arg1;
- (id)undoUserFeedbacks;
- (id)userFeedback;

@end
