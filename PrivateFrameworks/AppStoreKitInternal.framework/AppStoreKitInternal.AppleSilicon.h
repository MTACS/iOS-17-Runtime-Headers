
@interface AppStoreKitInternal.AppleSilicon : NSObject <_TtP19AppStoreKitInternalP33_F0F5E0F82971E7EAFD6A505989D796F919AppleSiliconExports_> {
    void isRosettaAvailableBox;
    void isSupportEnabled;
    void rosettaAvailabilityConditionLock;
}

@property (nonatomic, readonly) bool isRosettaAvailable;
@property (nonatomic) bool isSupportEnabled;

- (void).cxx_destruct;
- (id)init;
- (bool)isRosettaAvailable;
- (bool)isSupportEnabled;
- (void)setIsSupportEnabled:(bool)arg1;

@end
