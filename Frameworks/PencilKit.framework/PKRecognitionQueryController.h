
@interface PKRecognitionQueryController : NSObject {
    NSMutableDictionary * _drawingQueries;
    NSMutableDictionary * _queriesToCreate;
    PKRecognitionSessionManager * _recognitionManager;
    NSMutableDictionary * _suffixes;
    NSMutableDictionary * _visibleStrokeQueries;
}

- (void).cxx_destruct;

@end
