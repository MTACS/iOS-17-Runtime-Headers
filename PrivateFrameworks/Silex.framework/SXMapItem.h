
@interface SXMapItem : SXJSONObject

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) long long type;

@end
