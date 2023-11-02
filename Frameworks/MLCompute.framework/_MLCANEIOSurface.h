
@interface _MLCANEIOSurface : NSObject {
    _ANEIOSurfaceObject * _ioSurfaceObject;
    NSDictionary * _liveIOStatus;
}

@property (nonatomic, readonly, retain) _ANEIOSurfaceObject *ioSurfaceObject;
@property (nonatomic, readonly, retain) NSDictionary *liveIOStatus;

+ (void)initialize;
+ (id)objectWithDataLength:(unsigned long long)arg1 liveIOStatus:(id)arg2;

- (void).cxx_destruct;
- (id)aneIOSurfaceObjectWithDataLength:(unsigned long long)arg1;
- (struct __IOSurface { }*)createIOSurface1x1WithLength:(unsigned long long)arg1;
- (id)initWithDataLength:(unsigned long long)arg1 liveIOStatus:(id)arg2;
- (id)ioSurfaceObject;
- (id)liveIOStatus;

@end
