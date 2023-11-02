
@interface CIRectangleDetector : CIDetector {
    CIContext * context;
    NSMutableDictionary * featureOptions;
}

@property (nonatomic, retain) CIContext *context;

- (id)context;
- (void)dealloc;
- (id)featuresInImage:(id)arg1;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (id)initWithContext:(id)arg1 options:(id)arg2;
- (void)releaseResources;
- (void)setContext:(id)arg1;

@end
