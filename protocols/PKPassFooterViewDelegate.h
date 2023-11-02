
@protocol PKPassFooterViewDelegate <NSObject>

@required

- (bool)isPassFooterViewInGroup:(PKPassFooterView *)arg1;
- (void)passFooterViewDidChangeCoachingState:(PKPassFooterView *)arg1;
- (void)passFooterViewDidChangePhysicalButtonRequirement:(PKPassFooterView *)arg1;
- (unsigned long long)suppressedContentForPassFooter:(PKPassFooterView *)arg1;

@optional

- (void)passFooterViewDidChangePileSuppressionRequirement:(PKPassFooterView *)arg1;
- (void)passFooterViewDidEndAuthorization:(PKPassFooterView *)arg1;
- (void)passFooterViewDidSucceedAtAuthorization:(PKPassFooterView *)arg1;

@end
