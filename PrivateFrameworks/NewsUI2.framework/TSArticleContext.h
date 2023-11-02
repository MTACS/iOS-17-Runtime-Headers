
@interface TSArticleContext : NSObject {
    void adPreviewID;
    void adPreviewSessionID;
    void adQToken;
    void maximumAdRequestsForCurrentAdPreviewID;
    void notificationID;
    void notificationSenderChannelID;
    void presentationReason;
    void previousArticleID;
    void previousArticleVersion;
    void referral;
    void shouldAutoPlayVideo;
    void sourceApplication;
    void title;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  userActionDate;
}

@property (nonatomic, readonly) NSString *adPreviewID;
@property (nonatomic, readonly) NSString *adPreviewSessionID;
@property (nonatomic, readonly) NSString *adQToken;
@property (nonatomic, readonly) long long maximumAdRequestsForCurrentAdPreviewID;
@property (nonatomic, readonly) NSString *notificationID;
@property (nonatomic, readonly) NSString *notificationSenderChannelID;
@property (nonatomic, readonly) long long presentationReason;
@property (nonatomic, readonly) NSString *previousArticleID;
@property (nonatomic, readonly) NSString *previousArticleVersion;
@property (nonatomic, retain) TSAnalyticsReferral *referral;
@property (nonatomic, readonly) bool shouldAutoPlayVideo;
@property (nonatomic, readonly) NSString *sourceApplication;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSDate *userActionDate;

- (void).cxx_destruct;
- (id)adPreviewID;
- (id)adPreviewSessionID;
- (id)adQToken;
- (id)init;
- (id)initWithUrl:(id)arg1 title:(id)arg2 sourceApplication:(id)arg3 previousArticleID:(id)arg4 previousArticleVersion:(id)arg5 adPreviewSessionID:(id)arg6 adPreviewID:(id)arg7 adQToken:(id)arg8 maximumAdRequestsForCurrentAdPreviewID:(long long)arg9 userActionDate:(id)arg10 presentationReason:(long long)arg11 notificationID:(id)arg12 notificationSenderChannelID:(id)arg13 referral:(id)arg14 shouldAutoPlayVideo:(bool)arg15;
- (long long)maximumAdRequestsForCurrentAdPreviewID;
- (id)notificationID;
- (id)notificationSenderChannelID;
- (long long)presentationReason;
- (id)previousArticleID;
- (id)previousArticleVersion;
- (id)referral;
- (void)setReferral:(id)arg1;
- (bool)shouldAutoPlayVideo;
- (id)sourceApplication;
- (id)title;
- (id)url;
- (id)userActionDate;

@end
