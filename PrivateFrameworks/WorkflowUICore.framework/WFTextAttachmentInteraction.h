
@interface WFTextAttachmentInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {
    <WFTextAttachmentInteractionDelegate> * _delegate;
    UITapGestureRecognizer * _tapGestureRecognizer;
    NSTextContainer * _textContainer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textContainerInset;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFTextAttachmentInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, retain) NSTextContainer *textContainer;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textContainerInset;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)attachmentAtPoint:(struct CGPoint { double x1; double x2; })arg1 characterRange:(out struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTextTap:(id)arg1;
- (id)layoutManager;
- (void)setDelegate:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTextContainer:(id)arg1;
- (void)setTextContainerInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)tapGestureRecognizer;
- (id)textContainer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textContainerInset;
- (id)textStorage;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
