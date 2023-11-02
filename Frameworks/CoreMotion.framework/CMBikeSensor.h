
@interface CMBikeSensor : NSObject {
    CMBikeSensorInternal * _internal;
}

@property (nonatomic, readonly) CMBikeSensorInternal *_internal;

+ (bool)isAvailable;

- (id)_internal;
- (void)dealloc;
- (void)feedBikeSensorData:(id)arg1;
- (id)init;

@end
