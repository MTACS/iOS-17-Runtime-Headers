
@protocol BWFigVideoCaptureDeviceCenterStageDelegate <NSObject>

@required

- (void)didChangeCenterStageFramingMode:(int)arg1;
- (void)didChangeCenterStageRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)restrictCenterStageFieldOfViewToWide:(bool)arg1;

@end
