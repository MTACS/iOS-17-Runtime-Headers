
@interface CSLiveFSVolume : NSObject {
    NSObject<OS_xpc_object> * _delayedObject;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _volumeName;
    const char * _volumeNameCString;
    unsigned long long  _volumeNameCStringLength;
    NSURL * _volumeURL;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *delayedObject;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSString *volumeName;
@property (nonatomic, readonly) const char *volumeNameCString;
@property (nonatomic, readonly) unsigned long long volumeNameCStringLength;
@property (nonatomic, readonly) NSURL *volumeURL;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleDelayedEvent;
- (void)dealloc;
- (id)delayedObject;
- (id)init;
- (id)initWithVolumeName:(id)arg1;
- (id)initWithVolumeURL:(id)arg1;
- (bool)isInterestingPath:(const char *)arg1;
- (id)queue;
- (int)sendCSLiveFSEvent:(struct CSLiveEventInfo { int x1; int x2; char *x3; unsigned long long x4; id x5; int x6; union { struct CSLiveEventDataRename { char *x_1_2_1; int x_1_2_2; } x_7_1_1; struct CSLiveEventDataXattr { id x_2_2_1; id x_2_2_2; } x_7_1_2; } x7; }*)arg1;
- (void)sendDeleteEventForPID:(int)arg1 path:(const char *)arg2 pathLength:(unsigned long long)arg3;
- (void)sendEventOfType:(int)arg1 pid:(int)arg2 path:(const char *)arg3 pathLength:(unsigned long long)arg4 attributes:(id)arg5;
- (void)sendPairedEventOfType:(int)arg1 pid:(int)arg2 fromPath:(const char *)arg3 fromPathLength:(unsigned long long)arg4 fromAttributes:(id)arg5 toPath:(const char *)arg6 toPathLength:(unsigned long long)arg7 toAttributes:(id)arg8;
- (void)sendXattrModifiedEventForPID:(int)arg1 path:(const char *)arg2 pathLength:(unsigned long long)arg3 xAttrName:(id)arg4 xAttrValue:(id)arg5 attributes:(id)arg6;
- (void)sendXattrRemovedEventForPID:(int)arg1 path:(const char *)arg2 pathLength:(unsigned long long)arg3 xAttrName:(id)arg4 attributes:(id)arg5;
- (void)setDelayedObject:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)volumeName;
- (const char *)volumeNameCString;
- (unsigned long long)volumeNameCStringLength;
- (id)volumeURL;

@end
