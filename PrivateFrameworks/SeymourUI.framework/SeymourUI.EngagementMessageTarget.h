
@interface SeymourUI.EngagementMessageTarget : NSObject <IAMMessageTarget> {
    void identifier;
    void onBannerRemoval;
    void onBannerUpdate;
}

@property (nonatomic, readonly) bool shouldBeNotifiedOfNilPriorityMessageAfterRegistration;
@property (nonatomic, readonly) NSString *targetIdentifier;

- (void).cxx_destruct;
- (id)init;
- (void)messageCoordinator:(id)arg1 didUpdatePriorityMessage:(id)arg2 forTarget:(id)arg3;
- (bool)shouldBeNotifiedOfNilPriorityMessageAfterRegistration;
- (id)targetIdentifier;

@end
