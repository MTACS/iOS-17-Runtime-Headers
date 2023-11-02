
@interface DTActivityTraceTapServiceDelegate : NSObject <DTTapServiceDelegate> {
    DTTapServiceMessageSender * _messageSender;
}

+ (void)registerCapabilities:(id)arg1;

- (void).cxx_destruct;
- (id)createConfigWithPlist:(id)arg1;
- (void)didStop;
- (id)initWithMessageSender:(id)arg1;
- (bool)requiresExpiredPIDCacheForConfig:(id)arg1;
- (bool)validateConfig:(id)arg1;
- (id)willStartWithConfig:(id)arg1;

@end
