
@interface _UIActionSheetPresentationControllerVisualStyleiOS : NSObject <UIActionSheetPresentationControllerVisualStyle> {
    UIActionSheetiOSDismissActionView * _dismissActionView;
}

@property (readonly) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) UIColor *dimmingViewColor;
@property (nonatomic, retain) UIActionSheetiOSDismissActionView *dismissActionView;
@property (readonly) double dismissToContentSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsForContainerView:(id)arg1;
- (double)cornerRadius;
- (id)dimmingViewColor;
- (id)dismissActionView;
- (double)dismissToContentSpacing;
- (id)init;
- (void)setDismissActionView:(id)arg1;

@end
