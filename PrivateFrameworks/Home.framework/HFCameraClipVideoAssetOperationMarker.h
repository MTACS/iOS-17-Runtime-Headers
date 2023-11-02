
@interface HFCameraClipVideoAssetOperationMarker : NSObject {
    HMCameraClip * _clip;
    NSString * _key;
    HFCameraClipVideoAssetOperationMarker * _next;
    HMCameraClipFetchVideoAssetContextOperation * _operation;
    HFCameraClipVideoAssetOperationMarker * _previous;
}

@property (nonatomic, retain) HMCameraClip *clip;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) HFCameraClipVideoAssetOperationMarker *next;
@property (nonatomic) HMCameraClipFetchVideoAssetContextOperation *operation;
@property (nonatomic) HFCameraClipVideoAssetOperationMarker *previous;

+ (id)sentinelWithKey:(id)arg1;

- (void).cxx_destruct;
- (id)clip;
- (id)initWithCameraClip:(id)arg1 operation:(id)arg2 key:(id)arg3;
- (id)key;
- (id)next;
- (id)operation;
- (id)previous;
- (void)setClip:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setNext:(id)arg1;
- (void)setOperation:(id)arg1;
- (void)setPrevious:(id)arg1;

@end
