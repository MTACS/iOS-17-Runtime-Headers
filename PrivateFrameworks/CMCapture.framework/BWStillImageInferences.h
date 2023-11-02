
@interface BWStillImageInferences : NSObject {
    NSArray * _faceObservations;
    struct __CVBuffer { } * _hairMask;
    NSDictionary * _inferenceAttachedMediaMetadata;
    NSArray * _lowResPersonInstanceBoundingBoxes;
    NSArray * _lowResPersonInstanceConfidences;
    NSArray * _lowResPersonInstanceMasks;
    struct __CVBuffer { } * _lowResPersonMask;
    struct __CVBuffer { } * _personMask;
    struct __CVBuffer { } * _skinMask;
    NSArray * _skinToneClassifications;
    struct __CVBuffer { } * _skyMask;
    NSDictionary * _smartCameraClassifications;
}

@property (nonatomic, readonly) NSArray *faceObservations;
@property (nonatomic, readonly) struct __CVBuffer { }*hairMask;
@property (nonatomic, readonly) NSDictionary *inferenceAttachedMediaMetadata;
@property (nonatomic, readonly) NSArray *lowResPersonInstanceBoundingBoxes;
@property (nonatomic, readonly) NSArray *lowResPersonInstanceConfidences;
@property (nonatomic, readonly) NSArray *lowResPersonInstanceMasks;
@property (nonatomic, readonly) struct __CVBuffer { }*lowResPersonMask;
@property (nonatomic, readonly) struct __CVBuffer { }*personMask;
@property (nonatomic, readonly) struct __CVBuffer { }*skinMask;
@property (nonatomic, readonly) NSArray *skinToneClassifications;
@property (nonatomic, readonly) struct __CVBuffer { }*skyMask;

- (void)addInference:(id)arg1 inferenceAttachmentKey:(id)arg2;
- (void)addInferenceAttachedMediaMetadata:(id)arg1;
- (void)addInferenceBuffer:(struct __CVBuffer { }*)arg1 inferenceAttachedMediaKey:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)faceObservations;
- (struct __CVBuffer { }*)hairMask;
- (id)inferenceAttachedMediaMetadata;
- (id)initWithSkinMask:(struct __CVBuffer { }*)arg1 hairMask:(struct __CVBuffer { }*)arg2 skyMask:(struct __CVBuffer { }*)arg3 personMask:(struct __CVBuffer { }*)arg4 lowResPersonMask:(struct __CVBuffer { }*)arg5 lowResPersonInstanceMasks:(id)arg6 lowResPersonInstanceConfidences:(id)arg7 lowResPersonInstanceBoundingBoxes:(id)arg8 skinToneClassifications:(id)arg9 faceObservations:(id)arg10 inferenceAttachedMediaMetadata:(id)arg11;
- (id)lowResPersonInstanceBoundingBoxes;
- (id)lowResPersonInstanceConfidences;
- (id)lowResPersonInstanceMasks;
- (struct __CVBuffer { }*)lowResPersonMask;
- (struct __CVBuffer { }*)personMask;
- (struct __CVBuffer { }*)skinMask;
- (id)skinToneClassifications;
- (struct __CVBuffer { }*)skyMask;

@end
