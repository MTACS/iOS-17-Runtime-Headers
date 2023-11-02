
@interface ARCoachingSessionCache : NSObject {
    long long  _horizontalPlaneCount;
    bool  _planeCacheInitialized;
    long long  _planeCount;
    long long  _verticalPlaneCount;
}

- (void)anchorsAdded:(id)arg1;
- (void)anchorsRemoved:(id)arg1;
- (void)clear;
- (bool)hasAnyPlane:(id)arg1;
- (bool)hasHorizontalPlane:(id)arg1;
- (bool)hasVerticalPlane:(id)arg1;
- (id)init;
- (void)initializePlaneCache:(id)arg1;
- (void)removeFromPlaneCache:(id)arg1;
- (void)sessionChanged;
- (void)updatePlaneCache:(id)arg1;

@end
