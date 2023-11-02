
@interface ICASDrawingSnapshotItemData : NSObject <AADataEventType> {
    NSNumber * _countOfFullscreenDrawingStrokes;
    NSNumber * _countOfInlineDrawingV1FingerStrokes;
    NSNumber * _countOfInlineDrawingV1PencilStrokes;
    NSNumber * _countOfInlineDrawingV2FingerStrokes;
    NSNumber * _countOfInlineDrawingV2PencilStrokes;
}

@property (nonatomic, readonly) NSNumber *countOfFullscreenDrawingStrokes;
@property (nonatomic, readonly) NSNumber *countOfInlineDrawingV1FingerStrokes;
@property (nonatomic, readonly) NSNumber *countOfInlineDrawingV1PencilStrokes;
@property (nonatomic, readonly) NSNumber *countOfInlineDrawingV2FingerStrokes;
@property (nonatomic, readonly) NSNumber *countOfInlineDrawingV2PencilStrokes;

+ (id)dataName;

- (void).cxx_destruct;
- (id)countOfFullscreenDrawingStrokes;
- (id)countOfInlineDrawingV1FingerStrokes;
- (id)countOfInlineDrawingV1PencilStrokes;
- (id)countOfInlineDrawingV2FingerStrokes;
- (id)countOfInlineDrawingV2PencilStrokes;
- (id)initWithCountOfInlineDrawingV1PencilStrokes:(id)arg1 countOfInlineDrawingV1FingerStrokes:(id)arg2 countOfInlineDrawingV2PencilStrokes:(id)arg3 countOfInlineDrawingV2FingerStrokes:(id)arg4 countOfFullscreenDrawingStrokes:(id)arg5;
- (id)toDict;

@end
