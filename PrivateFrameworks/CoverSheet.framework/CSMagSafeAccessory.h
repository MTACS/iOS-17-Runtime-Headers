
@interface CSMagSafeAccessory : NSObject {
    double  _attachAnimationDelay;
    bool  _blocksWallet;
    NSString * _endpointUUID;
    bool  _isSupported;
    UIColor * _primaryColor;
    UIColor * _secondaryColor;
    long long  _type;
}

@property (nonatomic, readonly) double attachAnimationDelay;
@property (nonatomic) bool blocksWallet;
@property (nonatomic, readonly) bool chimeOnDetach;
@property (nonatomic, retain) NSString *endpointUUID;
@property (nonatomic, readonly) bool hasStaticView;
@property (nonatomic) bool isSupported;
@property (nonatomic, retain) UIColor *primaryColor;
@property (nonatomic, retain) UIColor *secondaryColor;
@property (nonatomic, readonly) bool shouldDelayAnimation;
@property (nonatomic, readonly) bool shouldLockScreenWhenAttached;
@property (nonatomic, readonly) bool shouldShowAnimation;
@property (nonatomic) long long type;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleScreenCoordinates;
@property (getter=isWindowed, nonatomic, readonly) bool windowed;

+ (id)accessoryWithType:(long long)arg1 primaryColor:(id)arg2 secondoryColor:(id)arg3;

- (void).cxx_destruct;
- (long long)_accessoryTypeForNFCtype:(unsigned char)arg1;
- (unsigned char)_accessoryTypeFromDictionary:(id)arg1;
- (bool)_blocksWalletAnimationForNFCtype:(unsigned char)arg1;
- (double)_delayFromDictionary:(id)arg1;
- (bool)_isSupportedFromDictionary:(id)arg1;
- (id)accessoryTypeString;
- (double)attachAnimationDelay;
- (bool)blocksAttachAnimationForAccessoryType:(long long)arg1;
- (bool)blocksWallet;
- (bool)chimeOnDetach;
- (id)colorForP3ColorData:(id)arg1;
- (id)description;
- (id)endpointUUID;
- (bool)hasStaticView;
- (id)initWithDictionary:(id)arg1 endpointUUID:(id)arg2;
- (bool)isSupported;
- (bool)isWindowed;
- (id)primaryColor;
- (id)secondaryColor;
- (void)setBlocksWallet:(bool)arg1;
- (void)setEndpointUUID:(id)arg1;
- (void)setIsSupported:(bool)arg1;
- (void)setPrimaryColor:(id)arg1;
- (void)setSecondaryColor:(id)arg1;
- (void)setType:(long long)arg1;
- (bool)shouldDelayAnimation;
- (bool)shouldLockScreenWhenAttached;
- (bool)shouldShowAnimation;
- (long long)type;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleScreenCoordinates;

@end
