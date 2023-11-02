
@interface RSNodeSampleMessage : RSNodeMessage {
    NSDictionary * _attachments;
    struct opaqueCMSampleBuffer { } * _sampleBuffer;
}

@property (nonatomic, readonly, copy) NSDictionary *attachments;
@property (nonatomic, readonly) RSFloorPlan *floorPlan;
@property (nonatomic, readonly) <RSFrame> *frame;
@property (nonatomic, readonly) RSGeometryMeta *geometryMeta;
@property (nonatomic, readonly) NSArray *keyFrames;
@property (nonatomic, readonly) NSArray *mirrorPoints;
@property (nonatomic, readonly) NSArray *objects;
@property (nonatomic, readonly) <RSPointCloud> *pointCloud;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*sampleBuffer;
@property (nonatomic, readonly) RSSemanticImage *semanticImage;
@property (nonatomic, readonly) RSTemporalMeta *temporalMeta;

+ (id)new;

- (void).cxx_destruct;
- (id)attachments;
- (void)dealloc;
- (id)floorPlan;
- (id)frame;
- (id)geometryMeta;
- (id)init;
- (id)initWithFloorPlan:(id)arg1;
- (id)initWithFrame:(id)arg1;
- (id)initWithGeometryMeta:(id)arg1;
- (id)initWithKeyFrames:(id)arg1;
- (id)initWithMirrorPoints:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (id)initWithPointCloud:(id)arg1;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 attachments:(id)arg2;
- (id)initWithSemanticImage:(id)arg1;
- (id)initWithTemporalMeta:(id)arg1;
- (id)keyFrames;
- (id)mirrorPoints;
- (id)objects;
- (id)pointCloud;
- (struct opaqueCMSampleBuffer { }*)sampleBuffer;
- (id)semanticImage;
- (id)temporalMeta;
- (unsigned long long)type;

@end
