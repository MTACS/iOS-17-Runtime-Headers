
@interface ICASDrawingRecognitionData : NSObject <AADataEventType> {
    NSNumber * _countOfFingerStrokes;
    NSNumber * _countOfPencilStrokes;
    NSNumber * _countOfRecognizedHandwrittenCharacters;
    NSNumber * _countOfRecognizedLines;
    NSString * _drawingID;
    NSString * _handwritingLanguage;
}

@property (nonatomic, readonly) NSNumber *countOfFingerStrokes;
@property (nonatomic, readonly) NSNumber *countOfPencilStrokes;
@property (nonatomic, readonly) NSNumber *countOfRecognizedHandwrittenCharacters;
@property (nonatomic, readonly) NSNumber *countOfRecognizedLines;
@property (nonatomic, readonly) NSString *drawingID;
@property (nonatomic, readonly) NSString *handwritingLanguage;

+ (id)dataName;

- (void).cxx_destruct;
- (id)countOfFingerStrokes;
- (id)countOfPencilStrokes;
- (id)countOfRecognizedHandwrittenCharacters;
- (id)countOfRecognizedLines;
- (id)drawingID;
- (id)handwritingLanguage;
- (id)initWithCountOfPencilStrokes:(id)arg1 countOfFingerStrokes:(id)arg2 countOfRecognizedHandwrittenCharacters:(id)arg3 countOfRecognizedLines:(id)arg4 handwritingLanguage:(id)arg5 drawingID:(id)arg6;
- (id)toDict;

@end
