
@interface MUPlaceHeaderSectionControllerConfiguration : NSObject {
    bool  _alwaysShowExpandedVerifiedBusinessHeader;
    bool  _drawDynamicPlacecardDebugBackground;
    bool  _shouldInsetRoundCoverPhoto;
    bool  _showShareButton;
    bool  _suppressContainmentPunchout;
}

@property (nonatomic) bool alwaysShowExpandedVerifiedBusinessHeader;
@property (nonatomic) bool drawDynamicPlacecardDebugBackground;
@property (nonatomic) bool shouldInsetRoundCoverPhoto;
@property (nonatomic) bool showShareButton;
@property (nonatomic) bool suppressContainmentPunchout;

- (bool)alwaysShowExpandedVerifiedBusinessHeader;
- (bool)drawDynamicPlacecardDebugBackground;
- (void)setAlwaysShowExpandedVerifiedBusinessHeader:(bool)arg1;
- (void)setDrawDynamicPlacecardDebugBackground:(bool)arg1;
- (void)setShouldInsetRoundCoverPhoto:(bool)arg1;
- (void)setShowShareButton:(bool)arg1;
- (void)setSuppressContainmentPunchout:(bool)arg1;
- (bool)shouldInsetRoundCoverPhoto;
- (bool)showShareButton;
- (bool)suppressContainmentPunchout;

@end
