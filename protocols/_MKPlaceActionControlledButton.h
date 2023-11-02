
@protocol _MKPlaceActionControlledButton <NSObject>

@required

- (_MKPlaceActionButtonController *)buttonController;
- (void)placeActionButtonControllerTextDidChange:(_MKPlaceActionButtonController *)arg1;
- (void)setButtonController:(_MKPlaceActionButtonController *)arg1;
- (void)setPrimaryTitle:(NSAttributedString *)arg1;
- (void)setPrimaryTitle:(NSString *)arg1 subtitle:(NSString *)arg2;

@end
