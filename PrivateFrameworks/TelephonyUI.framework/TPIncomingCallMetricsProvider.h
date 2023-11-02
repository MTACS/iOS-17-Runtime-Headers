
@interface TPIncomingCallMetricsProvider : NSObject

+ (void)addCallerNameView:(id)arg1 toContainerView:(id)arg2;
+ (void)addCallerNameView:(id)arg1 toViewController:(id)arg2;
+ (id)appropriateCallerNameViewForContact:(id)arg1 callStatus:(id)arg2 callIsActive:(bool)arg3;
+ (double)bottomBarBottomMarginForHomeButtonOffset:(double)arg1;
+ (void)constraintIncomingCallTextViewAdapterWrapper:(id)arg1 toView:(id)arg2;
+ (void)constraintIncomingCallTextViewForHorizontalLayout:(id)arg1 toView:(id)arg2;
+ (void)constraintIncomingCallTextViewForVerticalLayout:(id)arg1 toView:(id)arg2;
+ (double)homeButtonOffsetForSafeAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })horizontalNameLabelBoundingRectForName:(id)arg1 caption:(id)arg2 window:(id)arg3 preferredTitleFont:(id)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })horizontalNameLabelBoundingRectForName:(id)arg1 window:(id)arg2;
+ (id)mobileLabelFont;
+ (id)nameLabelFont;
+ (id)posterDisplayNameForContact:(id)arg1;
+ (double)sideMarginForDoubleButton;
+ (double)sixPercentOfDeviceHeight;
+ (double)twentyTwoPointFivePercentOfDeviceHeight;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })verticalNameHorizontalStatusLabelPositionTransform;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })verticalNameLabelBoundingRectForName:(id)arg1 caption:(id)arg2 window:(id)arg3 preferredTitleFont:(id)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })verticalNameLabelBoundingRectForName:(id)arg1 window:(id)arg2;
+ (double)verticalTextTopMargin;

@end
