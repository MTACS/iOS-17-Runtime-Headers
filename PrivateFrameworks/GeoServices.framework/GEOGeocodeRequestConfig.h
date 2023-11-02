
@interface GEOGeocodeRequestConfig : GEOServiceRequestDefaultConfig

+ (id)standardConfig;

- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })dataRequestKindForRequest:(id)arg1 traits:(id)arg2;
- (id)serviceTypeNumber;
- (unsigned long long)urlType;

@end
