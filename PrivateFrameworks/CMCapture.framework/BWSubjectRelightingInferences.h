
@interface BWSubjectRelightingInferences : NSObject {
    NSArray * _lowResPersonInstanceBoundingBoxes;
    NSArray * _lowResPersonInstanceConfidences;
    NSArray * _lowResPersonInstanceMasks;
    struct __CVBuffer { } * _personMask;
    struct __CVBuffer { } * _skinMask;
    NSArray * _skinToneClassificationsForFaces;
}

@property (nonatomic, retain) NSArray *lowResPersonInstanceBoundingBoxes;
@property (nonatomic, retain) NSArray *lowResPersonInstanceConfidences;
@property (nonatomic, retain) NSArray *lowResPersonInstanceMasks;
@property (nonatomic, retain) struct __CVBuffer { }*personMask;
@property (nonatomic, retain) struct __CVBuffer { }*skinMask;
@property (nonatomic, retain) NSArray *skinToneClassificationsForFaces;

- (void)dealloc;
- (id)lowResPersonInstanceBoundingBoxes;
- (id)lowResPersonInstanceConfidences;
- (id)lowResPersonInstanceMasks;
- (struct __CVBuffer { }*)personMask;
- (void)setLowResPersonInstanceBoundingBoxes:(id)arg1;
- (void)setLowResPersonInstanceConfidences:(id)arg1;
- (void)setLowResPersonInstanceMasks:(id)arg1;
- (void)setPersonMask:(struct __CVBuffer { }*)arg1;
- (void)setSkinMask:(struct __CVBuffer { }*)arg1;
- (void)setSkinToneClassificationsForFaces:(id)arg1;
- (struct __CVBuffer { }*)skinMask;
- (id)skinToneClassificationsForFaces;

@end
