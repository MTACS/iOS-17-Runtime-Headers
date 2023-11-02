
@interface HMDRemoteKeyedArchiver : HMFObject {
    NSKeyedArchiver * _archiver;
    NSString * _transportType;
}

@property (nonatomic, retain) NSKeyedArchiver *archiver;
@property (readonly, copy) NSData *encodedData;
@property (nonatomic, retain) NSString *transportType;

- (void).cxx_destruct;
- (id)archiver;
- (void)dealloc;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)encodedData;
- (void)finishEncoding;
- (id)initForWritingWithRemoteDeviceIsOnSameAccount:(bool)arg1 remoteGateway:(bool)arg2 remoteUserIsAdministrator:(bool)arg3 user:(id)arg4 dataVersion:(long long)arg5 supportedFeatures:(id)arg6;
- (id)initForWritingWithRemoteDeviceIsOnSameAccount:(bool)arg1 remoteGateway:(bool)arg2 remoteUserIsAdministrator:(bool)arg3 user:(id)arg4 supportedFeatures:(id)arg5;
- (void)setArchiver:(id)arg1;
- (void)setClassName:(id)arg1 forClass:(Class)arg2;
- (void)setTransportType:(id)arg1;
- (id)transportType;

@end
