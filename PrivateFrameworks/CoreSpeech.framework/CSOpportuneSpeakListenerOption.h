
@interface CSOpportuneSpeakListenerOption : NSObject {
    NSString * _deviceId;
    unsigned long long  _opportuneSpeakListeningType;
}

@property (nonatomic, retain) NSString *deviceId;
@property (nonatomic) unsigned long long opportuneSpeakListeningType;

- (void).cxx_destruct;
- (id)deviceId;
- (unsigned long long)opportuneSpeakListeningType;
- (void)setDeviceId:(id)arg1;
- (void)setOpportuneSpeakListeningType:(unsigned long long)arg1;

@end
