
@interface ARObjectDetectionResultData : NSObject <ARQATraceable, ARResultData> {
    NSArray * _detectedObjects;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *detectedObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) NSDictionary *tracingEntry;

- (void).cxx_destruct;
- (id)anchorsForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (id)detectedObjects;
- (bool)isEqual:(id)arg1;
- (void)setDetectedObjects:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (id)tracingEntry;

@end
