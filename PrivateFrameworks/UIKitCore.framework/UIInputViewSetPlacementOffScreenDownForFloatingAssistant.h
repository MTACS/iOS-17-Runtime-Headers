
@interface UIInputViewSetPlacementOffScreenDownForFloatingAssistant : UIInputViewSetPlacementOffScreenDown

+ (id)placement;

- (Class)applicatorClassForKeyboard:(bool)arg1;
- (bool)isFloatingAssistantView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(bool)arg2;
- (bool)showsEditItems;

@end
