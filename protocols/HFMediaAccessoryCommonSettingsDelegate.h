
@protocol HFMediaAccessoryCommonSettingsDelegate <NSObject>

@required

- (void)mediaProfileContainer:(id <HFMediaProfileContainer>)arg1 didUpdateSettingKeypath:(NSString *)arg2 value:(id)arg3;

@end
