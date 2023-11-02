
@interface HFCameraClipVideoAssetOperationCache : NSObject {
    unsigned long long  _count;
    HFCameraClipVideoAssetOperationMarker * _head;
    NSMutableDictionary * _markerInfo;
    unsigned long long  _maxSize;
    HFCameraClipVideoAssetOperationMarker * _tail;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic, retain) HFCameraClipVideoAssetOperationMarker *head;
@property (nonatomic, retain) NSMutableDictionary *markerInfo;
@property (nonatomic) unsigned long long maxSize;
@property (nonatomic, retain) HFCameraClipVideoAssetOperationMarker *tail;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (double)defaultFrameSize;

- (void).cxx_destruct;
- (void)_removeOperationForKey:(id)arg1;
- (void)addOperation:(id)arg1 forClip:(id)arg2 usingKey:(id)arg3;
- (unsigned long long)cacheSizeForDevice;
- (unsigned long long)count;
- (id)head;
- (id)init;
- (id)markerInfo;
- (unsigned long long)maxSize;
- (id)operationForKey:(id)arg1;
- (void)pointHeadAtMarker:(id)arg1;
- (void)purge;
- (void)removeMarker:(id)arg1;
- (void)removeOperationForKey:(id)arg1;
- (void)resetSentinels;
- (void)setCount:(unsigned long long)arg1;
- (void)setHead:(id)arg1;
- (void)setMarkerInfo:(id)arg1;
- (void)setMaxSize:(unsigned long long)arg1;
- (void)setTail:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)tail;
- (id)workQueue;

@end
