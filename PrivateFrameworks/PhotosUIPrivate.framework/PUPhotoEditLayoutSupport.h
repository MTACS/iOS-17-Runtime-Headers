
@interface PUPhotoEditLayoutSupport : NSObject

+ (id)constraintsForNotchAreaButtonsLeading:(id)arg1 trailing:(id)arg2 inWindow:(id)arg3;
+ (void)currentDeviceButtonSize:(struct CGSize { double x1; double x2; }*)arg1 offset:(struct UIOffset { double x1; double x2; }*)arg2 zoomedSize:(struct CGSize { double x1; double x2; }*)arg3 zoomedOffset:(struct UIOffset { double x1; double x2; }*)arg4 normalScreenWidth:(double*)arg5;
+ (bool)doneCancelButtonsInNotchAreaForLayoutOrientation:(long long)arg1 viewWidth:(double)arg2;
+ (void)getTopLeadingButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 topTrailingButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inRTL:(bool)arg4;
+ (bool)isNotchedPhone;
+ (bool)isPhoneClassDevice;
+ (id)layoutConstraintsForHidingSecondaryView:(id)arg1 layoutOrientation:(long long)arg2;
+ (id)layoutConstraintsForHidingView:(id)arg1 layoutOrientation:(long long)arg2;
+ (int)productType;
+ (double)topToolbarVerticalOffsetForLayoutOrientation:(long long)arg1 view:(id)arg2;
+ (void)transitionFromBarView:(id)arg1 orientation:(long long)arg2 toBarView:(id)arg3 orientation:(long long)arg4 coordinator:(id)arg5 completionHandler:(id /* block */)arg6;

@end
