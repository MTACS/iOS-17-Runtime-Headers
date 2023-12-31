
@interface CKMessageAcknowledgmentPickerBarView : UIView <CKPickerBarView> {
    NSArray * _acknowledgmentViews;
    CALayer * _anchorBubble;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorBubblePosition;
    BOOL  _anchorVerticalOrientation;
    BOOL  _balloonOrientation;
    NSDictionary * _groupAcknowledgmentCounts;
    CALayer * _intermediateBubble;
    UIView * _pillBubble;
    long long  _selectedAcknowledgment;
}

@property (nonatomic, copy) NSArray *acknowledgmentViews;
@property (nonatomic) struct CGPoint { double x1; double x2; } anchorBubblePosition;
@property (nonatomic) BOOL anchorVerticalOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_ackViewsBoundsWidth;
- (bool)_hasGroupCounts;
- (id)acknowledgmentViews;
- (struct CGPoint { double x1; double x2; })anchorBubblePosition;
- (BOOL)anchorVerticalOrientation;
- (id)initWithGroupCounts:(id)arg1 selectedType:(long long)arg2 orientation:(BOOL)arg3 serviceName:(id)arg4;
- (void)layoutSubviews;
- (void)performCancelAnimation:(id /* block */)arg1;
- (void)performSelectedAnimation:(id /* block */)arg1;
- (void)performSendAnimation:(id /* block */)arg1;
- (void)performShowAnimation:(id /* block */)arg1;
- (void)setAcknowledgmentViews:(id)arg1;
- (void)setAnchorBubblePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAnchorVerticalOrientation:(BOOL)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateDynamicColorsForBubbleLayers;

@end
