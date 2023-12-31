
@interface CMElevation : NSObject {
    CMAltimeterInternal * _internal;
}

@property (nonatomic, readonly) CMAltimeterInternal *_internal;

+ (bool)isElevationAvailable;

- (id)_internal;
- (void)dealloc;
- (id)init;
- (void)startElevationUpdatesWithHandler:(id /* block */)arg1;
- (void)stopElevationUpdates;

@end
