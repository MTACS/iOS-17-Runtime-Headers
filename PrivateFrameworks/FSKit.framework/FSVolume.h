
@interface FSVolume : NSObject {
    NSObject<OS_dispatch_queue> * _globalWorkQueue;
    NSObject<OS_dispatch_queue> * _renameWorkQueue;
    int  _volumeState;
    bool  _wasTerminated;
}

@property (retain) NSObject<OS_dispatch_queue> *globalWorkQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *renameWorkQueue;
@property (nonatomic) int volumeState;
@property (nonatomic) bool wasTerminated;

+ (id /* block */)newLIDirEntryPacker:(void*)arg1 bufLen:(unsigned long long)arg2 bytesPacked:(unsigned long long*)arg3 withAttr:(bool)arg4;
+ (int)pathConfUnlimited;
+ (id)volumeIdentifierDescription:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)globalWorkQueue;
- (id)renameWorkQueue;
- (void)setGlobalWorkQueue:(id)arg1;
- (void)setRenameWorkQueue:(id)arg1;
- (void)setVolumeState:(int)arg1;
- (void)setWasTerminated:(bool)arg1;
- (int)volumeState;
- (bool)wasTerminated;

@end
