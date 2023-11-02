
@interface CIVNDetector : CIDetector {
    CIContext * context;
}

- (void)dealloc;
- (id)featuresInImage:(id)arg1 withContext:(id)arg2;
- (id)initWithContext:(id)arg1 options:(id)arg2;

@end
