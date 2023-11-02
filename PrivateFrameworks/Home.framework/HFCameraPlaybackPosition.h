
@interface HFCameraPlaybackPosition : NSObject <NAIdentifiable> {
    HMCameraClip * _clip;
    NSDate * _clipPlaybackDate;
    unsigned long long  _contentType;
}

@property (nonatomic, retain) HMCameraClip *clip;
@property (nonatomic, readonly, copy) NSDate *clipPlaybackDate;
@property (nonatomic, readonly) unsigned long long contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clipPositionWithDate:(id)arg1;
+ (id)clipPositionWithDate:(id)arg1 inClip:(id)arg2;
+ (id)livePosition;
+ (id)na_identity;

- (void).cxx_destruct;
- (id)clip;
- (bool)clipIncludesPlaybackDate;
- (id)clipPlaybackDate;
- (unsigned long long)contentType;
- (id)description;
- (unsigned long long)hash;
- (id)initWithClipPlaybackDate:(id)arg1 inClip:(id)arg2;
- (id)initWithContentType:(unsigned long long)arg1 clipPlaybackDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setClip:(id)arg1;

@end
