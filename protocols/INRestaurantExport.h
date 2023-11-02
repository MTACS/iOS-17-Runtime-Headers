
@protocol INRestaurantExport <NSObject, JSExport>

@required

- (id)init;
- (CLLocation *)location;
- (NSString *)name;
- (NSString *)restaurantIdentifier;
- (void)setLocation:(CLLocation *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setRestaurantIdentifier:(NSString *)arg1;
- (void)setVendorIdentifier:(NSString *)arg1;
- (NSString *)vendorIdentifier;

@end
