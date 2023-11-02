
@interface ICASEndDrawingStrokeData : NSObject <AADataEventType> {
    NSNumber * _endFingerStrokeCount;
    NSNumber * _endPencilStrokeCount;
}

@property (nonatomic, readonly) NSNumber *endFingerStrokeCount;
@property (nonatomic, readonly) NSNumber *endPencilStrokeCount;

+ (id)dataName;

- (void).cxx_destruct;
- (id)endFingerStrokeCount;
- (id)endPencilStrokeCount;
- (id)initWithEndPencilStrokeCount:(id)arg1 endFingerStrokeCount:(id)arg2;
- (id)toDict;

@end
