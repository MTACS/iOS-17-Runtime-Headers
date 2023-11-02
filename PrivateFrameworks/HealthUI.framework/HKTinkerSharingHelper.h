
@interface HKTinkerSharingHelper : NSObject {
    struct __CTServerConnection { } * _ctServerConnection;
}

@property (nonatomic, readonly) bool isChinaSKUDevice;
@property (nonatomic) bool networkAccessEnabledForHealth;

- (id)init;
- (bool)isChinaSKUDevice;
- (bool)networkAccessEnabledForHealth;
- (void)setNetworkAccessEnabledForHealth:(bool)arg1;

@end
