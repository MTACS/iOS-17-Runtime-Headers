
@interface AXSDDetectionResult : NSObject {
    double  _confidence;
    NSString * _identifier;
    AXSDTimeStamp * _timestamp;
}

@property (readonly) double confidence;
@property (readonly) NSString *debug;
@property (readonly) NSString *identifier;
@property (readonly) AXSDTimeStamp *timestamp;

- (void).cxx_destruct;
- (double)confidence;
- (id)debug;
- (id)identifier;
- (id)initWithResult:(id)arg1;
- (id)initWithTimeStamp:(id)arg1 identifier:(id)arg2 confidence:(double)arg3;
- (id)timestamp;

@end
