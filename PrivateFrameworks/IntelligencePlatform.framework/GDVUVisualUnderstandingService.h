
@interface GDVUVisualUnderstandingService : NSObject {
    void inner;
}

@property (nonatomic, readonly) GDVUGallery *gallery;

- (void).cxx_destruct;
- (id)changesSince:(id)arg1 error:(id*)arg2 body:(id /* block */)arg3;
- (id)entitiesFor:(id)arg1 error:(id*)arg2 body:(id /* block */)arg3;
- (id)gallery;
- (id)inferredDeviceOwner;
- (id)inferredDeviceOwnerWithIgnoreMeGroundTruth:(bool)arg1;
- (id)init;
- (id)initWithClient:(id)arg1 version:(long long)arg2 url:(id)arg3 error:(id*)arg4;
- (bool)keyObservationFor:(id)arg1 output:(long long*)arg2 error:(id*)arg3;
- (id)recognizeIn:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)recognizeIn:(id)arg1 contextMoment:(long long)arg2 error:(id*)arg3;
- (bool)similarEntitiesTo:(id)arg1 error:(id*)arg2 body:(id /* block */)arg3;
- (bool)similarityWithBetween:(id)arg1 and:(id)arg2 output:(double*)arg3 error:(id*)arg4;

@end
