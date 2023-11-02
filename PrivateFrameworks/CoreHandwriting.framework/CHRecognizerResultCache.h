
@interface CHRecognizerResultCache : NSObject {
    NSMutableDictionary * _lastDrawings;
    NSMutableDictionary * _textResults;
}

- (void).cxx_destruct;
- (void)cacheTextResult:(id)arg1 drawing:(id)arg2 recognitionEngineCachingKey:(id)arg3;
- (void)clearCacheForKey:(id)arg1;
- (id)init;
- (id)retrievePartialResultsForDrawing:(id)arg1 recognitionEngineCachingKey:(id)arg2 matchingColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;

@end
