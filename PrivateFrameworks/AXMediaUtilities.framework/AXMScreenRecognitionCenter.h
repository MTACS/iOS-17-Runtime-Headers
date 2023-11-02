
@interface AXMScreenRecognitionCenter : NSObject

+ (id)sharedInstance;

- (id)_processVisionResult:(id)arg1 options:(id)arg2 coagulator:(id)arg3;
- (struct { id x1; id x2; unsigned long long x3; })processFeatures:(id)arg1;

@end
