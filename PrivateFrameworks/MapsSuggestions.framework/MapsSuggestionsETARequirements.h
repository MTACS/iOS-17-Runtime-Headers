
@interface MapsSuggestionsETARequirements : NSObject <NSCopying> {
    double  _maxAge;
    double  _maxDistance;
    double  _minAccuracy;
}

@property (nonatomic, readonly) double maxAge;
@property (nonatomic, readonly) double maxDistance;
@property (nonatomic, readonly) double minAccuracy;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithMaxAge:(double)arg1 maxDistance:(double)arg2 minAccuracy:(double)arg3;
- (double)maxAge;
- (double)maxDistance;
- (double)minAccuracy;

@end
