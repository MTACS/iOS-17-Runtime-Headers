
@protocol AMSPushHandlerDelegate <NSObject>

@optional

- (void)pushPayload:(AMSPushPayload *)arg1 withBadgeRequest:(AMSBadgeRequest *)arg2;
- (bool)pushPaylod:(AMSPushPayload *)arg1 shouldUpdateBadgeForBundleIdentifier:(NSString *)arg2 badgeIdentifier:(NSString *)arg3 enabled:(bool)arg4;

@end
