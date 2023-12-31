
@interface VCAudioSessionClient : NSObject <NSCopying> {
    unsigned char  _clientType;
    VCAudioSessionMediaProperties * _mediaProperties;
    <VCAudioSessionDelegate> * _notificationClient;
}

@property (nonatomic) unsigned char clientType;
@property (nonatomic, retain) VCAudioSessionMediaProperties *mediaProperties;
@property (nonatomic) <VCAudioSessionDelegate> *notificationClient;

- (unsigned char)clientType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)mediaProperties;
- (id)notificationClient;
- (void)setClientType:(unsigned char)arg1;
- (void)setMediaProperties:(id)arg1;
- (void)setNotificationClient:(id)arg1;

@end
