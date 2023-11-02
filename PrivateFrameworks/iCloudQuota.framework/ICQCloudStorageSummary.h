
@interface ICQCloudStorageSummary : NSObject <NSCopying, NSSecureCoding> {
    ICQBackupInfo * _backupInfo;
    NSNumber * _commerceStorage;
    NSString * _displayLabel;
    NSNumber * _freeStorage;
    ICQiCloudDetailsPageInfo * _iCloudDetailsPageInfo;
    NSString * _manageStorageActionButtonText;
    ICQManageStoragePageInfo * _manageStoragePage;
    NSString * _manageStorageTitle;
    NSURL * _manageStorageURL;
    NSArray * _mediaStorage;
    CERecommendationInfo * _recommendationInfo;
    ICQSubscriptionInfo * _subscriptionInfo;
    NSArray * _tips;
    NSNumber * _totalStorage;
    NSNumber * _usedStorage;
}

@property (nonatomic, retain) ICQBackupInfo *backupInfo;
@property (nonatomic, retain) NSNumber *commerceStorage;
@property (nonatomic, copy) NSString *displayLabel;
@property (nonatomic, retain) NSNumber *freeStorage;
@property (nonatomic, retain) ICQiCloudDetailsPageInfo *iCloudDetailsPageInfo;
@property (nonatomic, copy) NSString *manageStorageActionButtonText;
@property (nonatomic, retain) ICQManageStoragePageInfo *manageStoragePage;
@property (nonatomic, copy) NSString *manageStorageTitle;
@property (nonatomic, retain) NSURL *manageStorageURL;
@property (nonatomic, retain) NSArray *mediaStorage;
@property (nonatomic, retain) CERecommendationInfo *recommendationInfo;
@property (nonatomic, readonly) bool shouldUseNativeManageStorage;
@property (nonatomic, retain) ICQSubscriptionInfo *subscriptionInfo;
@property (nonatomic, retain) NSArray *tips;
@property (nonatomic, retain) NSNumber *totalStorage;
@property (nonatomic, retain) NSNumber *usedStorage;

// Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backupInfo;
- (id)commerceStorage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayLabel;
- (void)encodeWithCoder:(id)arg1;
- (id)freeStorage;
- (id)iCloudDetailsPageInfo;
- (id)initWithCoder:(id)arg1;
- (id)manageStorageActionButtonText;
- (id)manageStoragePage;
- (id)manageStorageTitle;
- (id)manageStorageURL;
- (id)mediaStorage;
- (id)recommendationInfo;
- (void)setBackupInfo:(id)arg1;
- (void)setCommerceStorage:(id)arg1;
- (void)setDisplayLabel:(id)arg1;
- (void)setFreeStorage:(id)arg1;
- (void)setICloudDetailsPageInfo:(id)arg1;
- (void)setManageStorageActionButtonText:(id)arg1;
- (void)setManageStoragePage:(id)arg1;
- (void)setManageStorageTitle:(id)arg1;
- (void)setManageStorageURL:(id)arg1;
- (void)setMediaStorage:(id)arg1;
- (void)setRecommendationInfo:(id)arg1;
- (void)setSubscriptionInfo:(id)arg1;
- (void)setTips:(id)arg1;
- (void)setTotalStorage:(id)arg1;
- (void)setUsedStorage:(id)arg1;
- (bool)shouldUseNativeManageStorage;
- (id)subscriptionInfo;
- (id)tips;
- (id)totalStorage;
- (id)usedStorage;

// Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI

- (id)icqui_AAUIiCloudMediaUsageInfo;

@end
