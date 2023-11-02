
@protocol SUUIRedeemCameraViewDelegate <NSObject>

@required

- (void)SUUIRedeemCameraView:(UIView *)arg1 textFieldDidChange:(NSString *)arg2;
- (void)SUUIRedeemCameraView:(UIView *)arg1 textFieldDidRedeem:(NSString *)arg2;
- (void)cancelRedeemerViewForSUUIRedeemCameraView:(UIView *)arg1;
- (void)presentFullScreenCameraViewForSUUIRedeemCameraView:(UIView *)arg1;
- (UIView *)redeemerViewForSUUIRedeemCameraView:(UIView *)arg1;
- (void)startRedeemerViewForSUUIRedeemCameraView:(UIView *)arg1;

@optional

- (void)showITunesPassLearnMoreForSUUIRedeemCameraView:(UIView *)arg1;

@end
