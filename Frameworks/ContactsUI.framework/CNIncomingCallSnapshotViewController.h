
@interface CNIncomingCallSnapshotViewController : UIViewController {
    NSString * _nameString;
    TPInComingCallUISnapshotViewController * _snapshotViewController;
}

@property (nonatomic, retain) NSString *nameString;
@property (nonatomic, retain) TPInComingCallUISnapshotViewController *snapshotViewController;

+ (id)fallbackTextForContact:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })horizontalNameLabelBoundingRectForName:(id)arg1 window:(id)arg2;
+ (void)incomingCallPlaceholderSnapshotForContact:(id)arg1 windowScene:(id)arg2 completionBlock:(id /* block */)arg3;
+ (void)incomingCallSnapshotForConfiguration:(id)arg1 contact:(id)arg2 includingCallButtons:(bool)arg3 windowScene:(id)arg4 completionBlock:(id /* block */)arg5;
+ (void)incomingCallSnapshotForConfiguration:(id)arg1 style:(long long)arg2 contact:(id)arg3 fallbackText:(id)arg4 windowScene:(id)arg5 completionBlock:(id /* block */)arg6;
+ (void)incomingCallSnapshotForConfiguration:(id)arg1 titleText:(id)arg2 includingCallButtons:(bool)arg3 windowScene:(id)arg4 completionBlock:(id /* block */)arg5;
+ (void)incomingCallSnapshotForPosterArchiveData:(id)arg1 contact:(id)arg2 includingCallButtons:(bool)arg3 windowScene:(id)arg4 completionBlock:(id /* block */)arg5;
+ (id)posterDisplayNameComponentsForContact:(id)arg1;
+ (long long)styleIncludingCallButtons:(bool)arg1 canShowPoster:(bool)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })verticalNameLabelBoundingRectForName:(id)arg1 window:(id)arg2;

- (void).cxx_destruct;
- (id)nameString;
- (void)setNameString:(id)arg1;
- (void)setSnapshotViewController:(id)arg1;
- (id)snapshotViewController;

@end
