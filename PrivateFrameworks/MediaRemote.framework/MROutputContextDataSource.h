
@interface MROutputContextDataSource : NSObject {
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSArray * _outputDevices;
    bool  _shouldLog;
    NSString * _uniqueIdentifier;
    float  _volume;
    unsigned int  _volumeControlCapabilities;
    bool  _volumeMuted;
}

@property (nonatomic, readonly) bool isAirPlaying;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, readonly) NSArray *outputDevices;
@property (nonatomic) bool shouldLog;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) float volume;
@property (nonatomic, readonly) unsigned int volumeControlCapabilities;
@property (getter=isVolumeMuted, nonatomic, readonly) bool volumeMuted;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (bool)isAirPlaying;
- (bool)isVolumeMuted;
- (id)notificationQueue;
- (id)outputDeviceForUID:(id)arg1;
- (id)outputDevices;
- (void)setNotificationQueue:(id)arg1;
- (void)setShouldLog:(bool)arg1;
- (bool)shouldLog;
- (id)uniqueIdentifier;
- (float)volume;
- (unsigned int)volumeControlCapabilities;
- (unsigned int)volumeControlCapabilitiesForOutputDeviceUID:(id)arg1 error:(id*)arg2;
- (float)volumeForOutputDeviceUID:(id)arg1 error:(id*)arg2;
- (bool)volumeMutedForOutputDeviceID:(id)arg1 error:(id*)arg2;

@end
