
@interface BMStreamSyncPlatformPolicy : NSObject {
    unsigned long long  _direction;
    long long  _platform;
    unsigned long long  _transportType;
}

@property (nonatomic, readonly) unsigned long long direction;
@property (nonatomic, readonly) long long platform;
@property (nonatomic, readonly) unsigned long long transportType;

- (unsigned long long)direction;
- (id)initWithPlatform:(long long)arg1 transportType:(unsigned long long)arg2 direction:(unsigned long long)arg3;
- (id)initWithTransportType:(unsigned long long)arg1 direction:(unsigned long long)arg2;
- (long long)platform;
- (unsigned long long)transportType;

@end
