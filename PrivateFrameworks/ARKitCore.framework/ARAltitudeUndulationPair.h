
@interface ARAltitudeUndulationPair : NSObject {
    double  _altitude;
    bool  _lookupFailed;
    long long  _source;
    double  _undulation;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) bool lookupFailed;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly) double undulation;

- (double)altitude;
- (id)initWithAltitude:(double)arg1 undulation:(double)arg2 lookupFailed:(bool)arg3 source:(long long)arg4;
- (bool)lookupFailed;
- (long long)source;
- (double)undulation;

@end
