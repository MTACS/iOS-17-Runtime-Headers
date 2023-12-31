
@interface AVPairedDevice : NSObject {
    AVPairedDeviceInternal * _ivars;
}

@property (nonatomic, readonly) NSString *modelID;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *pairedDeviceID;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (nonatomic, readonly) NSString *productName;

+ (id)pairedDevicesConnectedToOutputDevice:(id)arg1;

- (id)ID;
- (void)dealloc;
- (id)initWithName:(id)arg1 ID:(id)arg2 modelID:(id)arg3 playing:(bool)arg4 productName:(id)arg5;
- (bool)isPlaying;
- (id)modelID;
- (id)name;
- (id)pairedDeviceID;
- (id)productName;

@end
