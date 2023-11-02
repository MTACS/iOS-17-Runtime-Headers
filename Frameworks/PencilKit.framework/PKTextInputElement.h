
@interface PKTextInputElement : NSObject {
    <PKScribbleInteractionWrapper> * __containerInteraction;
    long long  __elementType;
    long long  __orderInContainer;
    bool  __requestingPlaceholderSuppression;
    <PKScribbleInteractionWrapper> * __viewScribbleInteraction;
    bool  __waitingForMatchingDidFinishWriting;
    PKTextInputWritingSession * __writingSession;
    <NSObject><NSCopying> * _containerElementIdentifier;
    <UICoordinateSpace> * _coordinateSpace;
    UIView * _elementTextInputView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastKnownFrame;
    bool  _legacyHasBeenFocusedWithinContainer;
    NSNumber * _recognitionIdentifier;
    <UITextInput> * _textInput;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } activeAffectedRange;

- (void).cxx_destruct;
- (void)_beginSuppressingFieldPlaceholder;
- (void)_finishSuppressingFieldPlaceholderIfNeeded;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })activeAffectedRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })activePreviewRange;
- (void)beginSuppressingPlaceholderIfNecessary;
- (bool)clearActivePreview;
- (void)dealloc;
- (id)description;
- (void)didEndWriting;
- (void)didInsertText;
- (void)didMoveToWritingSession:(id)arg1;
- (void)endSuppressingPlaceholderIfNecessary;
- (void)notifyTextInputTextDidChange;
- (void)notifyTextInputTextWillChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionClipRectInCoordinateSpace:(id)arg1;
- (id)selectionHighlightColor;
- (bool)showSelectionCommands;
- (void)swapWritingStateWithElement:(id)arg1;
- (void)willBeginWriting;

@end
