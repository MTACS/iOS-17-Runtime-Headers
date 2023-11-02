
@interface MLClassifier : MLModel <MLClassifier> {
    NSObject<OS_dispatch_queue> * _asyncClassifierQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _asyncClassifierQueueLock;
    bool  _supportsAsyncClassification;
}

@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MLModelMetadata *metadata;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, readonly) unsigned long long predictionTypeForKTrace;
@property (nonatomic, readonly) bool recordsPredictionEvent;
@property (nonatomic, readonly) unsigned long long signpostID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsConcurrentSubmissions;

+ (id)predictionFromFeatures:(id)arg1 classifier:(id)arg2 options:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (bool)_needsToEmulateAsyncClassificationUsingQueue:(id*)arg1;
- (id)classLabels;
- (id)classifierResultFromOutputFeatures:(id)arg1 error:(id*)arg2;
- (id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)initDescriptionOnlyWithSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)initWithDescription:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
