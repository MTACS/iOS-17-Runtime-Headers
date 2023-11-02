
@interface _ASAccountManagerTipContent : NSObject {
    NSString * _buttonTitle;
    NSString * _declineButtonTitle;
    bool  _hasBorderedImage;
    UIImage * _image;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *buttonTitle;
@property (nonatomic, readonly, copy) NSString *declineButtonTitle;
@property (nonatomic, readonly) bool hasBorderedImage;
@property (nonatomic, readonly, copy) UIImage *image;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)_contentForFamilyTip;
+ (id)_contentForGeneralTip;
+ (id)_contentForiCloudKeychainTip;
+ (id)_familySharingTipButtonTitle;
+ (id)_familySharingTipDeclineButtonTitle;
+ (bool)_familySharingTipHasBorderedImage;
+ (id)_familySharingTipSubtitle;
+ (id)_familySharingTipTitle;
+ (id)_generalSharingTipButtonTitle;
+ (id)_generalSharingTipDeclineButtonTitle;
+ (bool)_generalSharingTipHasBorderedImage;
+ (id)_generalSharingTipSubtitle;
+ (id)_generalSharingTipTitle;
+ (id)_iCloudKeychainTipButtonTitle;
+ (id)_iCloudKeychainTipDeclineButtonTitle;
+ (bool)_iCloudKeychainTipHasBorderedImage;
+ (id)_iCloudKeychainTipImage;
+ (id)_iCloudKeychainTipSubtitle;
+ (id)_iCloudKeychainTipTitle;
+ (id)_imageForSharingTips;
+ (id)contentForTipType:(long long)arg1;

- (void).cxx_destruct;
- (id)_initWithImage:(id)arg1 hasBorderedImage:(bool)arg2 title:(id)arg3 subtitle:(id)arg4 buttonTitle:(id)arg5 declineButtonTitle:(id)arg6;
- (id)buttonTitle;
- (id)declineButtonTitle;
- (bool)hasBorderedImage;
- (id)image;
- (id)subtitle;
- (id)title;

@end
