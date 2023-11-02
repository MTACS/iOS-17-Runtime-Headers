
@interface CSSiriAudioRoute : NSObject {
    NSString * _destination;
    NSString * _deviceName;
    bool  _isBluetooth;
    NSString * _source;
    NSString * _uid;
}

@property (nonatomic, readonly, copy) NSString *destination;
@property (nonatomic, readonly, copy) NSString *deviceName;
@property (nonatomic, readonly) bool isBluetooth;
@property (nonatomic, readonly, copy) NSString *source;
@property (nonatomic, readonly, copy) NSString *uid;

- (void).cxx_destruct;
- (id)destination;
- (id)deviceName;
- (id)initWithAudioDeviceID:(unsigned int)arg1;
- (bool)isBluetooth;
- (id)source;
- (id)uid;

@end
