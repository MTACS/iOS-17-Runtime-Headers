
@interface CRRecognitionResult : NSObject <NSCopying, NSMutableCopying> {
    NSMutableArray * _detectedLineRegions;
    NSMutableDictionary * _detectorRecognizerResultMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _mapUpdateLock;
}

@property (retain) NSMutableArray *detectedLineRegions;
@property (retain) NSMutableDictionary *detectorRecognizerResultMap;

- (void).cxx_destruct;
- (id)_recognizedRegionsForDetectedLineRegion:(id)arg1;
- (void)addRecognizedRegionPair:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detectedLineRegions;
- (id)detectorRecognizerResultMap;
- (void)enumerateResultsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)recognizedLineRegions;
- (id)recognizedRegionsForDetectedLineRegion:(id)arg1;
- (id)recognizedRegionsForDetectedLineRegions:(id)arg1;
- (void)setDetectedLineRegions:(id)arg1;
- (void)setDetectorRecognizerResultMap:(id)arg1;

@end
