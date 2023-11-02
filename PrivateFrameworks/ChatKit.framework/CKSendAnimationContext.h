
@interface CKSendAnimationContext : NSObject <CKSendAnimationContext> {
    NSArray * _animatableTextViews;
    NSArray * _animatableViews;
    CABackdropLayer * _backdropLayer;
    bool  _beginAnimationFromTranscriptPresentedState;
    UIView * _containerView;
    NSArray * _framesOfAddedChatItems;
    NSString * _impactIdentifier;
    bool  _isSender;
    NSArray * _messages;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _quickReplySourceRect;
    bool  _shouldRepeat;
    NSArray * _throwBalloonViewAttributesCollection;
    NSArray * _throwBalloonViews;
}

@property (nonatomic, copy) NSArray *animatableTextViews;
@property (nonatomic, copy) NSArray *animatableViews;
@property (nonatomic, retain) CABackdropLayer *backdropLayer;
@property (nonatomic) bool beginAnimationFromTranscriptPresentedState;
@property (nonatomic, retain) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *framesOfAddedChatItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *impactIdentifier;
@property (nonatomic) bool isSender;
@property (nonatomic, retain) NSArray *messages;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } quickReplySourceRect;
@property (nonatomic) bool shouldRepeat;
@property (nonatomic, readonly) bool shouldUseQuickReplySourceRect;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *throwBalloonViewAttributesCollection;
@property (nonatomic, copy) NSArray *throwBalloonViews;

- (void).cxx_destruct;
- (id)animatableTextViews;
- (id)animatableViews;
- (id)backdropLayer;
- (bool)beginAnimationFromTranscriptPresentedState;
- (id)containerView;
- (id)framesOfAddedChatItems;
- (id)impactIdentifier;
- (bool)isSender;
- (id)messages;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })quickReplySourceRect;
- (void)setAnimatableTextViews:(id)arg1;
- (void)setAnimatableViews:(id)arg1;
- (void)setBackdropLayer:(id)arg1;
- (void)setBeginAnimationFromTranscriptPresentedState:(bool)arg1;
- (void)setContainerView:(id)arg1;
- (void)setFramesOfAddedChatItems:(id)arg1;
- (void)setImpactIdentifier:(id)arg1;
- (void)setIsSender:(bool)arg1;
- (void)setMessages:(id)arg1;
- (void)setQuickReplySourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShouldRepeat:(bool)arg1;
- (void)setThrowBalloonViewAttributesCollection:(id)arg1;
- (void)setThrowBalloonViews:(id)arg1;
- (bool)shouldRepeat;
- (bool)shouldUseQuickReplySourceRect;
- (id)throwBalloonViewAttributesCollection;
- (id)throwBalloonViews;

@end
