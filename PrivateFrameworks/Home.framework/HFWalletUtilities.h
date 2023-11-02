
@interface HFWalletUtilities : NSObject

+ (id)handleAddOrShowHomeKeyButtonTapForHome:(id)arg1;
+ (bool)isWalletKeyDeviceStateCompatible:(id)arg1;
+ (id)packageIconIdentifierForHome:(id)arg1 shouldUseKeyholeAsset:(bool)arg2;
+ (unsigned long long)pkPassHomeKeyLiveRenderTypeForHMHomeWalletKeyColor:(long long)arg1;
+ (id)walletAppFromAppStoreURL;
+ (id)walletAppURL;
+ (id)walletKeyColorOfDeviceState:(id)arg1;
+ (id)walletKeyIconDescriptorForHome:(id)arg1 shouldUseKeyholeAsset:(bool)arg2 foriPhoneDevice:(bool)arg3;

@end
