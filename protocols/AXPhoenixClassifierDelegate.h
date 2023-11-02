
@protocol AXPhoenixClassifierDelegate <NSObject>

@required

- (void)phoenixClassifier:(AXPhoenixClassifier *)arg1 failedWithError:(NSError *)arg2;
- (void)phoenixClassifierDidDetectDoubleTap:(AXPhoenixClassifier *)arg1 data:(struct { double x1; double x2; double x3; double x4; })arg2 context:(NSDictionary *)arg3;
- (void)phoenixClassifierDidDetectTripleTap:(AXPhoenixClassifier *)arg1 data:(struct { double x1; double x2; double x3; double x4; })arg2 context:(NSDictionary *)arg3;
- (void)phoenixClassifierDidLogFile:(NSString *)arg1;

@end
