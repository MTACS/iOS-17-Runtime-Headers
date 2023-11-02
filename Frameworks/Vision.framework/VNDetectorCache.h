
@interface VNDetectorCache : NSObject <VNDetectorProviding, VNDetectorReleasing> {
    <VNDetectorCacheDelegate> * _delegate;
    struct { 
        unsigned int reportDidCacheDetector : 1; 
        unsigned int reportDidEvictDetector : 1; 
    }  _delegateFlags;
    NSMutableSet * _detectors;
}

@property (readonly, copy) NSString *debugDescription;
@property (retain) <VNDetectorCacheDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cacheDetector:(id)arg1;
- (id)delegate;
- (id)detectorOfClass:(Class)arg1 configuredWithOptions:(id)arg2 error:(id*)arg3;
- (id)detectorOfType:(id)arg1 configuredWithOptions:(id)arg2 error:(id*)arg3;
- (void)evictAllDetectors;
- (void)evictDetectorsPassingTest:(id /* block */)arg1;
- (id)init;
- (id)loadedDetectors;
- (void)releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
