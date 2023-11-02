
@interface AEFeatureFlagsProvider : NSObject {
    AEOSGestalt * _OSGestalt;
}

- (void).cxx_destruct;
- (id)init;
- (id)makeFeatureFlags;

@end
