
@interface SREMusicRetrievalModel : NSObject {
    MMapStruct * _modelMMap;
    SRResources * _resources;
}

@property (nonatomic, retain) MMapStruct *modelMMap;
@property (nonatomic, retain) SRResources *resources;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_loadModelWithError:(id*)arg1;
- (id)inferenceWithSequence:(id)arg1 query:(id)arg2 error:(id*)arg3;
- (id)initWithError:(id*)arg1;
- (id)modelMMap;
- (id)resources;
- (void)setModelMMap:(id)arg1;
- (void)setResources:(id)arg1;

@end
