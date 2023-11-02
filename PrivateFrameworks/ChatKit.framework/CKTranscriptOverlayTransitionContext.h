
@interface CKTranscriptOverlayTransitionContext : NSObject {
    NSString * _anchorChatItemGUID;
    bool  _isParentChatControllerShowingBanner;
    bool  _keyboardWasUpInMainTranscript;
    long long  _navBarContext;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _parentCollectionViewFrame;
    bool  _presentWithKeyboard;
    CKInlineReplyTransitionProperties * _replyTransitionProperties;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _transcriptMarginInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _transcriptSafeAreaInsets;
    NSDictionary * _visibleChatItemToFrameMap;
    bool  _wantsModalPresentation;
    bool  _wantsUnanimatedPresentation;
}

@property (nonatomic, copy) NSString *anchorChatItemGUID;
@property (nonatomic) bool isParentChatControllerShowingBanner;
@property (nonatomic) bool keyboardWasUpInMainTranscript;
@property (nonatomic) long long navBarContext;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } parentCollectionViewFrame;
@property (nonatomic) bool presentWithKeyboard;
@property (nonatomic, copy) CKInlineReplyTransitionProperties *replyTransitionProperties;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } transcriptMarginInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } transcriptSafeAreaInsets;
@property (nonatomic, retain) NSDictionary *visibleChatItemToFrameMap;
@property (nonatomic) bool wantsModalPresentation;
@property (nonatomic) bool wantsUnanimatedPresentation;

- (void).cxx_destruct;
- (id)anchorChatItemGUID;
- (id)description;
- (bool)isParentChatControllerShowingBanner;
- (bool)keyboardWasUpInMainTranscript;
- (long long)navBarContext;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })parentCollectionViewFrame;
- (bool)presentWithKeyboard;
- (id)replyTransitionProperties;
- (void)setAnchorChatItemGUID:(id)arg1;
- (void)setIsParentChatControllerShowingBanner:(bool)arg1;
- (void)setKeyboardWasUpInMainTranscript:(bool)arg1;
- (void)setNavBarContext:(long long)arg1;
- (void)setParentCollectionViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPresentWithKeyboard:(bool)arg1;
- (void)setReplyTransitionProperties:(id)arg1;
- (void)setTranscriptMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTranscriptSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setVisibleChatItemToFrameMap:(id)arg1;
- (void)setWantsModalPresentation:(bool)arg1;
- (void)setWantsUnanimatedPresentation:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })transcriptMarginInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })transcriptSafeAreaInsets;
- (id)visibleChatItemToFrameMap;
- (bool)wantsModalPresentation;
- (bool)wantsUnanimatedPresentation;

@end
