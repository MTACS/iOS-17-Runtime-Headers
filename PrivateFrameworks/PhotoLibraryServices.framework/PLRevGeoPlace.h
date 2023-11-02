
@interface PLRevGeoPlace : NSObject <NSSecureCoding> {
    NSDictionary * _placeInfosForOrderType;
}

@property (nonatomic, readonly) NSDictionary *placeInfosForOrderType;

+ (unsigned long long)_dominantOrderTypeForPlaceType:(id)arg1 lastOrderType:(unsigned long long)arg2;
+ (id)_newFilterSortedPlaceInfos:(id)arg1 usingPlaceAnnotation:(id)arg2 outFoundOrderType:(unsigned long long*)arg3 outPreviousOrderType:(unsigned long long*)arg4;
+ (id)placeWithMapItem:(id)arg1 placeAnnotation:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bestPlaceInfoForOrderType:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaceInfosForOrderType:(id)arg1;
- (id)placeInfosForOrderType;

@end
