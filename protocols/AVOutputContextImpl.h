
@protocol AVOutputContextImpl <NSObject>

@required

+ (id)addSharedAudioOutputContextImpl;
+ (NSArray *)allSharedAudioOutputContextImpls;
+ (id)auxiliaryOutputContext;
+ (id)defaultSharedOutputContextImpl;
+ (id)iTunesAudioContext;
+ (bool)outputContextExistsWithRemoteOutputDevice;
+ (id)outputContextImplForControllingOutputDeviceGroupWithID:(NSString *)arg1 options:(NSDictionary *)arg2;
+ (id)outputContextImplForID:(NSString *)arg1 type:(NSString *)arg2;
+ (id)platformDependentScreenOrVideoContext;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)sharedAudioPresentationOutputContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemRemotePoolContext;
+ (id)sharedSystemScreenContext;

- (NSString *)ID;
- (void)addOutputDevice:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: AVOutputDevice *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVOutputContextDestinationChange *, void*
- (NSString *)associatedAudioDeviceID;
- (bool)canMute;
- (bool)canSetVolume;
- (void)decreaseVolumeByCount:(long long)arg1;
- (void)increaseVolumeByCount:(long long)arg1;
- (bool)isMuted;
- (AVOutputContextCommunicationChannel *)openCommunicationChannelWithOptions:(NSDictionary *)arg1 error:(id*)arg2;
- (AVOutputContextCommunicationChannel *)outgoingCommunicationChannel;
- (void)outputContextDidChangeApplicationProcessID:(AVOutputContext *)arg1;
- (NSString *)outputContextType;
- (AVOutputDevice *)outputDevice;
- (NSArray *)outputDevices;
- (AVOutputContext *)parentOutputContext;
- (AVOutputDevice *)predictedOutputDevice;
- (bool)providesControlForAllVolumeFeatures;
- (void)removeOutputDevice:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: AVOutputDevice *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVOutputContextDestinationChange *, void*
- (void)resetPredictedOutputDevice;
- (void)setMuted:(bool)arg1;
- (void)setOutputDevice:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: AVOutputDevice *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVOutputContextDestinationChange *, void*
- (void)setOutputDevices:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVOutputContextDestinationChange *, void*
- (void)setParentOutputContext:(AVOutputContext *)arg1;
- (void)setVolume:(float)arg1;
- (bool)supportsMultipleBluetoothOutputDevices;
- (bool)supportsMultipleOutputDevices;
- (float)volume;
- (long long)volumeControlType;

@end
