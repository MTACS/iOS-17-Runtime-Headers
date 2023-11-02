
@interface IMWritePushNotificationSettingsService : IMPushNotificationSettingsService {
    NSData * _data;
}

@property (nonatomic, retain) NSData *data;

- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)arg1;
- (void)setData:(id)arg1;
- (id)urlRequest;

@end
