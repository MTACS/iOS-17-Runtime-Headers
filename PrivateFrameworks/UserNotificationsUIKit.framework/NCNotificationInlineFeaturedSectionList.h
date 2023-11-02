
@interface NCNotificationInlineFeaturedSectionList : NCNotificationStructuredSectionList {
    NSArray * _featuredNotificationContentProviders;
    NSMutableDictionary * _richContentProviders;
}

@property (nonatomic, retain) NSArray *featuredNotificationContentProviders;

- (void).cxx_destruct;
- (void)_configureSectionListView:(id)arg1;
- (bool)_shouldHideNotificationGroupList:(id)arg1;
- (bool)_shouldHideNotificationRequest:(id)arg1;
- (id)featuredNotificationContentProviders;
- (id)footerViewForNotificationList:(id)arg1;
- (double)footerViewHeightForNotificationList:(id)arg1 withWidth:(double)arg2;
- (id)headerViewForNotificationList:(id)arg1;
- (double)headerViewHeightForNotificationList:(id)arg1 withWidth:(double)arg2;
- (bool)isRichNotificationContentViewForNotificationGroupList:(id)arg1;
- (id)notificationGroupList:(id)arg1 requestsContentProviderForNotificationRequest:(id)arg2;
- (void)notificationListComponent:(id)arg1 requestsExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(bool)arg4 withParameters:(id)arg5 completion:(id /* block */)arg6;
- (void)setFeaturedNotificationContentProviders:(id)arg1;
- (bool)shouldNotificationGroupListPanHorizontally:(id)arg1;
- (void)updateContent;

@end
