
@interface PGTripTitleGenerator : NSObject

+ (id)titleForFeaturedLocationNodes:(id)arg1 momentNodes:(id)arg2 locationHelper:(id)arg3 error:(id*)arg4;
+ (id)titleForTripNodeAsCollection:(id)arg1 locationHelper:(id)arg2 error:(id*)arg3;
+ (id)titleTupleForDayHighlightGroupNode:(id)arg1 locationHelper:(id)arg2 error:(id*)arg3;

- (id)init;

@end
