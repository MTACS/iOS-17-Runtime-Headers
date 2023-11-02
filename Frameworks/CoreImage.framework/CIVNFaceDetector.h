
@interface CIVNFaceDetector : CIDetector {
    CIContext * context;
}

@property (readonly, retain) CIContext *context;

- (id)context;
- (void)dealloc;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (id)initWithContext:(id)arg1 options:(id)arg2;

@end
