
@interface IMSharedMessageSendingUtilities : NSObject {
    long long  _serviceAvailability;
}

@property long long serviceAvailability;

+ (void)_setupAccountMonitor;
+ (void)initialize;
+ (id)sharedInstance;

- (bool)_canSendText;
- (bool)_hasSMSCapability;
- (bool)_isiMessageSupported;
- (id)_managedConfigAppAllowlist;
- (long long)_maxMMSAttachmentCount;
- (long long)_maxMMSMessageByteCount;
- (void)_updateServiceAvailability;
- (bool)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
- (bool)canSendText;
- (bool)isMMSEnabled;
- (bool)isSupportedAttachmentUTI:(id)arg1;
- (bool)isiMessageEnabled;
- (long long)serviceAvailability;
- (void)setServiceAvailability:(long long)arg1;

@end
