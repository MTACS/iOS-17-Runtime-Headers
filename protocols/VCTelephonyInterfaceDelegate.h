
@protocol VCTelephonyInterfaceDelegate <NSObject>

@optional

- (void)telephonyInterface:(VCTelephonyInterface *)arg1 anbrActivationUpdate:(bool)arg2;
- (void)telephonyInterface:(VCTelephonyInterface *)arg1 anbrRecommendation:(unsigned int)arg2 forDirection:(long long)arg3;
- (void)telephonyInterface:(VCTelephonyInterface *)arg1 vocoderInfoChangedToType:(NSString *)arg2 sampleRate:(NSNumber *)arg3;

@end
