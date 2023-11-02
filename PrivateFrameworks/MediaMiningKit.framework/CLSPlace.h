
@interface CLSPlace : CLSPrimitive {
    CLSBusinessItem * _businessItem;
    NSArray * _categories;
    NSString * _name;
    CLSLitePlacemark * _placemark;
    CLCircularRegion * _region;
}

@property (nonatomic, readonly) CLSBusinessItem *businessItem;
@property (nonatomic, retain) NSArray *categories;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) CLSLitePlacemark *placemark;
@property (nonatomic, readonly) CLCircularRegion *region;

+ (id)placeWithBusinessItem:(id)arg1;
+ (id)placeWithLocation:(id)arg1;
+ (id)placeWithPlacemark:(id)arg1;

- (void).cxx_destruct;
- (id)businessItem;
- (id)categories;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToPlace:(id)arg1;
- (id)name;
- (id)placemark;
- (id)region;
- (void)setCategories:(id)arg1;

@end
