
@interface PKTextInputFeedbackController : NSObject {
    PKTextInputGestureFeedbackView * __feedbackView;
    <PKTextInputFeedbackControllerDelegate> * _delegate;
    long long  _feedbackType;
    PKTextInputTextPlaceholder * _placeholder;
    PKTextInputElementContent * _referenceElementContent;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _referenceTextRange;
    bool  _showingCustomFeedback;
}

@property (nonatomic, retain) PKTextInputGestureFeedbackView *_feedbackView;
@property (nonatomic) <PKTextInputFeedbackControllerDelegate> *delegate;
@property (nonatomic) long long feedbackType;
@property (nonatomic, retain) PKTextInputTextPlaceholder *placeholder;
@property (nonatomic, retain) PKTextInputElementContent *referenceElementContent;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } referenceTextRange;
@property (nonatomic, readonly) PKTextInputTextPlaceholder *reserveSpacePlaceholder;
@property (setter=_setShowingCustomFeedback:, nonatomic) bool showingCustomFeedback;

- (void).cxx_destruct;
- (id)_feedbackView;
- (void)_placeholderChanged:(id)arg1;
- (void)_setShowingCustomFeedback:(bool)arg1;
- (bool)_shouldShowCustomFeedback;
- (void)_updateFeedbackState;
- (void)_updateFeedbackView;
- (void)beginDisplayForReserveSpacePlaceholder:(id)arg1;
- (void)cancelShowingReserveSpaceIntro;
- (void)dealloc;
- (id)delegate;
- (void)endDisplayForReserveSpacePlaceholder:(id)arg1;
- (long long)feedbackType;
- (id)init;
- (id)placeholder;
- (id)referenceElementContent;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })referenceTextRange;
- (id)reserveSpacePlaceholder;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackType:(long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setReferenceElementContent:(id)arg1;
- (void)setReferenceElementContent:(id)arg1 referenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 feedbackType:(long long)arg3;
- (void)setReferenceTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)set_feedbackView:(id)arg1;
- (bool)showingCustomFeedback;

@end
