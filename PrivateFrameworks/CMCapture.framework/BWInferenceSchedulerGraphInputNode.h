
@interface BWInferenceSchedulerGraphInputNode : NSObject <BWInferenceExtractable, BWInferenceJobProvider> {
    NSSet * _videoPropagatedToStorage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <BWInferenceExecutable> *executable;
@property (nonatomic, readonly) <BWInferenceExtractable> *extractable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BWInferencePropagatable> *propagatable;
@property (nonatomic, readonly) <BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)executable;
- (int)extractFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingVideoRequirements:(id)arg2 metadataRequirements:(id)arg3 toStorage:(id)arg4;
- (int)extractFromStorage:(id)arg1 usingVideoRequirements:(id)arg2 metadataRequirements:(id)arg3 toSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4;
- (id)extractable;
- (id)initWithVideoPropagatedToStorage:(id)arg1;
- (id)newStorage;
- (id)propagatable;
- (id)submittable;
- (int)type;

@end
