
@interface VUIActionBundleOffer : VUIAction {
    bool  _isMultiOfferDynamicVC;
    NSString * _notificationBody;
    NSString * _notificationBundleTitle;
    NSString * _notificationTitle;
    NSString * _offerDomain;
    NSDictionary * _offerMetrics;
    NSString * _offerURLString;
    NSString * _secondaryOfferNotificationBody;
    NSString * _secondaryOfferNotificationTitle;
}

@property (nonatomic) bool isMultiOfferDynamicVC;
@property (nonatomic, retain) NSString *notificationBody;
@property (nonatomic, retain) NSString *notificationBundleTitle;
@property (nonatomic, retain) NSString *notificationTitle;
@property (nonatomic, retain) NSString *offerDomain;
@property (nonatomic, retain) NSDictionary *offerMetrics;
@property (nonatomic, retain) NSString *offerURLString;
@property (nonatomic, retain) NSString *secondaryOfferNotificationBody;
@property (nonatomic, retain) NSString *secondaryOfferNotificationTitle;

- (void).cxx_destruct;
- (id)initWithContextData:(id)arg1;
- (bool)isAccountRequired;
- (bool)isMultiOfferDynamicVC;
- (id)notificationBody;
- (id)notificationBundleTitle;
- (id)notificationTitle;
- (id)offerDomain;
- (id)offerMetrics;
- (id)offerURLString;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)secondaryOfferNotificationBody;
- (id)secondaryOfferNotificationTitle;
- (void)setIsMultiOfferDynamicVC:(bool)arg1;
- (void)setNotificationBody:(id)arg1;
- (void)setNotificationBundleTitle:(id)arg1;
- (void)setNotificationTitle:(id)arg1;
- (void)setOfferDomain:(id)arg1;
- (void)setOfferMetrics:(id)arg1;
- (void)setOfferURLString:(id)arg1;
- (void)setSecondaryOfferNotificationBody:(id)arg1;
- (void)setSecondaryOfferNotificationTitle:(id)arg1;

@end
