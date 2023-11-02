
@interface CSVTUIAudioRecorderRemoteDeviceContext : NSObject {
    unsigned long long  _remoteTrainingDeviceType;
    NSArray * _remoteTrainingDeviceUUIDList;
}

@property (nonatomic, readonly) unsigned long long remoteTrainingDeviceType;
@property (nonatomic, readonly, copy) NSArray *remoteTrainingDeviceUUIDList;

- (void).cxx_destruct;
- (id)initWithRemoteTrainingDeviceType:(unsigned long long)arg1 remoteTrainingDeviceUUIDList:(id)arg2;
- (unsigned long long)remoteTrainingDeviceType;
- (id)remoteTrainingDeviceUUIDList;

@end
