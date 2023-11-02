
@interface SARestaurantRestaurant : SALocalSearchBusiness2

@property (nonatomic, copy) NSArray *attributeSet;
@property (nonatomic, copy) NSArray *makeReservationPunchOuts;
@property (nonatomic, copy) NSURL *menuLink;
@property (nonatomic, copy) NSArray *openings;
@property (nonatomic, copy) NSArray *orderDeliveryPunchOuts;

+ (id)restaurant;
+ (id)restaurantWithDictionary:(id)arg1 context:(id)arg2;

- (id)attributeSet;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)makeReservationPunchOuts;
- (id)menuLink;
- (id)openings;
- (id)orderDeliveryPunchOuts;
- (void)setAttributeSet:(id)arg1;
- (void)setMakeReservationPunchOuts:(id)arg1;
- (void)setMenuLink:(id)arg1;
- (void)setOpenings:(id)arg1;
- (void)setOrderDeliveryPunchOuts:(id)arg1;

@end
