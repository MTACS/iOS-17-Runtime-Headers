
@interface CLAvailabilityTileParser : NSObject {
    struct shared_ptr<AvailabilityTile> { 
        struct AvailabilityTile {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _avlTile;
    NSURL * _path;
}

@property (nonatomic, readonly) NSURL *path;

+ (void)_setParamOverrides:(void*)arg1 fromDict:(id)arg2;
+ (bool)generateAvlTileFromJSON:(id)arg1 atPath:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_openTileFileForIncrementalIO;
- (void*)getAvlTile;
- (bool)getNextVenueBoundsIncrementally:(void*)arg1;
- (id)init;
- (id)initWithEmptyTile;
- (id)initWithTilePathIncrementalIO:(id)arg1;
- (int)numTotalExpectedExteriorsInVenues;
- (int)numVenuesExpected;
- (id)path;
- (bool)tileIsOpenForIncrementalIO;
- (unsigned long long)venuesCount;

@end
