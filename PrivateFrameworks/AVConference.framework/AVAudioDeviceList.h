
@interface AVAudioDeviceList : NSObject {
    AVInternalDeviceList * _internalList;
}

@property (nonatomic, copy) id /* block */ changeListener;

+ (id)currentInputDevice;
+ (id)defaultInputDevice;
+ (id)defaultOutputDevice;
+ (id)deviceForDeviceID:(unsigned int)arg1;
+ (id)deviceForUID:(id)arg1;
+ (bool)setInputDevice:(id)arg1;

- (id /* block */)changeListener;
- (void)dealloc;
- (id)devices;
- (id)init;
- (id)inputDevices;
- (id)outputDevices;
- (void)setChangeListener:(id /* block */)arg1;

@end
