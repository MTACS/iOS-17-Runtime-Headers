
@interface HFCameraClipPosition : NSObject <NAIdentifiable, NSCopying> {
    <HFCameraRecordingEvent> * _event;
    double  _offset;
}

@property (nonatomic, readonly) HMCameraClip *clip;
@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <HFCameraRecordingEvent> *event;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double offset;
@property (readonly) Class superclass;

+ (id)na_identity;
+ (id)positionWithClip:(id)arg1 offset:(double)arg2;
+ (id)positionWithEvent:(id)arg1 offset:(double)arg2;

- (void).cxx_destruct;
- (id)clip;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)event;
- (unsigned long long)hash;
- (id)initWithClip:(id)arg1 offset:(double)arg2;
- (id)initWithEvent:(id)arg1 offset:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)offset;

@end
