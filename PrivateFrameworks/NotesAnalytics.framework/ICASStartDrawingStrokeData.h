
@interface ICASStartDrawingStrokeData : NSObject <AADataEventType> {
    NSNumber * _startFingerStrokeCount;
    NSNumber * _startPencilStrokeCount;
}

@property (nonatomic, readonly) NSNumber *startFingerStrokeCount;
@property (nonatomic, readonly) NSNumber *startPencilStrokeCount;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithStartPencilStrokeCount:(id)arg1 startFingerStrokeCount:(id)arg2;
- (id)startFingerStrokeCount;
- (id)startPencilStrokeCount;
- (id)toDict;

@end
