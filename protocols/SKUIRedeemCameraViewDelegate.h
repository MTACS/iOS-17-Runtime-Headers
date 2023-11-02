
@protocol SKUIRedeemCameraViewDelegate <NSObject>

@required

- (void)SKUIRedeemCameraView:(UIView *)arg1 textFieldDidChange:(NSString *)arg2;
- (void)SKUIRedeemCameraView:(UIView *)arg1 textFieldDidRedeem:(NSString *)arg2;
- (void)cancelRedeemerViewForSKUIRedeemCameraView:(UIView *)arg1;
- (void)presentFullScreenCameraViewForSKUIRedeemCameraView:(UIView *)arg1;
- (UIView *)redeemerViewForSKUIRedeemCameraView:(UIView *)arg1;
- (void)startRedeemerViewForSKUIRedeemCameraView:(UIView *)arg1;

@optional

- (void)showITunesPassLearnMoreForSKUIRedeemCameraView:(UIView *)arg1;

@end
