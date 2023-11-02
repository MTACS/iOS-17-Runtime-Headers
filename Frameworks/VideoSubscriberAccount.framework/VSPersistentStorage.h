
@interface VSPersistentStorage : NSObject {
    VSAccountStore * _accountStore;
    VSAccountChannelsCenter * _channelsCenter;
    VSPrivacyFacade * _privacyFacade;
    VSPrivacyVoucherLockbox * _voucherLockbox;
}

@property (nonatomic, readonly) VSAccountStore *accountStore;
@property (nonatomic, readonly) VSAccountChannelsCenter *channelsCenter;
@property (nonatomic, readonly) VSPrivacyFacade *privacyFacade;
@property (nonatomic, readonly) VSPrivacyVoucherLockbox *voucherLockbox;

+ (id)defaultStorageDirectoryURL;

- (void).cxx_destruct;
- (id)accountStore;
- (id)channelsCenter;
- (id)init;
- (id)initWithAccountStore:(id)arg1;
- (id)initWithAccountStore:(id)arg1 channelsCenterClass:(Class)arg2;
- (id)privacyFacade;
- (id)voucherLockbox;

@end
