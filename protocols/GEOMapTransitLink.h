
@protocol GEOMapTransitLink <GEOMapLine>

@required

- (double)distanceInMetersFrom:(struct { double x1; double x2; })arg1 outClosestCoordinateOnLine:(struct { double x1; double x2; }*)arg2;
- (NSString *)internalLineName;
- (unsigned int)minimumTravelTime;
- (<GEOMapTransitStop> *)stopFrom;
- (<GEOMapTransitStop> *)stopTo;
- (unsigned long long)transitLineID;

@end
