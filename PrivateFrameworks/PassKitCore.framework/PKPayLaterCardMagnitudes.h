
@interface PKPayLaterCardMagnitudes : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _foodAndDrinksCount;
    unsigned long long  _funCount;
    unsigned long long  _healthCount;
    unsigned long long  _servicesCount;
    unsigned long long  _shoppingCount;
    unsigned long long  _transportcount;
    unsigned long long  _travelCount;
    unsigned long long  _unknownCount;
}

@property (nonatomic) unsigned long long foodAndDrinksCount;
@property (nonatomic) unsigned long long funCount;
@property (nonatomic) unsigned long long healthCount;
@property (nonatomic) unsigned long long servicesCount;
@property (nonatomic) unsigned long long shoppingCount;
@property (nonatomic) unsigned long long transportcount;
@property (nonatomic) unsigned long long travelCount;
@property (nonatomic) unsigned long long unknownCount;

+ (id)emptyMangitudes;
+ (id)fullMagnitude;
+ (id)magnitudesFromFinancingPlans:(id)arg1;
+ (id)randomMagnitude;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)foodAndDrinksCount;
- (unsigned long long)funCount;
- (unsigned long long)healthCount;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaximumCount:(unsigned long long)arg1;
- (id)initWithUnknownCount:(unsigned long long)arg1 foodAndDrinksCount:(unsigned long long)arg2 shoppingCount:(unsigned long long)arg3 travelCount:(unsigned long long)arg4 servicesCount:(unsigned long long)arg5 funCount:(unsigned long long)arg6 healthCount:(unsigned long long)arg7 transportCount:(unsigned long long)arg8;
- (unsigned long long)servicesCount;
- (void)setFoodAndDrinksCount:(unsigned long long)arg1;
- (void)setFunCount:(unsigned long long)arg1;
- (void)setHealthCount:(unsigned long long)arg1;
- (void)setServicesCount:(unsigned long long)arg1;
- (void)setShoppingCount:(unsigned long long)arg1;
- (void)setTransportcount:(unsigned long long)arg1;
- (void)setTravelCount:(unsigned long long)arg1;
- (void)setUnknownCount:(unsigned long long)arg1;
- (unsigned long long)shoppingCount;
- (unsigned long long)transportcount;
- (unsigned long long)travelCount;
- (unsigned long long)unknownCount;

@end
