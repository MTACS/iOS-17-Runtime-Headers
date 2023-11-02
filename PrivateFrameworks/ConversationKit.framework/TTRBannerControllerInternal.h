
@interface TTRBannerControllerInternal : NSObject <TTRBannerControllerProtocol> {
    void TTRBannerViewController;
    void delegate;
}

@property (nonatomic) <TTRBannerControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)buildTTRMessageBubbleRecipientsListWithGroupMessageUUID:(id)arg1 with:(id)arg2;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)showTTRBanner;

@end
