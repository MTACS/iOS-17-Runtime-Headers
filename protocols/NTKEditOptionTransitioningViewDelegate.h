
@protocol NTKEditOptionTransitioningViewDelegate <NSObject>

@required

- (UIImage *)imageForEditOption:(NTKEditOption *)arg1;
- (bool)shouldFadeIncomingView;

@end
