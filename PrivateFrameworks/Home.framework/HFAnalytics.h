
@interface HFAnalytics : NSObject

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (void)_sendEvent:(id)arg1;
+ (Class)eventClassForEventType:(unsigned long long)arg1;
+ (id)eventNameForEventType:(unsigned long long)arg1;
+ (void)sendEvent:(unsigned long long)arg1;
+ (void)sendEvent:(unsigned long long)arg1 withData:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)_overrideBannerItemClassName:(id)arg1 withOverrideClassName:(id)arg2;
+ (void)logAndSendTileInteractionEventOfType:(unsigned long long)arg1 withPresentationContext:(id)arg2 presentationCoordinator:(id)arg3;
+ (void)sendBannerInteractionforItem:(id)arg1 tappedBannerItemOverrideClassName:(id)arg2 hiddenBannerEvents:(id)arg3;
+ (void)sendGeneralButtonTapEventWithButtonTitle:(id)arg1 sourceViewController:(id)arg2;
+ (void)sendSwitchCellToggleEventForItem:(id)arg1 isOn:(bool)arg2 title:(id)arg3 fromSourceViewController:(id)arg4;

@end
