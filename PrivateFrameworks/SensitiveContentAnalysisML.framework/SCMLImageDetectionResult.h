
@interface SCMLImageDetectionResult : NSObject {
    NSArray * _detections;
}

@property (nonatomic, readonly) NSArray *detections;

- (void).cxx_destruct;
- (id)detections;
- (id)initWithDetections:(id)arg1;

@end
