
@interface CHRecognizerInferenceCache : NSObject {
    NSMutableDictionary * _cachedActivationMatrices;
    NSMutableDictionary * _cachedStrokeEndings;
    NSMutableDictionary * _cachedStrokeIndexMappings;
    CHDrawing * _lastDrawing;
}

- (void).cxx_destruct;
- (void)cacheActivationMatrix:(id)arg1 strokeIndexMapping:(id)arg2 strokeEndings:(id)arg3 drawing:(id)arg4 recognitionEngineCachingKey:(id)arg5;
- (void)clearCache;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)retrieveActivationMatrixForDrawing:(id)arg1 recognitionEngineCachingKey:(id)arg2 outStrokeIndexMapping:(id*)arg3 outStrokeEndings:(id*)arg4;

@end
