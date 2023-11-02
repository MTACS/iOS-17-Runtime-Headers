
@interface PKPaymentSetupProductsSectionFactoryContext : NSObject {
    CLLocation * _location;
    NSString * _primaryCountryName;
    NSString * _primaryRegion;
    NSString * _secondaryCountryName;
    NSString * _secondaryRegion;
    NSCharacterSet * _tokenizerCharacterSet;
}

@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSString *primaryCountryName;
@property (nonatomic, readonly) NSString *primaryRegion;
@property (nonatomic, readonly) NSString *secondaryCountryName;
@property (nonatomic, readonly) NSString *secondaryRegion;
@property (nonatomic, readonly) NSCharacterSet *tokenizerCharacterSet;

+ (id)contextWithPrimaryRegion:(id)arg1 primaryCountryName:(id)arg2 secondaryRegion:(id)arg3 secondaryCountryName:(id)arg4 location:(id)arg5;
+ (id)contextWithPrimaryRegion:(id)arg1 primaryCountryName:(id)arg2 secondaryRegion:(id)arg3 secondaryCountryName:(id)arg4 location:(id)arg5 tokenizerCharacterSet:(id)arg6;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPrimaryRegion:(id)arg1 primaryCountryName:(id)arg2 secondaryRegion:(id)arg3 secondaryCountryName:(id)arg4 location:(id)arg5 tokenizerCharacterSet:(id)arg6;
- (id)location;
- (id)primaryCountryName;
- (id)primaryRegion;
- (id)secondaryCountryName;
- (id)secondaryRegion;
- (id)tokenizerCharacterSet;

@end
