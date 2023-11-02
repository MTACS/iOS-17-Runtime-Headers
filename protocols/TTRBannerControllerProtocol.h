
@protocol TTRBannerControllerProtocol <NSObject>

@required

- (void)buildTTRMessageBubbleRecipientsListWithGroupMessageUUID:(NSString *)arg1 with:(NSSet *)arg2;
- (<TTRBannerControllerDelegate> *)delegate;
- (void)setDelegate:(id <TTRBannerControllerDelegate>)arg1;
- (void)showTTRBanner;

@end
