
@protocol NTKCFaceDetailOtherSectionDelegate <NSObject>

@required

- (void)otherSection:(NTKCFaceDetailOtherSectionController *)arg1 didChangeShowSeconds:(NTKDigitalTimeAccuracyOption *)arg2 forMode:(long long)arg3;
- (void)otherSection:(NTKCFaceDetailOtherSectionController *)arg1 didToggleMonogram:(NTKComplication *)arg2 forSlot:(NSString *)arg3;
- (void)otherSectionDidSelectMonogramEdit:(NTKCFaceDetailOtherSectionController *)arg1;

@end
