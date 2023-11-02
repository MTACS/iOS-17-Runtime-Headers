
@interface CKMessageAcknowledgmentPickerBarViewController : UIViewController <CKMessageAcknowledgmentPickerBarItemViewDelegate> {
    BOOL  _balloonAnchorVerticalOrientation;
    CKMessagePartChatItem * _chatItem;
    <CKMessageAcknowledgmentPickerBarDelegate> * _delegate;
    BOOL  _forcedOrientation;
    bool  _useForcedOrientation;
}

@property (nonatomic) BOOL balloonAnchorVerticalOrientation;
@property (nonatomic, retain) CKMessagePartChatItem *chatItem;
@property (nonatomic) <CKMessageAcknowledgmentPickerBarDelegate> *delegate;
@property (nonatomic) BOOL forcedOrientation;
@property (nonatomic) bool useForcedOrientation;

- (void).cxx_destruct;
- (void)adjustTailRelativeSiblingViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)adjustTailRelativeSiblingViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pickerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (BOOL)balloonAnchorVerticalOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateFrameRelativeToSiblingViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withinBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)chatItem;
- (id)delegate;
- (BOOL)forcedOrientation;
- (id)initWithChatItem:(id)arg1;
- (bool)isAnchoredToTop;
- (void)loadView;
- (void)performCancelAnimation:(id /* block */)arg1;
- (void)performSendAnimation:(id /* block */)arg1;
- (void)performShowAnimation:(id /* block */)arg1;
- (void)pickerBarItemViewSelectionDidChange:(id)arg1;
- (id)pickerView;
- (void)setBalloonAnchorVerticalOrientation:(BOOL)arg1;
- (void)setChatItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForcedOrientation:(BOOL)arg1;
- (void)setUseForcedOrientation:(bool)arg1;
- (bool)useForcedOrientation;

@end
