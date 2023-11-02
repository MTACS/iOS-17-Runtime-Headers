
@interface CKPhotoGridTapbackView : UIView <CKGradientReferenceView, PXGDecorationView> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clippingRect;
    unsigned long long  _decorationOptions;
    bool  _needsAnimation;
    CKAggregateAcknowledgmentBalloonView * _tapbackBalloonView;
    PXAssetReference * _userData;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long decorationOptions;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsAnimation;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKAggregateAcknowledgmentBalloonView *tapbackBalloonView;
@property (nonatomic, copy) PXAssetReference *userData;

- (void).cxx_destruct;
- (id)_imAggregateAcknowledgmentChatItem;
- (void)_setupBalloonView;
- (void)_tearDownBalloonView;
- (id)asset;
- (Class)balloonViewClass;
- (void)becomeReusable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (unsigned long long)decorationOptions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })gradientFrame;
- (id)gradientReferenceView;
- (bool)invertTail;
- (bool)isFromMe;
- (void)layoutSubviews;
- (bool)needsAnimation;
- (void)performInsertion:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDecorationOptions:(unsigned long long)arg1;
- (void)setNeedsAnimation:(bool)arg1;
- (void)setTapbackBalloonView:(id)arg1;
- (void)setUserData:(id)arg1;
- (bool)shouldAnimate;
- (id)tapbackBalloonView;
- (id)userData;

@end
