
@interface AVPlayerItemAVKitData : NSObject <NSCopying> {
    NSMutableDictionary * _customPropertyStorage;
    long long  _interstitialPolicyEnforcement;
}

@property (nonatomic, readonly) NSMutableDictionary *customPropertyStorage;
@property (nonatomic) long long interstitialPolicyEnforcement;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customPropertyStorage;
- (id)init;
- (long long)interstitialPolicyEnforcement;
- (void)setInterstitialPolicyEnforcement:(long long)arg1;

@end
